#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "form.h"
void board(char A[10][10])
{
	char str[6];
	int i;
	int J[10];
	for (i=0;i<=10;i++) J[i]=0;
	J[1]=J[2];
	scanf("%s",str);
	for (i=0;i<6;i++)
	{
		if (i==2) i++;
		switch (str[i])
		{
			
			case '1': {J[i]=8;break;}
			case '2': {J[i]=7;break;}
			case '3': {J[i]=6;break;}
			case '4': {J[i]=5;break;}
			case '5': {J[i]=4;break;}
			case '6': {J[i]=3;break;}
			case '7': {J[i]=2;break;}
			case '8': {J[i]=1;break;}
			
			case 'a': {J[i]=1;break;}
			case 'b': {J[i]=2;break;}
			case 'c': {J[i]=3;break;}
			case 'd': {J[i]=4;break;}
			case 'e': {J[i]=5;break;}
			case 'f': {J[i]=6;break;}
			case 'g': {J[i]=7;break;}
			case 'h': {J[i]=8;break;}
			
			case 'A': {J[i]=1;break;}
			case 'B': {J[i]=2;break;}
			case 'C': {J[i]=3;break;}
			case 'D': {J[i]=4;break;}
			case 'E': {J[i]=5;break;}
			case 'F': {J[i]=6;break;}
			case 'G': {J[i]=7;break;}
			case 'H': {J[i]=8;break;}
		}
	}
	A[J[1]][J[0]]=' ';
	A[J[4]][J[3]]='p';
}
