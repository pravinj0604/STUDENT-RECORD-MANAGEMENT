#include "head.h"

void stud_mod(ST **ptr)
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
         printf("Enter the roll no: ");
         scanf("%d", &n);

    while (temp)
    {
        if (temp->roll == n)
        {
            printf("Enter new name\n");
            scanf("%s", temp->name);
            printf("Enter the new percentage\n");            
            scanf("%f",&temp->percentage);
            printf("Record updated.\n");
            return;
        }
        temp = temp->next;
    }
    printf("Roll number not found.\n");
  }
  else if((op=='n')||(op=='N'))
         {
		 char c_name[40];
		  printf("Enter the name: ");
         	  scanf("%s",c_name);

            while (temp)
            {
            if (strcmp(temp->name ,c_name)==0)
            {
            printf("Enter new name: ");
            scanf("%s", temp->name);
	    printf("Enter the new percentage: ");
            scanf("%f",&temp->percentage);

            printf("Record updated.\n");
            return;
            }
            temp = temp->next;
            }
 	    }
}
