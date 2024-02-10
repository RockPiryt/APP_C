#include <stdio.h>

typedef struct
{
    char Name[100];
    float Salary;
}Employee;

void SalaryRaise();// pointer is needed to change current value
void PrintStruct();

int main()
{   
    // Inizialize struct
    Employee man1 = {"Gregory", 3250.50};
    Employee man2 = {"Adam", 5463.22};

    //Create pointer to struct
    Employee *man1_ptr;
    man1_ptr = &man1;// Add memory address of struct man1

    //Print current value of salary
    printf("Salary before raise\n");
    PrintStruct(man1);

    //Raise salary for man1
    //man1.Salary +=700; // adress and .
    //man1_ptr -> Salary+=500;// pointer
    
    //Call function to Salary Raise
    SalaryRaise(man1, 520.3);

    // PrintSalary(man1);
    // PrintSalary(man2);

    //Print Salary after raise
    printf("Salary after raise\n");
    PrintStruct(man1);

    return 0;

}

void SalaryRaise(Employee man, float raise_value)
{
    //man.Salary +=700; // adress and .
    //man_ptr -> Salary+=1000;// pointer
};

void PrintStruct(Employee man)
{
    printf("Name of Employee %s \n", man.Name);
    printf("Salary of Employee %f \n", man.Salary);
};