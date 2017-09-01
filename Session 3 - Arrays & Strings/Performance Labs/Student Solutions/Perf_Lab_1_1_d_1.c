#include <stdio.h>

int main(void)
{
	int classAges[16] = {0};
	char quoteArray[256] = {"The\ncake\nis\na\nlie"};
	quoteArray[256] = '\0';
	
	int counter = 0;
	
	while(counter < 16)
	{
		printf("%d \n", classAges[counter]);
		counter++;
	}

	printf("%s \n", quoteArray);	
	
	return 0;
}
