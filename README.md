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
sudo mv /usr/include/llvm-c-18/llvm/ /usr/include/
```

## Tests

```bash
chmod +x run_tests.sh
./run_tests.sh
```


## Specification

### Types

FAMM поддерживает несколько типов: int, bool, float, string, (array)

### Variables

```famm
# var <var_name>: <type> = ...;
```

```famm
var int_var: int = 1; 
var float_var: float = 1.;
var arr: [int, 3] = [1, 2, 3];
```

### Casts
Примеры кастов:

**to int:**
```famm
var boolValue: bool = false;
var intValue: int = to_int(boolValue); # 0, так как false

var boolValue: bool = true;
var intValue: int = to_int(boolValue); # 1

var floatValue: float = 3.7;
var intValue: int = to_int(floatValue); # 3, дробная часть отбрасывается
   
var strValue: string = "42";
var intValue: int = to_int(strValue); # 42
```

**to str:**
```famm
var intValue: int = 100;
var strValue: string = to_string(intValue); # "100"

var boolValue: bool = true;
var strValue: string = to_string(boolValue); # "true"

var floatValue: float = 9.99;
var strValue: string = to_string(floatValue); # "9.99"
```

**to bool:**
```famm
# string
var strValue: string = "true";
var boolValue: bool = to_bool(strValue); # true

var strValue: string = "FaLse";
var boolValue: bool = to_bool(strValue); # false

var strValue: string = "0";
var boolValue: bool = to_bool(strValue); # false

var strValue: string = "meow meow meow";
var boolValue: bool = to_bool(strValue); # exception :(

# int
var intValue: int = 100;
var boolValue: bool = to_bool(intValue); # true

var intValue: int = 0;
var boolValue: bool = to_bool(intValue); # false

# float
var floatValue: float = 0.7;
var intValue: bool = to_bool(float); # true

```

**to float:**

```famm
var strValue: string = "52.52";
var floatValue: float = to_float(strValue); # 52.52

var intValue: int = 100;
var floatValue: float = to_float(intValue); # 100.

var boolValue: bool = true;
var floatValue: float = to_float(boolValue); # 1.

var boolValue: bool = false;
var floatValue: float = to_float(boolValue); # 0.
```
