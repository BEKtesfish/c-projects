#include <cs50.h>
#include <stdio.h>
int n = 0;
int main(void)
{
// get hight number
    do
    {
        n = get_int("hight: ");
    }
    while (n < 1 || n > 8);


// building the bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
            {
                printf(" ");

            }
            else if (i + j >= n - 1)
            {

                printf("#");
            }
        }
        printf("\n");
    }

}