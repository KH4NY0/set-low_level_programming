# 0x0B. C - More malloc, free

## Description

This project builds on dynamic memory allocation concepts, covering safe malloc wrappers, zero-initialized allocation, partial string concatenation, and integer range arrays.

## Learning Objectives

- How to use `malloc` and `free`
- How to handle `malloc` failures gracefully
- How to use `exit` to terminate a process with a specific status
- When and why to use dynamic memory allocation

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- No use of global variables
- No more than 5 functions per file
- Only `malloc`, `free`, and `exit` are allowed standard library functions
- Prototypes of all functions in `main.h`

## Files

| File | Prototype | Description |
|---|---|---|
| `0-malloc_checked.c` | `void *malloc_checked(unsigned int b)` | Allocates memory; exits with status 98 if malloc fails |
| `1-string_nconcat.c` | `char *string_nconcat(char *s1, char *s2, unsigned int n)` | Concatenates s1 with the first n bytes of s2 |
| `2-calloc.c` | `void *_calloc(unsigned int nmemb, unsigned int size)` | Allocates zero-initialized memory for an array |
| `3-array_range.c` | `int *array_range(int min, int max)` | Creates an int array containing all values from min to max |

## Usage

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
./a
echo $?
```

## Author

Lukhanyo Radebe  
[GitHub: KH4NY0](https://github.com/KH4NY0)
