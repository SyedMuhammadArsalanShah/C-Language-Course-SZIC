#include <stdio.h>

// char ,int ,  float , double

void main()
{
    printf("Enter You age \n");
    int age;
    scanf("%d", &age);

    // == != < <= > >=
    if (age == 18)
    {
        printf("you can drive but carefully \n");
    }
    else if (age > 18 && age <= 60)
    {

        printf("you can drive \n");
    }
    else if (age < 18)
    {
        printf("you can not drive \n");
    }
    else
    {
        printf("app ghar bethy \n");
    }

    // even odd program
    printf("Enter your Number \n");
    int a;
    scanf("%d", &a); // 6

    if (a % 2 == 0)
    {
        printf("Even %d \n", a);
    }
    else
    {
        printf("odd %d \n", a);
    }

    // leap year program

    printf("Enter your Year \n");
    int b;
    scanf("%d", &b); 
    // 6

    if (a % 4 == 0)
    {
        printf("Leap Year Hai %d \n", b);
    }
    else
    {
        printf("Leap Year nahi hai  %d \n ", b);
    }
}
