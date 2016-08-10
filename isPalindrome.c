#include <stdio.h>
#include <string.h>

int isPalindrome(char *start, char *end)
{
	if (*start != *end)
	{
		return 0;
	}
	else if (start >= end)
	{
		return 1;
	}
	else if (*start == *end)
	{
		isPalindrome(start + 1, end - 1);
		return 1;
	}
}

int main(int argc, char *argv[])
{
	if (argc < 2){
		printf("Invalid arguments\n");
	}
	
	char *start = argv[1];

	int palindrome = isPalindrome(start, start + (strlen(argv[1]) - 1));

	if (palindrome == 1)
	{
		printf("%s is a palindrome.\n", argv[1]);
	}
	else
	{
		printf("%s is not a palindrome.\n", argv[1]);
	}

	return 0;
}
