#include <stdio.h>

void add()
{
    double a, b, res;
    printf("-- Addition --");
    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &a, &b);
    res = a + b;
    printf("Result = %lf\n", res);
}

void sub()
{
    double a, b, res;
    printf("-- Subtraction --");
    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &a, &b);
    res = a - b;
    printf("Result = %lf\n", res);
}

void mult()
{
    double a, b, res;
    printf("-- Multiplication --\n");
    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &a, &b);
    res = a * b;
    printf("Result = %lf\n", res);
}

void div()
{
    double a, b, res;
    printf("\n   -- Division --");
    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &a, &b);
    res = a / b;
    printf("Result = %lf\n", res);
}

int main()
{
    int choice;
    do
    {
        printf("\n  ---| Calculator Menu |---\n");
        printf("\n| 1. Add                    |");
        printf("\n| 2. Subtract               |");
        printf("\n| 3. Multiply               |");
        printf("\n| 4. Divide                 |");
        printf("\n| 5. Exit                   |");
        printf("\tYour choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mult();
            break;
        case 4:
            div();
            break;
        case 5:
            printf("Thanks for using this calculator !");
            break;
        default:
            printf("Invalid Input!\nTry Again");
            break;
        }
    } while (choice != 5);
    return 0;
}