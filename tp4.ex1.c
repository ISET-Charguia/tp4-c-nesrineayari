/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t[20],tn[20],tp[20];
	int p,k,n,i;
	do{
		printf("donner le nbr de case");
		scanf("%d",&n);
	}while(n>20);
	for(i=0;i<=n-1;i++)
	{printf("donner un entier");
	scanf("%d",&t[i]);
	}
	k=0;
	p=0;
	for(i=0;i<n;i++)
	{if(t[i]<0)
	   {tn[k]=t[i];
	     k++;}
	else{
		tp[p]=t[i];
	    p++;}
	}
		for(i=0;i<k;i++)
			{printf("%d\t",tn[i]);
		printf("\n");}
		for(i=0;i<p;i++)
			{printf("%d\t",tp[i]);}
		return 0;


}
