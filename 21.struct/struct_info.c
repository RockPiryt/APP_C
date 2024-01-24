#include <stdio.h>
#include <string.h>


// struct Student
//     {   
//         char name[50];
//         char id[10];
//         int age;
//         int grades[5];
    
//     };

typedef struct
{   
    char name[50];
    char id[10];
    int wiek;
    int grades[5];

} Student;  

typedef struct
{
    int x;
    int y;
} Point;

void print_student(Student student);

int main()
{   
    //Create struct instance
    // struct Student student_a;
    Student osoba;

    Point p1 = {5,7};//wg kolejnosci przypisanie atrybutów
    Point p2 = {.x=2, .y=4};

    printf("p1.x = %d, p1.y=%d\n", p1.x, p1.y);
    printf("p2.x = %d, p2.y=%d\n", p2.x, p2.y);

    //Add values to attributes
    osoba.wiek = 22;
    strcpy(osoba.name, "Paulina");
    strcpy(osoba.id, "yy123kkll34");
    osoba.grades[0] = 1;
    osoba.grades[1] = 2;
    osoba.grades[2] = 3;
    osoba.grades[3] = 4;
    osoba.grades[4] = 5;

    // //Call function to print info about student
    print_student(osoba);

    //Simple printing of student attributes
    //printf("%d", osoba.wiek);
    // printf("Student name: %s\n", osoba.name);
    // printf("Student ID: %s\n", osoba.id);
    // printf("Student Grade[0]: %d\n", osoba.grades[0]);
    // printf("Student Grades: ");
    // for(int i=0; i<5; i++)
    //     {
    //         printf("%d ", osoba.grades[i]);
    //     }

    return 0;
}
void print_student(Student student)
{
    printf("Student age is: %d\n", student.wiek);
    printf("Student name: %s\n", student.name);
    printf("Student ID: %s\n", student.id);
    printf("Student Grade[0]: %d\n", student.grades[0]);
    printf("Student Grades: ");
    for(int i=0; i<5; i++)
        {
            printf("%d ", student.grades[i]);
        }
}