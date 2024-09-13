#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int sayi1,sayi2,temp; 
	int i,j;
	do{

	printf("\n1. sayiyi giriniz (cikis -1):");
	scanf("%d",&sayi1);
	if(sayi1==-1) break; 
	printf("2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	if(sayi1>sayi2) { temp=sayi1; sayi1=sayi2; sayi2=temp; }
	
	for(i=sayi2;;i++)
	{
	printf("%d",i);	
		if(i%sayi1==0&&i%sayi2==0) break;
	
	}
	printf("EKOK %d \n",i);

}while(1);
	return 0;
}
