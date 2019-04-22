#include <stdio.h>
 
int main(int array[], int size)
{
  int minimum = array[0]
    for (c = 1; c < size; c++)
    {
        if (array[c] < minimum)
        {
           minimum = array[c];
           location = c+1;
        }
    }
    printf("The minimum value is %d.\n", minimum);
    return minimum;
}
