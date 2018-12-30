#include<stdio.h>
main()
{
	int hari,jam,menit,detik,sisa1,sisa2;
	printf("masukan detik=",detik);
	scanf("%d",&detik);
	
	hari=detik/86400;
	sisa1=detik%86400;
	jam=sisa1/3600;
	sisa2=detik%3600;
	menit=sisa2/60;
	detik=sisa2%60;
	
	printf("%d hari,%djam,%d menit,%d detik",hari,jam,menit,detik);
}
