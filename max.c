#include <stdio.h>
 
int main(int array[], int size)
{
  int max = array[0]
    for (c = 1; c < size; c++)
    {
        if (array[c] > max)
        {
           max = array[c];
        }
    }
    printf("The maximum value is %d.\n", max);
    return max;
}
