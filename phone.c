#include<stdio.h>
#include<cs50.h>
int main(void)
{
    string name=get_string("name: ");
    int age= get_int("enter your age: ");
    int number= get_int("enter your phone number: ");

    printf("is this correct!: name: %s\nage: %i\nnumber: %i\n",name,age,number);
}