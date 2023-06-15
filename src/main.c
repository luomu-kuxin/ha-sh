#include "hash_table.h"
#include<stdio.h>

int main(void)
{
    printf("text1\n");
    
    ht_hash_table* ht= ht_new();
    ht_del_hash_table(ht);
    
    printf("text2\n");

    return 0;
}


