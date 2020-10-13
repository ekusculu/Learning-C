#include <stdio.h>
#include <math.h>


/*
	 Kodda, kullanıcı 8 adet sayı girdikten sonra bu sayıların ikiye bölümünden kalanlarını bir bütün sayı olarak bastırır. Daha sonra bu binary 
	 sayısının  decimal karşılığını hesaplar.
	
*/
int main(){
	
	int remainder[8];
	int a,num,i,dec=0,base=0,temp,n=0;
	
	
  		printf("Enter 8 integers.\n");


	for(i=0;i<8;i++){
		
		
		do{
		
		printf("%d. sayi = ",i+1);
		scanf("%d",&a);
	}while(a<0);
	
		remainder[i] = a%2;
	
		               
		num += (remainder[i]*pow(10,n));
		n++;
		printf("%d\n", num);
	}
	
/*
		1  0   0   1   0   0   1   1          
	  2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
*/	
	
	while(num!=0){
		temp=num%10;
		num=num/10;
		dec+=temp*pow(2,(base));
		base++;
	}
	printf("Decimal = %d",dec);
	

}
