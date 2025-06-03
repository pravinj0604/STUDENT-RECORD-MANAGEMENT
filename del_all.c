#include "head.h"

void stud_delall(ST **ptr)
{
    ST *temp = *ptr;
    while (temp)
    {
        ST *next = temp->next;
        free(temp);
        temp = next;
    }
    *ptr = NULL;
    printf("All records deleted.\n");
}

