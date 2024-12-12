#



Соберём образ antlr4
```shell
git clone https://github.com/antlr/antlr4.git
docker build -t antlr/antlr4 --platform linux/amd64 -f antlr4/docker/Dockerfile antlr4
```


Создадим парсер и лексер
```shell
docker run --rm -v ${PWD}:/work antlr/antlr4 -Dlanguage=Python3 /work/grammars/FAMM.g4 -o /work/gen
```

```shell
python3 -m venv .venv
source .venv/bin/activate
pip install -e .
```
