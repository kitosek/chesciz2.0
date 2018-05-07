#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "form.h"
bool board(char A[10][10],char str[20])
{
	int i,a;
	a=0;
	a=a;
	int J[10];
	for (i=0;i<10;i++) J[i]=0;
	J[1]=J[2];
	int len=strlen(str);
	if (len > 5) return false;
	if (str[2]!='-') return false;
	if (str[1]=='1' || str[1]=='2' ||  str[1]=='3' ||  str[1]=='4' ||  str[1]=='5' ||  str[1]=='6' ||  str[1]=='7' ||  str[1]=='8'  ) a++;
	else return false;
	if (str[4]=='1' || str[4]=='2' ||  str[4]=='3' ||  str[4]=='4' ||  str[4]=='5' ||  str[4]=='6' ||  str[4]=='7' ||  str[4]=='8'  ) a++;
	else return false;
	if (str[0]=='a' || str[0]=='b' ||  str[0]=='c' ||  str[0]=='d' ||  str[0]=='e' ||  str[0]=='f' ||  str[0]=='g' ||  str[0]=='h'  ) a++;
	else return false;
	if (str[3]=='a' || str[3]=='b' ||  str[3]=='c' ||  str[3]=='d' ||  str[3]=='e' ||  str[3]=='f' ||  str[3]=='g' ||  str[3]=='h'  ) a++;
	else return false;
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
			
		}
	}
	switch (A[J[1]][J[0]])
	{
		case 'r':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='r';break;}
		case 'n':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='n';break;}
		case 'b':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='b';break;}
		case 'q':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='q';break;}
		case 'k':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='k';break;}
		case 'p':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='p';break;}
		case 'P':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='P';break;}
		case 'R':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='R';break;}
		case 'N':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='N';break;}
		case 'B':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='B';break;}
		case 'Q':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='Q';break;}
		case 'K':{A[J[1]][J[0]]=' '; A[J[4]][J[3]]='K';break;}	
	}

	return true;
}
