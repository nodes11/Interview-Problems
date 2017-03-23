#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HASH_PRIME 5381
#define BUFFER_SIZE 64

char **table = NULL;

uint32_t hash(char *str)
{
	uint32_t hashedValue = HASH_PRIME;

	for (int i = 0; i < strlen(str); i++)
	{
		hashedValue = ((hashedValue << 5) + hashedValue) + str[i];
	}

	return hashedValue;
}

void add(uint32_t key, char *value)
{
	char value_str[64];
	int hash_index = key % HASH_PRIME;
	strcpy(value_str, value);
    table[hash_index] = (char *)malloc(BUFFER_SIZE * sizeof(char));
	strcpy(table[hash_index],value);
}

void show()
{
    int i = 0;
    
    for (i = 0; i < HASH_PRIME; i++)
    {
        if (table[i] != NULL)
        {
            printf("table[%d]: %s", i, table[i]);
        }
    }
}

int main(int argc, char *argv[], char *env[])
{
	table = (char **)malloc(HASH_PRIME*sizeof(char *));
	char cmd[BUFFER_SIZE];

	while(strcmp(cmd, "quit\n") != 0)
	{
			printf("Enter hash value: ");
			fgets(cmd, 64, stdin);
			
			uint32_t key = hash(cmd);
			
            if (strcmp(cmd, "show\n") == 0)
            {
                show();
            }
            else
            {
                add(key, cmd);
            }
	}
	return 0;
}
