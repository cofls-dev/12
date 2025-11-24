#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int cnt;
	int pos;
	int coinResult;
	
	srand( (unsigned) (time(NULL)) );
	
	//opening
	printf("==================================\n");
	printf("**********************************\n");
	printf("***   SKARK ISLAND GAME START  ***\n");
	printf("**********************************\n");
	printf("==================================\n");
	
	
	//step 1. initialization (player name setting, variables)
	
	//step 2. turn play (do-while)
	// 2-1. status printing
	// 2-2. roll die
	// 2-3. move (result)
	// 2-4. change turn, shark move
	
	//step 3. game end (winner printing)
	
	
	//ending
	printf("\n\n\n\n\n\n\n");
	printf("==================================\n");
	printf("**********************************\n");
	printf("***    SKARK ISLAND GAME END   ***\n");
	printf("**********************************\n");
	printf("==================================\n\n");
	
	
	system("PAUSE");
	return 0;
}
