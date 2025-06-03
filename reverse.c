#include"head.h"

void stud_reverse(ST *ptr)
{
    if (!ptr)
    {
        printf("List is empty.\n");
        return;
    }

    while (ptr->next)
        ptr = ptr->next;

    while (ptr)
    {
    printf("Roll: %d, Name: %s, Percentage: %.2f\n", ptr->roll, ptr->name, ptr->percentage);
    ptr = ptr->pre;
    }
}
