#include "head.h"

void stud_add(ST **ptr)
{
    ST *temp = (ST *)malloc(sizeof(ST));

      // printf("Roll:");
    // scanf("%d",&temp->roll);
       temp->roll=++rollno;
       printf ("Name:");
       scanf("%s",temp->name);
       printf("Percentage:");
       scanf("%f",&temp->percentage);

    temp->next = NULL;
    temp->pre = NULL;

    if (*ptr == NULL)
    {
        *ptr = temp;
    }
    else
    {
        ST *last = *ptr;
        while (last->next)
            last = last->next;

        last->next = temp;
        temp->pre = last;
    }
}
