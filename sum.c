#include <stdio.h>
 
int main(int array[], int size)
{
  int sum = 0;
    for (c = 1; c < size; c++)
    {
        sum+=array[c];
    }
    printf("The sum of values is %d.\n", sum);
    return sum;
}
