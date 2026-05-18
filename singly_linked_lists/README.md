# 0x12. C - Singly linked lists

## Description

This project introduces singly linked lists in C — a fundamental data structure where each node holds data and a pointer to the next node. Unlike arrays, linked lists allow dynamic sizing and efficient insertion/deletion.

## Learning Objectives

- When and why to use linked lists vs arrays
- How to build and traverse a singly linked list
- How to add nodes at the beginning and end of a list
- How to free all memory used by a linked list

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- No global variables
- No more than 5 functions per file
- Only `malloc`, `free`, `printf`, and `strdup` are allowed
- All prototypes and the `list_t` struct defined in `lists.h`

## Data Structure

```c
typedef struct list_s
{
    char *str;           /* malloc'd string */
    unsigned int len;    /* length of the string */
    struct list_s *next; /* pointer to next node */
} list_t;
```

## Files

| File | Prototype | Description |
|---|---|---|
| `0-print_list.c` | `size_t print_list(const list_t *h)` | Prints all elements of the list; returns node count |
| `1-list_len.c` | `size_t list_len(const list_t *h)` | Returns the number of nodes in the list |
| `2-add_node.c` | `list_t *add_node(list_t **head, const char *str)` | Adds a new node at the beginning of the list |
| `3-add_node_end.c` | `list_t *add_node_end(list_t **head, const char *str)` | Adds a new node at the end of the list |
| `4-free_list.c` | `void free_list(list_t *head)` | Frees all nodes in the list |

## Usage

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
./a
```

Check for memory leaks:

```bash
valgrind --leak-check=full ./e
```

## Author

Lukhanyo Radebe  
[GitHub: KH4NY0](https://github.com/KH4NY0)
