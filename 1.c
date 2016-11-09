#include <stdio.h>

int main(void)
{
    for (int a = 1; a < 5; a++)
    {
        for (int b = 1; b < 5; b++)
        {
            for (int c = 1; c < 5; c++)
            {
                if (a != b && a != c && b != c)
                {
                    printf ("%d%d%d\n", a, b, c);                
                }
            }
        }
    }
    return 0;
}
