# FAMM

Source code of the beautiful programming language FAMM.


<image src="https://github.com/user-attachments/assets/23bd8fce-2b34-4eeb-84c2-64bae44e614f" alt="FAMMster" width="200">


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
---

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


### Arithmetic
FAMM поддерживает арифметические операции

| Название операции  | Семантика в коде | Поддерживаемые типы       |
| :----------------: | :--------------: | ------------------------- |
|      сложение      |      +, +=       | int, float, string        |
|     умножение      |     \*, \*=      | int, float, string(\*int) |
|      разность      |      -, -=       | int, float, string        |
|      деление       |      /, /=       | int, float                |
| целочисл. деление  |     //, //=      | int, float                |
| остаток от деления |      %, %=       | int, float                |

#### сложение
```famm
var a: int = 10;
var b: int = 20;
var c: int = a + b; # 30

a += 30; # 40, эквивалентно a = a + 30
a += 30.7; # exception :(

var a: float = 10.1;
a += 30.; # 40.1

var str1: string = "мяу";
var str2: string = "скибиди";
var str3: string = str1 + str2; # "мяу скибиди" 
str3 += "привет"; # "мяу скибиди привет"
```

#### разность
```
var a: float = 1.2;
var b: float = 3.6;
var c: float = b - a; # 2.4

var d: int = 10 - 3; # 7

var str2: string = "скибиди";
str2 -= "телаут"; # "скибиди туалет", эквивалентно str2 = str2 + (-1) * "телаут"
```

#### умножение
```
var a: float = 1.2;
var b: float = 3.6;
var c: float = b * a; # 4.32

b = b * 10 # exception :(

var d: int = 10;
d *= 10; # 100

var str: string = "мяу ";
str *= 10; # "мяу мяу мяу мяу мяу мяу мяу мяу мяу мяу "
str *= (-3) # " уям уям уям"
```

#### деление
```
var a: float = 1.2;
var b: float = 3.9;
var c: float = b / a; # 3.25

b = b / 10 # exception :(

var d: int = 10;
d /= 4; # exception
var e: float = d / 4; # 2.5
```

#### целочисленное деление
```
var a: float = 1.2;
var b: float = 3.9;
var c: float = b // a; # 3

b = b / 10 # exception :(

var d: int = 10;
d //= 4; # 2
var e: float = d // 4; # exception
```

### Functions

```famm
func abas (a: int, b: int): int = {
	var c: int = 1 + a;
	return c + b; 
};

# общий шаблон:
# func <name> ( <params> ): <return_type> = { <body> }
```

Если функция ничего не возвращает, `<return_type>` указывается специальное ключевое слово `nih`. Внимание! `nih` не является типом, его нельзя привести к другому типу, также нельзя результат выполнения функции c типом `nih`  присвоить какому-то `var`'у.

Т.е. 
```
func boom(): nih = { 
	print("boom"); 
};

var something = boom(); # ~~ EXCEPTION ~~
```

### Conditional operators

в if можно передавать только переменные типа bool:

```famm
if((2 > 3) or bool(-1000)) {
    print("da");
} else {
	# some code
}
```

операции возвращающие bool:

| Название операции | Семантика в коде |
| :---------------: | :--------------: |
|      рав-во       |        ==        |
|     нерав-во      |        !=        |
|      больше       |        >         |
|      меньше       |        <         |
| меньше или равно  |        <=        |
| больше или равно  |        >=        |

булевы операции:

| Название операции | Семантика в коде |
| :---------------: | :--------------: |
|         и         |       and        |
|        или        |        or        |
|        не         |        !         |


### Loops
#### for
Конец исключается!

```famm
for (var i: float = 100. -> 1. by -.001) = {
	# цикл от 100 до 1 не включительно с шагом -0.001
};

for (var i: int = 1 -> 100 by 1) = {
	# цикл от 1 до 100 не включительно с шагом 1
};
```

#### while

```famm
while (<condition>) = {
	<body>
};
```

### Recursion

```famm
func factorial (n: int): int = {
    if (n < 2) {
       return 1;
    }
	return n * factorial(n - 1);
};
```

### Arrays

- Массив имеет фиксированный размер
- Можно обращаться по индексу. Индекс должен лежать в от 0 до n-1 включительно.
- При обращении к элементу за рамками индексации возникает ошибка.

```famm
var array: [int, 100];

for (var k: int = 0 -> 100 by 1) {
    array[k] = k;
};

# массив чисел от 1 до 100
```

### Output
#### display: 
- перегружен для каждого типа
- можно передавать множество переменных различных типов через запятую (они будут выводиться через пробел)

```famm
var a: int = 10;
var b: bool = true;
var c: float = 10.5;
var d: string = "meow";
var arr: [int, 3] = [1, 2, 3];

display(a, b, to_string(b), c, d, arr[1], "скибиди");  # вывод: 10 1 true 10.5 meow 2 скибиди
```
