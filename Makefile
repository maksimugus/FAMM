TO_INSTALL_DIR := third_party

ANTLR_DIR := $(TO_INSTALL_DIR)\antlr4
ANTLR_RUNTIME_DIR := $(TO_INSTALL_DIR)\antlr4-cpp-runtime

DOCKER_IMAGE := antlr/antlr4

GEN_DIR := ${CURDIR}/lib/frontend

.PHONY: all
all: docker-build gen

.PHONY: clone-antlr
clone-antlr:
	@echo "Cloning ANTLR4 into $(ANTLR_DIR)..."
	@powershell -Command "if (-not (Test-Path '$(ANTLR_DIR)')) { git clone https://github.com/antlr/antlr4.git $(ANTLR_DIR) } else { echo 'ANTLR4 is already cloned.' }"

.PHONY: docker-build
docker-build: clone-antlr
	@echo "Building Docker image $(DOCKER_IMAGE)..."
	@cd $(ANTLR_DIR) && docker build -t $(DOCKER_IMAGE) --platform linux/amd64 -f docker/Dockerfile .

.PHONY: gen
gen:
	@echo "Generating Parser, Lexer, Listener in ${GEN_DIR}/gen"
	@docker run --rm -v ${GEN_DIR}:/work antlr/antlr4 -Dlanguage=Cpp /work/grammars/FAMM.g4 -o /work/gen

