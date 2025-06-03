#include "head.h"

void stud_show(ST *ptr)
{
    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (ptr)
    {
       printf("Roll: %d\n",ptr->roll); 
       printf ("Name: %s\n",ptr->name);
       printf("Percentage: %.2f\n", ptr->percentage);
       ptr = ptr->next;
    }
}
