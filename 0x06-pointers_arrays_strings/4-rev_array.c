#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
int c, d;

for (c = 0; (c < (n - 1) / 2); c++)
        {
        d = a[c];
        a[c] = a[n - 1 - c];
        a[n - 1 - c] = c;
        }
}
