/*1 den 1000 ekadar olanMükemmel sayýlarý gösteren program*/
/*Mükemmel sayý kendisi hariç bölenleri toplamý kendine eþit olan sayýdýr*/
/*Matematiksel formülü þu þekildedir 2 üssü (p-1) x (2 üssü p)-1 dir.*/
/*Buradaki p sayýsý asal bir sayý olmalýdýr.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main()
	{
		unsigned long int c, b, ussu,Mksayi;// deðiþkenlerimiz.
		printf(" 1 ile 1000 arasindaki Mukemmel sayilar\n\n");
		for (ussu = 2; ussu < 7; ussu++)//Formüldeki n sayýsý 6 dan büyük olduðunda mükemmel sayýlar 1000 geçer
			{//bu yüzden 6 sýnýrýný koyduk
				b = 1;
				for (c = 2; c < ussu; c++)// bu kýsým asal olup olmamasý ile ilgili daha önceki programda bunu göstermiþtik.
				{
					if (ussu % c == 0)
					{
						b = 0;
						break;
					}
				}
				if (b == 1)
				{
					Mksayi = pow(2, (float(ussu) -1))*(pow(2, float(ussu)) - 1);//mükemmel sayýnýn mat. formülü
					if (Mksayi < 1000)//Mükemmel sayý 1000 den küçük olduðu sürece geçerlidir.
						printf(" %d \n", Mksayi);
				}		
			}
			_getch();
	}
