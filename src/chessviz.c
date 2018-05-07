#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "form.h"
int main ()
{
	char A[10][10],str[20];
	FirstDoska(A);
	PrintDoska(A);
	do
	{
	scanf("%s",str);
	if(strcmp(str, "exit") == 0) break; 
	board(A,str);
	PrintDoska(A);
	}while(1);
	return 0;
}
