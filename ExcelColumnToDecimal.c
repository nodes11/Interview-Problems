#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){
	int i, value = 0, index = 0;

	if (!argv[1]){
		printf("No argument given!\n");
		return 0;
	}

	for (i = strlen(argv[1]); i > 0; i--)
	{
		if (index == 0)
		{
			value = (argv[1][i - 1] - 64);
		}
		else
		{
			value = value + (pow(26, index) * (argv[1][i-1]-64)); //+ (argv[1][i-1]-64));
		}

		index++;
	}

	printf("The value of %s is %d\n.", argv[1], value);

	return 0;
}
