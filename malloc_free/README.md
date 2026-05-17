# 0x0A. C - malloc, free

## Description

This project covers dynamic memory allocation in C using `malloc` and `free`. Unlike stack-allocated variables, heap memory persists until explicitly freed, giving the programmer full control over memory lifetime.

## Learning Objectives

- What is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leaks

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- No use of global variables
- No more than 5 functions per file
- Only `malloc` and `free` are allowed (`printf`, `puts`, etc. are forbidden in functions)
- Prototypes of all functions in `main.h`

## Files

| File | Prototype | Description |
|---|---|---|
| `0-create_array.c` | `char *create_array(unsigned int size, char c)` | Creates a char array initialized with a specific character |
| `1-strdup.c` | `char *_strdup(char *str)` | Returns a pointer to a newly allocated duplicate of a string |
| `2-str_concat.c` | `char *str_concat(char *s1, char *s2)` | Concatenates two strings into a new allocated string |
| `3-alloc_grid.c` | `int **alloc_grid(int width, int height)` | Returns a pointer to a 2D array of integers initialized to 0 |
| `4-free_grid.c` | `void free_grid(int **grid, int height)` | Frees a 2D grid previously created by `alloc_grid` |

## Usage

Compile any task with its corresponding main file:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
./a
```

Check for memory leaks using valgrind:

```bash
valgrind --leak-check=full ./executable
```

## Author

Lukhanyo Radebe  
[GitHub: KH4NY0](https://github.com/KH4NY0)
