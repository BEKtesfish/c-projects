#include <cs50.h>
#include <stdio.h>






int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
     {
     start= get_int("Enter starting population: ");

    }
    while(start<9);

    // TODO: Prompt for ending size
    int end;

    do
    {
     end = get_int("enter ending population: ");
    }
    while (end<start);

    // TODO: Calculate number of years until we reach threshold

    int years = 0;
    while (start<end)
    {
        start = start +(start/3)-(start/4);
        years++;
    }

    // TODO: Print number of years
    printf("years:%i\n",years);




}
