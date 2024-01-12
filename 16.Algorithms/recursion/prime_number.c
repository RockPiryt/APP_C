#include <stdio.h>
#include <stdbool.h>


bool primeChecker(int n, int i);

bool primeChecker2(int n, int stop,int i);
bool isPrime(int n);

int main()
{   //User enter value to check if is prime
    int n;
    printf("Enter number to check: ");
    scanf("%d", &n);
    
    if (isPrime(n))
        {
            printf("%d is prime.\n", n);
        }
    else
        {
            printf("%d is  not prime.\n", n);
        }

    return 0;
}
//wrapper function - faster end if prime 1 or 2, if not call recursion function
bool isPrime(int n)
{
    int stopper = n/2;
    int divider_num = 2;// 2 because prime number are divided (with 0 reminder) by 1 and itself

    if (n <= 1) return false; 
    else if  (n == 2) return true; 
    else return primeChecker2(n, stopper, divider_num); 
}

bool primeChecker2(int n, int stop,int divider)
{
    if  (n % divider == 0) return false; // if divider will 1 it wrong answer, because prime number are divided (with 0 reminder) by 1
    else if  (divider>=n/2) return true; 
    else return primeChecker2(n, stop,divider+1); 
}

// bool primeChecker(int n, int i)
// {
//     if (n<=1) return false; // prime are positive numbers
//     else if  (n == 2) return true; // 2 is only even prime number
//     else if  (n % i == 0) return false; //  prime number are divided only by 1 and itself, if [i] is (2,3,4,5..) it should reminder should be different !=0
//     else if  (i>=n/2) return true; // if [i] is greater than n/2, reminder always be different than 0, so we dont need to check next values;
//     else return primeChecker(n, i+1); //recursion function 
// }
