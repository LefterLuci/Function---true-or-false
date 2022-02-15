#include <stdio.h>
#include <stdlib.h>

void ez(int num1, int num2)
{

    if(num1==num2)
    {
        printf("***  1  ***");
    }
    else
    {
        printf("***  0  ***");
    }

}


int main()
{
    int numa,numb;

    printf("Enter 2 numbers:\n");
    scanf("%d%d",&numa,&numb);

    ez(numa,numb);

        return 0;
}
