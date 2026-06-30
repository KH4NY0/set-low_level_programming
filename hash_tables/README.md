# 0x1A. C - Hash tables

This project implements a **hash table** data structure in C, using the
**djb2** hash algorithm and **chaining** (singly linked lists) for collision
handling.

## Requirements

* Ubuntu 20.04 LTS
* Compiled with `gcc` using: `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Code style: **Betty** (`betty-style.pl` and `betty-doc.pl`)
* All files end with a new line
* No memory leaks (verified with `valgrind`)

## Data structures

```c
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
```

## Files

| File | Description |
| --- | --- |
| `hash_tables.h` | Header: data structures and function prototypes |
| `0-hash_table_create.c` | Creates a hash table |
| `1-djb2.c` | djb2 hash function |
| `2-key_index.c` | Returns the array index for a given key |
| `3-hash_table_set.c` | Adds or updates a key/value pair |
| `4-hash_table_get.c` | Retrieves the value associated with a key |
| `5-hash_table_print.c` | Prints the hash table |
| `6-hash_table_delete.c` | Frees the entire hash table |

## Function prototypes

| Function | Prototype |
| --- | --- |
| `hash_table_create` | `hash_table_t *hash_table_create(unsigned long int size);` |
| `hash_djb2` | `unsigned long int hash_djb2(const unsigned char *str);` |
| `key_index` | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` |
| `hash_table_set` | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` |
| `hash_table_get` | `char *hash_table_get(const hash_table_t *ht, const char *key);` |
| `hash_table_print` | `void hash_table_print(const hash_table_t *ht);` |
| `hash_table_delete` | `void hash_table_delete(hash_table_t *ht);` |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
    0-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c \
    3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c \
    6-hash_table_delete.c -o hash_table
```

## Usage example

```c
#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	printf("%s\n", hash_table_get(ht, "betty")); /* cool */
	hash_table_print(ht);                         /* {'betty': 'cool'} */
	hash_table_delete(ht);
	return (0);
}
```

## How it works

1. `key_index` runs the key through `hash_djb2`, then takes the result
   modulo the array size to find the bucket.
2. On `set`, if the key already exists in that bucket its value is replaced;
   otherwise a new node is added at the **head** of the list (collision
   handling by chaining).
3. `print` walks the array in order and each bucket's list head-first.
4. `delete` frees every node's key, value, and the node itself, then the
   array and the table.

## Author

Lukhanyo — ALX / Holberton Software Engineering
