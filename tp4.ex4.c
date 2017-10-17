/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>

int main() {
	int t1[10]={10,20,5,8,102,56,84,59,23,24};
	int t2[10]={52,65,87,15,2,9,36,12,46,97};
	int t3[10],i;

for(i=0;i<10;i++)
		{t3[i]=t1[i];
	     t1[i]=t2[i];
	     t2[i]=t3[i];}
for(i=0;i<10;i++)
	{printf("%d\t",t1[i]);}
printf("\n");
for(i=0;i<10;i++)
{printf("%d\t",t2[i]);}



}
