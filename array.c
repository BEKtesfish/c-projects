#include<stdio.h>
#include<cs50.h>


int main(void)
{
    int n;
    do{
       n=get_int("enter a number: ");

       }while(n<0);

       int numbers[n];
        numbers[0]=1;
        printf("%i\n",numbers[0]);
       for(int i=1;  i <n; i++)
       {
        numbers[i]= 2* numbers[i-1];
        printf("%i\n",numbers[i]);
       }
 }
