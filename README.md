<<<<<<< HEAD
# quantnet-cpp

Homework for the QuantNet / Baruch C++ Programming for Financial Engineering course.
=======
#  Baruch C++ Certificate for Financial Engineering

## Environment

| Tool | Version / notes |
|---|---|
| OS | Windows |
| Editor | VS Code + C/C++ extension (`ms-vscode.cpptools`) |
| Compiler | GCC (MinGW-w64 UCRT via MSYS2), `C:\msys64\ucrt64\bin` on `PATH` |
| Standard | C17 for Level 1; C++ from Level 2 onward |

## Build & run

Each exercise is its own program with its own `main()`, so each lives in its own folder.

```powershell
cd Level1\1.3\Ex1
gcc -Wall -Wextra -std=c17 -g main.c -o main.exe
.\main.exe
```

Multi-file exercises: list every source file.

```powershell
gcc -Wall -Wextra -std=c17 Main.c Print.c -o prog.exe
```

End keyboard input (`getchar` / `EOF` exercises) with **Ctrl+Z, then Enter** on Windows.
>>>>>>> 850d4b01b0dadff8e86186aee702fcc1d9e35b77

## Layout

```
<<<<<<< HEAD
LevelN/<lecture>/Ex<k>/   one folder per exercise, one program per folder
```

Level 1 is written in plain C (no `<iostream>`, classes, etc.).

| Section | Topic | Exercises |
|---|---|---|
| `Level1/1.3` | Variables, Operators and Expressions | Ex1–Ex9 |
| `Level1/1.4` | Flow Control | Ex1–Ex7 (Ex6/Ex7 use `freq.c`, as the assignment requires) |
| `Level1/1.5` | Functions and Scope of Variables | Ex1–Ex4 (Ex3 is split across `Main.c` and `Print.c`) |

## Building

From an exercise folder, compile every `.c` file in it:

```bash
gcc -Wall *.c -o main
```
=======
Level1/
  1.3/   Variables, operators, expressions
  1.4/   Flow control
  1.5/   Functions and scope
```

## Progress: Level 1 (C syntax only)

### 1.3 Variables, Operators and Expressions
- [ ] Ex1 `printf` text output
- [ ] Ex2 Right-triangle area from user input
- [ ] Ex3 Predict output: arithmetic operators
- [ ] Ex4 `?:` with 0 / non-zero as false / true
- [ ] Ex5 `--i` vs `i--`
- [ ] Ex6 Right shift by 2, logical vs arithmetic
- [ ] Ex7 Multiply by 2^n with shifts
- [ ] Ex8 Predict output: assignment operators
- [ ] Ex9 Predict output: conditional expressions

### 1.4 Flow Control
- [ ] Ex1 Count chars / words / newlines (`while`)
- [ ] Ex2 Same, with `do while`
- [ ] Ex3 Same, with `switch`
- [ ] Ex4 Fahrenheit to Celsius table (`while`)
- [ ] Ex5 Celsius to Fahrenheit table (`for`)
- [ ] Ex6 `freq.c`: count digits 0–4 (`switch`)
- [ ] Ex7 Extend Ex6: frequency of 3 in words

### 1.5 Functions and Scope of Variables
- [ ] Ex1 `minus()` function
- [ ] Ex2 Recursive factorial
- [ ] Ex3 Two source files (`Main.c` + `Print.c`)
- [ ] Ex4 Recursive `printnumber()` with `putchar`
>>>>>>> 850d4b01b0dadff8e86186aee702fcc1d9e35b77
