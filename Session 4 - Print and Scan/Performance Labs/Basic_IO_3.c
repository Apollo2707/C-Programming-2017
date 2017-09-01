#include <stdio.h>

int main(void)
{
	char buff[10];
	
	fgets(buff, sizeof(buff), stdin);
	fputs(buff, stdout);
	
	
	getchar();
	
	return 0;
}
