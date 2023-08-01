/**
 * C program to compute real & complex roots of the equation:
 *                ax2+bx+c=0
 *  The program will prompt the user to input the values of a, b, and c.
 *  It then computes the roots of the equation based on rules.
 *  and the program won't end until the user ends it
 *
 */

#include <stdio.h>
/* include this library to use the functions(power & square_root) */
#include <math.h>

/* Define structure(user defined data type) to define complex numbers */
typedef struct
{
    float real,img;
}complex;


int main()
{
    int a,b,c,dis;
    float x1=0,x2=0;
    complex complex_num;

    /*input the parameter of second order equation */
    printf("Enter the value of a,b and c respectively\n\
    of the following equation:\n\
                aX2+bX+c=0\n\n");
    scanf("%i%i%i",&a,&b,&c);

    /* calculate the discrimination */
    dis=pow(b,2)-(4*a*c);
    printf("\nDiscrimination= %d\n",dis);

    /* different conditions to solve the equation */
    if(a==0 && b==0)
    {
        printf("No solution\n\n");
    }
    else if(a==0)
    {
        x1=(-c)/(float)b;
        printf("There is one solution: %.3f\n\n",x1);
    }
    else if(dis==0)
    {
        x1=(-b)/(float)(2*a);
        printf("There is one solution: %.3f\n",x1);
    }
    else if(dis>0)
    {
        x1=((-b)-sqrt(dis))/(float)(2*a);
        x2=((-b)+sqrt(dis))/(float)(2*a);
        printf("There is two solutions: %.3f , %.3f\n",x1,x2);
    }
    else if(dis<0)
    {
       complex_num.real=(-b)/(float)(2*a);
       complex_num.img=sqrt(-1*(dis))/(float)(2*a);
       printf("There is two distict complex roots: %.3f+%.3fj , %.3f-%.3fj \n\n"
              ,complex_num.real,complex_num.img,complex_num.real,complex_num.img);
    }

    return 0;
}

