#
Запускать всё нужно в папке, где находится этот README

Создадим парсер и лексер

```shell
docker run --rm -v ${PWD}:/work antlr/antlr4 -Dlanguage=Python3 /work/grammars/FAMM.g4 -o /work/fammfrontend/gen
```