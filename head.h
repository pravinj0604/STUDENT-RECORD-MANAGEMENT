#ifndef
typedef struct student
{
    struct student *pre;
    int roll;
    char name[40];
    float percentage;
    struct student *next;
} ST;

static int rollno=0;
ST *hptr = NULL;

void stud_add(ST **);
void stud_mod(ST **);
void stud_del(ST **);
void stud_delall(ST **);
void stud_show(ST *);
void stud_save(ST *);
void stud_reverse(ST *);
void stud_sort(ST **); 
#endif
