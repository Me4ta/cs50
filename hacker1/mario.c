#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int pyramidsHeight;
    
    do
    {
        printf("Input a non-negative integer no greater than 23: ");
        pyramidsHeight = GetInt();
    }
    while (pyramidsHeight < 0 || pyramidsHeight > 23);
    
    for (int i = 0; i < pyramidsHeight; i++)
    {
        for (int j = 0; j <= (pyramidsHeight + 2 + i); j++)
        {
        if (j < (pyramidsHeight - i - 1) || (j >= pyramidsHeight && j <= (pyramidsHeight + 1)))
            printf(" ");
        else
            printf("#");
        }
        printf("\n");
    } 
}
