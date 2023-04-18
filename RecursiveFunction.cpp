
#include<stdio.h
void YildizSekli(int yildiz,int bosluk, int satir ,int i)
{	
	int j,k;
	if(i<satir)  // i,satir sayisina gelene kadar devam etsin.
	{
		for(j=0;j<bosluk+(satir+2);j++)  //
		{
			printf(" ");
		}
		for(k=0;k<yildiz;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	else // i= satir
	return;
	
	return YildizSekli( yildiz+2,bosluk-2,satir,i+1); // yildiz 1,3,5 diye gitsin
													 // Her defa�nda bo�luk azalacak ��nk� satir art�yor
}
main()
{
	int yildiz,bosluk,i,satir;
	printf("kac satir yildiz olsun:");
	scanf("%d",&satir);
	 // 8.sat�rda 15 y�ld�z oluyor.
	YildizSekli(1,satir-1,satir,0);
}
