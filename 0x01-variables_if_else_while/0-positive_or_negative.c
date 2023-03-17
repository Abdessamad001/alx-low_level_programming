#include <stdio.h>
/**
* main - task 0 code 
*
* Return: Always 0
*/
int main(void)
{
	int n;

    while (1)
    {
	 printf("Please enter a number: ");
	 scanf("%d", &n);

        if (n == 0)
        {
            printf("%d is zero\n", n);
        }
        else if (n > 0)
        {
            printf("%d is positive\n", n);
        }
        else
        {
            printf("%d is negative\n", n);
        }
    }

    return (0);
}

