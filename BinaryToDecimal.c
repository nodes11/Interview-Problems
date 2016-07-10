#include <stdio.h>
#include <math.h>
#include <string.h>

float binaryToDecimal(char *decimal)
{
	int i, j = 0;
	float value = 0;

	for (i = strlen(decimal); i > 0; i--)
	{
		if (decimal[i - 1] == '1'){
			value += pow(2, j);
		}
		j++;
	}

	return value;
}

int decimalToBinary(char *decimal)
{
	int i, n = 0, value = 0;

	

	return value;
}

int main(int argc, char *argv[])
{
	if (!argv[1] || !argv[2])
	{
		printf("Missing argument.\n");
		return 0;
	}

	if (strcmp(argv[1], "-b2d") == 0)
	{
		float decimalValue = binaryToDecimal(argv[2]);
		printf("%s in base 10 is %.2f\n", argv[2], decimalValue);
	}
	else if (strcmp(argv[1], "-d2b") == 0)
	{
		int binaryValue = decimalToBinary(argv[2]);
		printf("%s in base 2 is %d\n", argv[2], binaryValue);
	}

	return 0;
}
