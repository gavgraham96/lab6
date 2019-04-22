int main(int array[], int size)
{
  for (int i = 0; i < size; i++)                     //Loop for ascending ordering
	{
		for (int j = 0; j < size; j++)             //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}  
		}
	}
  return 0;
}
