#include <stdio.h>

int obeb(int sayi1,int sayi2);

int fib(int sayi);
int fac(int sayi);

int main()
{
	
	//ders 3.
	int deger=5;
	
	int facsonuc=fac(deger);
	printf("faktorıyelı alıncak sayı:%d faktorıyel degeri:%d",deger,facsonuc);
	return 0;
}

int obeb(int sayi1,int sayi2) //enbuyuk ortak bolen 
{
	if (sayi2 == 0) {
        return sayi1;
    }
    else {
        return obeb(sayi2, sayi1 % sayi2);
    }
}


int fib(int sayi)
{
	if(sayi==0)
	{
		return 0;
	}else if( sayi ==1)
	{
		return 1;
	}
	return (fib(sayi-1)+fib(sayi-2));
}

int fac(int sayi)
{
	if(sayi==1 || sayi==0)
	{
		return 1;
	}
	return (sayi*fac(sayi-1));
}





