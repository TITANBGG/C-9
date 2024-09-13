#include<stdio.h>
#include<stdlib.h>
int toplam=0;
int faktoriyel(int sira)
{
	
	if(sira==0 ||sira==1)
	{
		return 1;
	}
	else
	{
		return sira*faktoriyel(sira-1);
	}
}

int deger(int sira)
{
	int i;
    if(sira==0)
    {
    	return toplam;
	}
	else
	{
		toplam+=faktoriyel(sira)/sira;
	
	}

}


int main()
{
	int sira;
	
	printf("ne kadar ilerleyecegini giriniz: ");
	scanf("%d",&sira);
	
	printf("sonuc= %d",deger(sira));
}
