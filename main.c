#include<stdio.h>
#include<stdlib.h>
int k = 0, result = 0;
int menu()
{
    int ch;
    printf("\nWelcome to Das Calculators: \nPlease chose your respective operations: \n\t> Press 1 for addition. \n\t> Press 2 for subtraction. \n\t> Press 3 for multiplication. \n\t> Press 4 for divide. \n\t> Press 5 for modulus operation. \n\t> Press 6 for clearing the screan. \n\t> Press 7 to exit. \n\t\t result = %d \nEnter your Choice : ",result);
    scanf("%d",&ch);
    return(ch);    
}
void add()
{
    int a,b;
    if (k)
    {
        printf("\nEnter second Number : ");
        scanf("%d",&b);
        result += b;
        printf("The result is %d\n",result);
    }
    else
    {
        printf("\nEnter the first Number : ");
        scanf("%d",&a);
        printf("\nEnter the second Number : ");
        scanf("%d",&b);
        result = a + b;
        printf("The result is %d\n",result);
    }
}
void sub()
{
    int a,b;
    if (k)
    {
        printf("\nEnter second Number : ");
        scanf("%d",&b);
        result -= b;
        printf("The result is %d\n",result);
    }
    else
    {
        printf("\nEnter the first Number : ");
        scanf("%d",&a);
        printf("\nEnter the second Number : ");
        scanf("%d",&b);
        result = a - b;
        printf("The result is %d\n",result);
    }
}
void mul()
{
    int a,b;
    if (k)
    {
        printf("\nEnter second Number : ");
        scanf("%d",&b);
        result *= b;
        printf("The result is %d\n",result);
    }
    else
    {
        printf("\nEnter the first Number : ");
        scanf("%d",&a);
        printf("\nEnter the second Number : ");
        scanf("%d",&b);
        result = a * b;
        printf("The result is %d\n",result);
    }
}
void divi()
{
    int a,b;
    if (k)
    {
        printf("\nEnter second Number : ");
        scanf("%d",&b);
        result /= b;
        printf("The result is %d\n",result);
    }
    else
    {
        printf("\nEnter the first Number : ");
        scanf("%d",&a);
        printf("\nEnter the second Number : ");
        scanf("%d",&b);
        result = a / b;
        printf("The result is %d\n",result);
    }
}
void mod()
{
    int a,b;
    if (k)
    {
        printf("\nEnter second Number : ");
        scanf("%d",&b);
        result %= b;
        printf("The result is %d\n",result);
    }
    else
    {
        printf("\nEnter the first Number : ");
        scanf("%d",&a);
        printf("\nEnter the second Number : ");
        scanf("%d",&b);
        result = a % b;
        printf("The result is %d\n",result);
    }
}
void clr()
{
    result = 0;
    k = 0;
    printf("\nOld data cleared...");
}
int main()
{
    while (1)
    {
        system("cls");
        switch (menu())                     
        {
        case 1:
            add();
            k = 1;
            break;
        case 2:
            sub();
            k =1;
            break;
        case 3:
            mul();
            k = 1;
            break;
        case 4:
            divi();
            k = 1;
            break;
        case 5:
            mod();
            k = 1;
            break;
        case 6:
            clr();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Enter a valid input");
            break;
        }
        getch();
    }
    
    return 0;
}