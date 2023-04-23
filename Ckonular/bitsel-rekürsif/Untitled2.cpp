#include <stdio.h>
#include <stdlib.h>
int solakaydir(int gelensayi,int nekadarkayicak);
int besincibiti0olanlar(int sayi);
int main()
{
	
	//ders 2
	//bitsel işlemler
	
	/*
		&	a & b	ve
		|	a | b	veya
		^	^a	özel veya
		<<	a << p	Sola kaydırma
		>>	a >> p	Sağa kaydırma


		x = x << y	yerine	x <<= y
		x = x >> y	yerine	x >>= y
		x = x & y	yerine	x &= y
		x = x ^ y	yerine	x ^= y
		x = x | y	yerine	x |= y


#include <stdio.h>
#include <conio.h>
int main()
{     
      unsigned short x = 0x1AC3;        x = 0001 1010 1100 0011  
      unsigned short y;
      
      y = ~x;                                           y = 1110 0101 0011 1100 
      printf("y = %x\n", x);
      printf("y = %x , %u\n", y,y);       y = 0xE53C  
      printf("%d",sizeof(short));
      getch();
      return 0;
}

	*/
	
	/*
	unsigned short x = 0x1BC5;            /* x = 0001 1011 1100 0101 
     unsigned short y = 0x3A0D;           /* y = 0011 1010 0000 1101 
     unsigned short z;
     z = x & y;                            /* z = 0001 1010 0000 0101 
     printf("z = %x , %u", z,z);                 /* z = 0x1A05 

	*/
	
	/*
	printf("Sayi Giriniz:");
	int sayi;
	scanf("%d",&sayi);
	printf("Sayinin ne kadara kayacagini Giriniz:");
	int sayi1;
	scanf("%d",&sayi1);

	int sonuc=solakaydir(sayi,sayi1);
	printf("Sonuc=%d",sonuc);
	
	*/
	
	int sayi=15 ; //0001 0111  -> 23  5. bas 1 oldu ıcın  0000 1111 -->15 --> 0000 1011 -->11
	int deneme=besincibiti0olanlar(sayi);
	printf("%d",deneme);  //cıktının 0001 1111 yanı 31 olması lazım 
	
	return 0;
}

int solakaydir(int gelensayi,int nekadarkayicak)
{
	 gelensayi=gelensayi<<nekadarkayicak;
	return gelensayi;
}

int besincibiti0olanlar(int sayi)
{
	//0001 0000 aradıgımız bu bunu bunla carparsak 16 sayısna esıtse 
	//ustekını 0000 1000 toplarız
	//degılse 
	// 0000 0-0-00 3. bas 0 yap  0101 0101  1111 1011 carp yanı ve 
	
	if	((sayi & 16)!=0) //16 ---> 0001 0000 carptık deger 0 ise gir
	{
		printf("girilen deger in 5.basamagı 0");
		sayi=sayi | 8; // 0000 1000  veya dedık 4.bas 1 yaptık 
	}else{
		printf("girilen deger in 5.basamagı 1");
		sayi=sayi & ~4;  // burada 1111 1011 ıle carptık 
	}
	return sayi;
}










