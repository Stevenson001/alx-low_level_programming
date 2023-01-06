# C - Hash tables

---

The objective of this project is to learn about hash tables by solving tasks that
pose the following questions:

- What is a hash function?
- What makes a good hash function?
- What is a hash table, how do they work and how to use them?
- What is a collision and what are the main ways of dealing with collisions in
  the context of a hash table?
- What are the advantages and drawbacks of using hash tables?
- What are the most common use cases of hash tables?

The hash table in this program uses the `djb2` algorithm. It supports the following
operations:

- Adding items to the hash table
- Retrieving the value of a key in the table
- Printing the hash table in the format `{'key': 'value', ...}`
- Deleting the hash table

Key/value pairs are provided as strings.

## Usage

Compile the source files. If you have `gcc` installed, run:

```shell
gcc -g -c *.c
```

Create a library from the object files

```shell
ar -rc libhash.a *.o
ranlib libhash.a
rm *.o
```

Link to the library while compiling your `main` function. Make sure to do the compilation
in the directory for this project. Example of a `main.c` would be;

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "Chee-zaram", "Okeke");
    hash_table_set(ht, "c", "isfun");
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "joyful", "song");
    hash_table_set(ht, "synaphea", "collides with joyful");

    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "joyful");
    printf("%s:%s\n", "joyful", value);
    value = hash_table_get(ht, "synaphea");
    printf("%s:%s\n", "synaphea", value);
    value = hash_table_get(ht, "Chee-zaram");
    printf("%s:%s\n", "Chee-zaram", value);
    printf("\n\n");

    hash_table_print(ht);
    printf("\n")
    hash_table_delete(ht);

    return (EXIT_SUCCESS);
}
```

To link the `main.c` with the `libhash.a`, run;

```shell
gcc -g main.c -L. -lhash -o chee.hashTable
```

Dynamic memory is cleanly handled here, with no leaks and no errors. To see that,
run your program with `valgrind`;

```shell
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out ./chee.hashTable
```

Valgrind details are stored in the file `valgrind-out`. To view, run;

```shell
less valgrind-out
```

---

## AUTHOR

[Chee-zaram Okeke](https://github.com/chee-zaram)
