#include"head.h"

void stud_del(ST **ptr)
{
    if (*ptr == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    char op;
            puts(" _________________________________ ");
            puts("|      r/R : using roll no        |");
            puts("|      n/N : using name           |");
            puts("|_________________________________|");
            printf("Enter the option:\n");
             scanf(" %c", &op);
	      ST *temp = *ptr;

if((op=='r')||(op=='R'))
 {
    int n;
    printf("Enter roll number to delete: ");
    scanf("%d", &n);

    while (temp)
    {
        if (temp->roll == n)
        {
            if (temp->pre)
                temp->pre->next = temp->next;
            else
                *ptr = temp->next;

            if (temp->next)
                temp->next->pre = temp->pre;

            free(temp);
            printf("Record deleted.\n");
            return;
        }
        temp = temp->next;
    }
    printf("Roll number not found.\n");
 }
else if((op=='N')||(op=='n'))
 {
	 char c_name[40];
    printf("Enter name to delete: ");
    scanf("%s",c_name);

    while (temp)
    {
        if (strcmp(temp->name,c_name)==0)
        {
            if (temp->pre)
                temp->pre->next = temp->next;
            else
                *ptr = temp->next;

            if (temp->next)
                temp->next->pre = temp->pre;

            free(temp);
            printf("Record deleted.\n");
            return;
        }
        temp = temp->next;
    }
    printf("name not found.\n");
 }
}
