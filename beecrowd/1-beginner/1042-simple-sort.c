/*
ID: 1042
Name: Simple Sort
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1042
Date: 2024-03-05
Language: C
*/

#include <stdio.h>

int main ()
{
    int num1, num2, num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    
    if(num1>num2 && num2>num3)
    {
        printf("%d\n",num3);
        printf("%d\n",num2);
        printf("%d\n",num1);
    }
    else
    {
        if(num1>num2 && num2<num3 && num3>num1)
        {
            printf("%d\n",num2);
            printf("%d\n",num1);
            printf("%d\n",num3);
        }
        else
        {
            if(num1<num2 && num2>num3 && num3>num1)
            {
                printf("%d\n",num1);
                printf("%d\n",num3);
                printf("%d\n",num2);
            }
            else
            {
                if(num1<num2 && num2>num3 && num3<num1)
                {
                    printf("%d\n",num3);
                    printf("%d\n",num1);
                    printf("%d\n",num2);
                }
                else
                {
                    if(num1<num2 && num2<num3)
                    {
                        printf("%d\n",num1);
                        printf("%d\n",num2);
                        printf("%d\n",num3);
                    }
                    else
                    {
                        if(num1>num2 && num2<num3 && num3<num1)
                        {
                            printf("%d\n",num2);
                            printf("%d\n",num3);
                            printf("%d\n",num1);
                        }
                    }
                }
            }
        }
    }
    printf("\n%d\n%d\n%d\n",num1,num2,num3);
}