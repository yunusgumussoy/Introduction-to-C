/*1 den 1000 ekadar olanM�kemmel say�lar� g�steren program*/
/*M�kemmel say� kendisi hari� b�lenleri toplam� kendine e�it olan say�d�r*/
/*Matematiksel form�l� �u �ekildedir 2 �ss� (p-1) x (2 �ss� p)-1 dir.*/
/*Buradaki p say�s� asal bir say� olmal�d�r.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main()
	{
		unsigned long int c, b, ussu,Mksayi;// de�i�kenlerimiz.
		printf(" 1 ile 1000 arasindaki Mukemmel sayilar\n\n");
		for (ussu = 2; ussu < 7; ussu++)//Form�ldeki n say�s� 6 dan b�y�k oldu�unda m�kemmel say�lar 1000 ge�er
			{//bu y�zden 6 s�n�r�n� koyduk
				b = 1;
				for (c = 2; c < ussu; c++)// bu k�s�m asal olup olmamas� ile ilgili daha �nceki programda bunu g�stermi�tik.
				{
					if (ussu % c == 0)
					{
						b = 0;
						break;
					}
				}
				if (b == 1)
				{
					Mksayi = pow(2, (float(ussu) -1))*(pow(2, float(ussu)) - 1);//m�kemmel say�n�n mat. form�l�
					if (Mksayi < 1000)//M�kemmel say� 1000 den k���k oldu�u s�rece ge�erlidir.
						printf(" %d \n", Mksayi);
				}		
			}
			_getch();
	}
