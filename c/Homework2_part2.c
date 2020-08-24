#include <stdio.h>

struct student {
    char last_name[30] ;
    char first_name[30];
};

struct examination_seating {
    struct student **seating;
};

void student_init_default (struct student *p ) {}
void student_init (struct student *p, char *info) {}
void student_to_string (struct student *p ) {}
void examination_seating_init (int rowNum, int columnNum, struct examination_seating *t ) {}
int assign_student_at (int row, int col, struct examination_seating *t, struct student* p) {}
int check_boundaries (int row, int col, struct examination_seating *t) {}
void examination_seating_to_string (struct examination_seating *t ) {}

void main()
{
    struct examination_seating examination_seating;
    struct student temp_student;
    int row, col, rowNum, columnNum;
    char student_info[30];
    
    // Ask a user to enter a number of rows for a examination seating
    printf ("Please enter a number of rows for a examination seating.");
    scanf ("%d", &rowNum);

    // Ask a user to enter a number of columns for a examination seating
    printf ("Please enter a number of columns for a examination seating.");
    scanf ("%d", &columnNum);

    // examination_seating
    examination_seating_init(rowNum, columnNum, &examination_seating);
    printf("Please enter a student information or enter \"Q\" to quit.");
    
    /*** reading a student's information ***/
    scanf ("%s", student_info);
    
    /* we will read line by line **/
    while (1 /* change this condition*/ ) {
        printf ("\nA student information is read.");

        // printing information.
        printf ("%s", student_info);

        // student
        student_init (&temp_student, student_info);

        // Ask a user to decide where to seat a student by asking
        // for row and column of a seat
        printf ("Please enter a row number where the student wants to sit.");
        scanf("%d", &row);
        printf("Please enter a column number where the student wants to sit.");
        scanf("%d", &col);

        // Checking if the row number and column number are valid
