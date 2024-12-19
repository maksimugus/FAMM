TO_INSTALL_DIR := third_party

ANTLR_DIR := $(TO_INSTALL_DIR)\antlr4
ANTLR_RUNTIME_DIR := $(TO_INSTALL_DIR)\antlr4-cpp-runtime

DOCKER_IMAGE := antlr/antlr4

GEN_DIR := ${CURDIR}/lib/frontend

.PHONY: all
all: docker-build

.PHONY: clone-antlr
clone-antlr:
	@echo "Cloning ANTLR4 into $(ANTLR_DIR)..."
	@powershell -Command "if (-not (Test-Path '$(ANTLR_DIR)')) { git clone https://github.com/antlr/antlr4.git $(ANTLR_DIR) } else { echo 'ANTLR4 is already cloned.' }"

.PHONY: clone-runtime
clone-runtime:
	@echo "Cloning ANTLR4 C++ runtime into $(ANTLR_RUNTIME_DIR)..."
	@powershell -Command "if (-not (Test-Path '$(ANTLR_RUNTIME_DIR)')) { git clone https://github.com/adeharo9/antlr4-cpp-runtime.git $(ANTLR_RUNTIME_DIR) } else { echo 'ANTLR4 C++ runtime is already cloned.' }"

.PHONY: docker-build
docker-build: clone-antlr clone-runtime
	@echo "Building Docker image $(DOCKER_IMAGE)..."
	@cd $(ANTLR_DIR) && docker build -t $(DOCKER_IMAGE) --platform linux/amd64 -f docker/Dockerfile .

.PHONY: generate
generate:
	@echo "Generating Parser, Lexer, Listener in ${GEN_DIR}/gen"
	@docker run --rm -v ${GEN_DIR}:/work antlr/antlr4 -Dlanguage=Cpp /work/grammars/FAMM.g4 -o /work/gen

