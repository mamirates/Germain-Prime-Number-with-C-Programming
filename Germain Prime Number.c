#include <stdio.h>
#define MAX 100
int main() {
	int x,y;
	int i,j,k,p;
	int sayac=0;
	int sayac_2=0;
	int dizi[MAX];
	int a,b;
	int indeks;
	   printf("***GERMAIN ASAL SAYILARI BULMA PROGRAMI***\n");
	   printf("\nAraliginizin Alt Limiti Degerini Giriniz: ");
	   scanf("%d",&x);
	   printf("Araliginizin Ust Limit Degerini Giriniz: ");
	   scanf("%d",&y);
	   
	   for(i=x;i<=y;i++)
	   {
	   	for(j=2;j<i;j++)
		{
		    if(i%j==0)
			{
	   	  	 	sayac=sayac+1;
			}
		}
				if(sayac==0)
				{
					k=2*i+1;
				 for(p=2;p<k;p++)
				{
				 	if(k%p==0)
					 {
				 		sayac_2=sayac_2+1;
					 }
				}
				 if(sayac_2==0)
				 {	 
			 	dizi[indeks]=i;
				indeks=indeks+1;
				 }
				 else
				 {
				 	sayac_2=0;
				 }		 
				}
				else
				{
					sayac=0;
				}
			}
			 printf("--%d ile %d Araligindaki Germain Asal Sayilari-- ",x,y);
			 for(b=0;b<indeks;b++)
			 {
			printf("\n--> %d",dizi[b]);
			 }	   
	return 0;
}
