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
        int age;
        int grades[5];
    
    } Student;  


int main()
{   
    // struct Student pawel;
    Student pawel;

    pawel.age = 38;
    strcpy(pawel.name, "Pawel");
    strcpy(pawel.id, "yy123kkll34");
    pawel.grades[0] = 1;
    pawel.grades[1] = 2;
    pawel.grades[2] = 3;
    pawel.grades[3] = 4;
    pawel.grades[4] = 5;

    printf("Student age: %d\n", pawel.age);
    printf("Student name: %s\n", pawel.name);
    printf("Student ID: %s\n", pawel.id);
    printf("Student Grade[0]: %d\n", pawel.grades[0]);
    printf("Student Grades: ");
    for(int i=0; i<5; i++)
        {
            printf("%d ", pawel.grades[i]);
        }

    return 0;
}