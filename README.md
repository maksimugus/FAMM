# FAMM

Source code of the beautiful programming language FAMM.

## Run

To install dependencies (and generate lexer, ...)
```shell
make
```

To generate new lexer, parser, listener:
```shell
make gen
```

Setup wsl
```bash
sudo apt update && sudo apt upgrade
sudo apt install -y build-essential cmake gdb
sudo apt install -y libedit-dev zlib1g-dev libzstd-dev libcurl4-openssl-dev
```

```bash
wget https://apt.llvm.org/llvm.sh
chmod +x llvm.sh
sudo ./llvm.sh 18
```


```bash
sudo mv /usr/include/llvm-18/llvm/ /usr/include/

```