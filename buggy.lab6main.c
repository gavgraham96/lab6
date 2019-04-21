#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
//unsure the purpose of j
int i,j, sum;
int *dynamic_array;
int min, max;

if (argc <= 2){		/* must have at least one number	*/
	printf("Usage: %s <num1>....<numX>\n", argv[0]);
	return;
}


if((dynamic_array=malloc((argc-1)*sizeof(int))) == NULL){
	printf("Could not allocate dynamic memory\n");
	return;
}

for (i =1; i<argc; i++){
	
	*(dynamic_array+(i-1)) = *argv[i];
}

min = Min(dynamic_array,argc-1);

max = Max(dynamic_array, argc-1);

sum = Sum(dynamic_array, argc-1);

Sort(dynamic_array, argc-1);

printf("The input received has a span of %d units.\n", min-max);

printf("The average value is %d\n", sum/argc-1);

printf("The values in ascending order are:\n");

for(i=0; i<argc-1; i++){
	printf("%d\n",*(dynamic_array+i));
}
//must have return 0
return 0;
}

