#include <stdlib.h>
#include <stdio.h>

#define size 150

void printArray(int *pointer);
void findoccurrences(int *pointer, char *input);

int main()
{

	char num[size] = "1v88886l256338ar0ekk";
	int repetitions [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	findoccurrences(&repetitions[0], &num[0]);
	printArray(&repetitions[0]);
	return 0;

}

void printArray(int *pointer)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", *pointer);
		pointer++;
	}
}

void findoccurrences(int *occurrence, char *input) {
    while (*input != '\0') {
        if (*input >= '0' && *input <= '9') {
            (*(occurrence + (*input - '0')))++;
        }
        input++;
    }
}
