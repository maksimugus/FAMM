#


Соберём образ antlr4
```bash
git clone https://github.com/antlr/antlr4.git
cd antlr4/docker
docker build -t antlr/antlr4 --platform linux/amd64 .
```



```bash
docker run --rm -v ${PWD}:/work antlr/antlr4 -Dlanguage=Python3 /work/grammars/FAMM.g4 -o /work/gen
```