/**
 *  Simple Calculator ask user to enter two numbers and the operator and the program won't
 *  end until the user ends it
 */

#include <stdio.h>

int main()
{
    char operation;
    int num1,num2,stop=1;

    AGAIN:

    /* Input two numbers from user */
    printf("Enter two operands: ");
    scanf("%d%d",&num1,&num2);

    /* Input an operator from user */
    printf("Enter an operator \" +, -, *,/,%\" : ");

    /* Clear input buffer to avoid taking Enter as character */
    fflush(stdin);
    scanf("%c",&operation);

    /* define result to assign the result of operation & initialize it with -1
       so that when no assignment occurs (num2==0 in division) we check result value */
    float result=-1;

    switch(operation)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            if(num2!=0)
                result=(float)num1/num2;
            break;

        case '%':
            result=num1%num2;
            break;

        default:
            printf("Wrong operation\n\n");
    }

    if(result==-1)
       printf("Can't divide by Zero\n\n");
    else
        printf("\n%d %c %d = %.3f \n\n",num1,operation,num2,result);

        // Exit condition
        printf("Do you want to continue ? \"Yes:0 , No:any other number\" : ");
        scanf("%d",&stop);
        printf("\n\n");
        if(stop==0)
        {
            goto AGAIN;
        }

    return 0;
}
