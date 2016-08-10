#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
	if (*str){
		reverse(str+1);
		printf("%c", *str);
	}

	return;
}

int main(int argc, char *argv[])
{
	if (argc < 2){
		printf("Invalid arguments\n");
	}

	reverse(argv[1]);
	
	return 0;
}
