# quantnet-cpp

Homework for the QuantNet / Baruch C++ Programming for Financial Engineering course.

## Layout

```
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
