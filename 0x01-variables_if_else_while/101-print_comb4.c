#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	 for (int i = 0; i < 7; i++)
	 {	 
        for (int j = i + 1; j < 8; j++)
	{	
            for (int k = j + 1; k < 9; k++)
	    {	    
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                if (i != 6 || j != 7 || k != 8)
		{	
                    putchar(',');
                    putchar(' ');
		         }
            }
        }
   }
    putchar('\n');
    return (0);
}
