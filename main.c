#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"
#include "add_data.c"
#include "del_all.c"
#include "del_data.c"
#include "modify.c"
#include "save.c"
#include "show_data"
#include "sort.c"
#include "reverse.c"

int main()
{
    system("clear");
    char op;

    while (1)
    {
        puts(" ________________________________________________ ");
        puts("|                                                |");
        puts("|          *****STUDENT RECORD MENU*****         |");
        puts("| ______________________________________________ |");
        puts("|                                                |");
        puts("| a/A  : add new record                          |");
        puts("| d/D  : delete a record                         |");
        puts("| s/S  : show the list                           |");
        puts("| m/M  : modify a record                         |");
        puts("| v/V  : save                                    |");
        puts("| e/E  : exit                                    |");
        puts("| t/T  : sort the list                           |");
        puts("| l/L  : delete all the records                  |");
        puts("| r/R  : reverse the list                        |");
        puts("|________________________________________________|");

        do
        {
            printf("\nEnter your choice: ");
            scanf(" %c", &op);
            while (getchar() != '\n'); 

            if (!(op == 'a' || op == 'A' || op == 'd' || op == 'D' || op == 's' || op == 'S' ||
                  op == 'm' || op == 'M' || op == 'v' || op == 'V' || op == 'e' || op == 'E' ||
                  op == 't' || op == 'T' || op == 'l' || op == 'L' || op == 'r' || op == 'R'))
            {
                puts("Invalid option. Please enter a valid option.");
            }
        } while (!(op == 'a' || op == 'A' || op == 'd' || op == 'D' || op == 's' || op == 'S' ||
                   op == 'm' || op == 'M' || op == 'v' || op == 'V' || op == 'e' || op == 'E' ||
                   op == 't' || op == 'T' || op == 'l' || op == 'L' || op == 'r' || op == 'R'));

        switch (op)
        {
        case 'a':
        case 'A':
            stud_add(&hptr);
            break;

        case 'd':
        case 'D':
            stud_del(&hptr);
            break;

        case 's':
        case 'S':
            stud_show(hptr);
            break;

        case 'm':
        case 'M':
            stud_mod(&hptr);
            break;
        last->next = temp;
        temp->pre = last;
    }
}

