#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("Height: ");
    int first=height;
    int second=1;
    for (int i=0;i<height;i++)
    {
        for (int j=0;j<first;j++)
        {
            printf(" ");
            if(j==first-1)
            {
                for (int k=0;k<second;k++)
                {
                    printf("#");
                }
                printf(" ");
                for (int a=0;a<=i;a++)
                {
                    printf("#");
                }
                printf("\n");
            }
        }
        first--;
        second++;

    }
}
