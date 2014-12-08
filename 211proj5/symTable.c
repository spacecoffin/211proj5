//
//  symTable.c
//  Symbol table ADT that stores <key, value> pairs.
//  Reed Rosenberg
//

#include <stdio.h>
//#include "symTable.h"

#define DEFAULT_TABLE_SIZE 61
#define HASH_MULTIPLIER 65599

/* Hash key to a hash table bucket in the range [0, htsize-1] */
static unsigned int hash(const char *key, const int htsize)
{
    int i;
    unsigned int h = 0U;
    for (i = 0; key[i] != '\0'; i++)
        h = h * HASH_MULTIPLIER + (unsigned char) key[i];
    return h % htsize;
}

typedef struct SymTable *SymTable_T;
/*
 * SymTable is a symbol table object pointed to by a pointer of type SymTable_T.
 * Its structure should be defined in the implementation module. A SymTable
 * object should make copies of <key, value> pairs inserted into it; these
 * copies should be destroyed when the keys are deleted from the table or when
 * the SymTable object itself is destroyed.
 */

SymTable_T symTable_create(void);
void symTable_destroy(SymTable_T symTable);
int symTable_size(SymTable_T symTable);
int symTable_insert(SymTable_T symTable, const char *key,
                    const void *value, size_t valuesize);
int symTable_search(SymTable_T symTable, const char *key,
                    void *value, size_t valuesize);
int symTable_delete(SymTable_T symTable, const char *key);


int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

/*
 * Return a new SymTable object or NULL if the object could not be created due
 * to insufficient memory.
 */
SymTable_T symTable_create(void)
{
    return NULL;
}


// Destroy symTable by freeing all the space allocated to it.
void symTable_destroy(SymTable_T symTable)
{
    return;
}

// Return the number of <key, value> pairs stored in symTable.
int symTable_size(SymTable_T symTable)
{
    return 0;
}

/*
 * If key is not in the symbol table, insert it in the table and copy its value 
 * from the object pointed to by value. The size of the object is valuesize. 
 * Return 1 if the key is successfully inserted. Return 0 if key is already in 
 * the table or it is not in the table but it could not be inserted because of 
 * insufficient memory.
 */
int symTable_insert(SymTable_T symTable, const char *key,
                    const void *value, size_t valuesize)
{
    return 0;
}

/*
 * Search for key in the symbol table. If it is in the table, copy its value to 
 * the object pointed to by value and return 1. If key is not in the table, 
 * return 0.
 */
int symTable_search(SymTable_T symTable, const char *key,
                    void *value, size_t valuesize)
{
    return 0;
}

/*
 * Delete key and its value from the table and free the space allocated to these
 * objects. Return 1 if key is in the table and was successfully deleted; 
 * otherwise, return 0.
 */
int symTable_delete(SymTable_T symTable, const char *key)
{
    return 0;
}