#include <stdlib.h>
#include <stdio.h>
#include "form.h"
void PrintDoska(char A[10][10])
{
	int i,j;
	for (i=0;i<=9;i++) 
	{
 	printf ("\n");
 	for (j=0;j<=8;j++)
	 {
	 	printf ("%c", A[i][j]);
	 	printf (" ");
	 	
	 }
 	}
 	printf ("\n");
}
