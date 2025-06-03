#include"head.h"

void stud_save(ST *ptr)
{
    FILE *fp = fopen("data.txt", "w");
    if (!fp)
    {
        perror("Failed to open file");
        return;
    }
       // fprintf(fp, "Rollon |Name      |percentage\n");
    while (ptr)
    {        
    
        fprintf(fp, "%d  %s  %.2f\n", ptr->roll, ptr->name, ptr->percentage);
        ptr = ptr->next;
    }
    fclose(fp);
    printf("Data saved to file.\n");
}
