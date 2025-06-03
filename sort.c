#include"head.h"

void stud_sort(ST **ptr)
{
    if (*ptr == NULL || (*ptr)->next == NULL)
    {
        printf("List is too short to sort.\n");
        return;
    }
            puts(" _________________________________ ");
            puts("|        N/n : using name         |");
            puts("|        P/p : percentage         |");
            puts("|_________________________________|");

    char opt;
    scanf(" %c", &opt);

    int swap;
    ST *temp;
    ST *last = NULL;

    do
    {
        swap = 0;
        temp = *ptr;

        while (temp->next != last)
        {
            int condition = 0;

            if (opt == 'n' || opt == 'N')
                condition = (strcmp(temp->name, temp->next->name) > 0);
            else if (opt == 'p' || opt == 'P')
                condition = (temp->percentage > temp->next->percentage);
            else
            {
                printf("Invalid option. Sorting cancelled.\n");
                return;
            }

            if (condition)
            {
               
                float t_percentage = temp->percentage;
                char t_name[40];
                strcpy(t_name, temp->name);

                temp->percentage = temp->next->percentage;
                strcpy(temp->name, temp->next->name);

                temp->next->percentage = t_percentage;
                strcpy(temp->next->name, t_name);

                swap = 1;
            }
            temp = temp->next;
        }
        last = temp;
    } while (swap);

    printf("Records sorted successfully.\n");
}

