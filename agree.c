#include<cs50.h>
#include<stdio.h>

int main(void)
{
char c=get_char("do you agree?\n");

if(c=='Y' || c=='y')
{
    printf("agree\n");
} else if(c=='N' || c=='n')
{
    printf("dissagree\n");
}

}