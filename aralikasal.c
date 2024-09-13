#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int sayi1,sayi2,temp; 
	int i,j;
	do{

	printf("1. sayiyi giriniz (cikis -1):");
	scanf("%d",&sayi1);
	if(sayi1==-1) break; 
	printf("2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	if(sayi1>sayi2) { temp=sayi1; sayi1=sayi2; sayi2=temp; }
	for(i=sayi1;i<=sayi2;i++)
	{
		
		for(j=2;j<i;j++)
		{
			if(i%j==0) {
				break;
			}
		}
		if(i==j) printf("%d ",i);
		
	}
}while(1);
	return 0;
}
