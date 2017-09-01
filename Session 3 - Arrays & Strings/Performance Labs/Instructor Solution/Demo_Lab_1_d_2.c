#include <stdio.h>

int main(void)
{
	char myFavoriteWord[256] = {0};
	
	myFavoriteWord[0] = 70;	//F
	myFavoriteWord[1] = 79;	//O
	myFavoriteWord[2] = 82;	//R
	myFavoriteWord[3] = 77;	//M
	myFavoriteWord[4] = 85;	//U
	myFavoriteWord[5] = 76; //L
	myFavoriteWord[6] = 65; //A
	myFavoriteWord[7] = 32; //")
	myFavoriteWord[8] = 49; //1
	myFavoriteWord[256] = '\0';
	
	printf("My favorite word is %s \n", myFavoriteWord);
}
