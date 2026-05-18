# 0x13. C - More singly linked lists

## Description

This project extends singly linked list operations in C using the `listint_t` struct — a linked list that stores integers. It covers creating, traversing, manipulating, and freeing linked lists.

## Learning Objectives

- How to use linked lists in practice
- How to implement pop, index lookup, and safe free operations
- How to avoid memory leaks with valgrind

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- No global variables
- No more than 5 functions per file
- Only `malloc` and `free` allowed (plus `printf` where specified)
- All prototypes and the `listint_t` struct defined in `lists.h`

## Data Structure

```c
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Files

| File | Prototype | Description |
|---|---|---|
| `0-print_listint.c` | `size_t print_listint(const listint_t *h)` | Prints all elements; returns node count |
| `1-listint_len.c` | `size_t listint_len(const listint_t *h)` | Returns number of nodes |
| `2-add_nodeint.c` | `listint_t *add_nodeint(listint_t **head, const int n)` | Adds node at the beginning |
| `3-add_nodeint_end.c` | `listint_t *add_nodeint_end(listint_t **head, const int n)` | Adds node at the end |
| `4-free_listint.c` | `void free_listint(listint_t *head)` | Frees the list |
| `5-free_listint2.c` | `void free_listint2(listint_t **head)` | Frees the list and sets head to NULL |
| `6-pop_listint.c` | `int pop_listint(listint_t **head)` | Deletes head node and returns its value |
| `7-get_nodeint.c` | `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)` | Returns node at given index |

## Usage

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
./a
```

Check for memory leaks:

```bash
valgrind --leak-check=full ./executable
```

## Author

Lukhanyo Radebe  
[GitHub: KH4NY0](https://github.com/KH4NY0)
