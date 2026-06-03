# 0x17. C - Doubly linked lists

C functions for building and manipulating doubly linked lists of integers,
written for the low-level programming curriculum.

## Data structure

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Files

* `0-print_dlistint.c` - prints all the elements of a list
* `1-dlistint_len.c` - returns the number of elements in a list
* `2-add_dnodeint.c` - adds a new node at the beginning of a list
* `3-add_dnodeint_end.c` - adds a new node at the end of a list
* `4-free_dlistint.c` - frees a list
* `5-get_dnodeint.c` - returns the nth node of a list
* `6-sum_dlistint.c` - returns the sum of all the data (n) of a list
* `7-insert_dnodeint.c` - inserts a new node at a given position
* `8-delete_dnodeint.c` - deletes the node at a given index
* `lists.h` - header file with the data structure and prototypes
