#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Turkish");

	int se�im,se�im2;
	int g�ncel_bakiye = 1000,miktar,kontrol;
	int ID=123456, �ifre=22,x,y,hata=0;
	a:
	printf("\n*********************************************************\n");
	printf("Kullan�c� ad�:");
	scanf("%d", &x);
	printf("\n�ifre:");
	scanf("%d", &y);
	printf("*********************************************************\n");

	if (ID != x || �ifre != y) {
		
		hata++;
		if (hata == 3) {
			printf("Kart�n�z bloke edilmi�tir...\a");
			exit();
		}
		printf("Hatalu kullan�c� ad� veya �ifre tekrar deneyiniz.");
		goto a;
	}
	else {
		goto bas;
	}
	bas:
	printf("\n1-BAK�YE G�R�NT�LE\n2-PARA YATIR\n3-PARA �EK\n4-FATURA �DE\n5-KART �ADE\nYapmak istedi�iniz i�lemi se�iniz.");
	scanf("%d", &se�im);



	if (se�im == 1) {
		system("CLS");
		printf("G�ncel bakiyeniz:%d\n", g�ncel_bakiye);
		goto bas;
	}
	else if(se�im == 2) {
		system("CLS");
		printf("Yat�rmak iste�iniz miktar� giriniz:\n");
		scanf("%d", &miktar);
		g�ncel_bakiye = g�ncel_bakiye + miktar;
		printf("G�ncel bakiyeniz:%d\n", g�ncel_bakiye);
		goto bas;
	}
	else if (se�im == 3) {
		system("CLS");
		printf("�ekmek iste�iniz miktar� giriniz:\n");
		scanf("%d", &miktar);
		kontrol = g�ncel_bakiye - miktar;
		if (kontrol < 0) {
			printf("Yeteri kadar bakiyeniz bulunmamaktad�r.Tekrar deneyiniz.\n");
		}
		else{
			g�ncel_bakiye = g�ncel_bakiye - miktar;
			printf("G�ncel bakiyeniz:%d\n", g�ncel_bakiye);
		}
		goto bas;

	}
	else if (se�im == 4) {
		system("CLS");
		bas2:
		printf("1-�nternet faturas�(150)\n2-Elektrik faturas�(350)\n3-Su faturas�(300)\n4-Geri\n�demek iste�iniz faturay� se�iniz:\n");
		scanf("%d",& se�im2);
		if (se�im2 == 1) {
			kontrol = g�ncel_bakiye - 150;
			if (kontrol < 0) {
				printf("Yeteri kadar bakiyeniz bulunmamaktad�r.Tekrar deneyiniz.\n");
			}
			else {
				g�ncel_bakiye = g�ncel_bakiye - 150;
				printf("G�ncel bakiyeniz:%d\n", g�ncel_bakiye);
			}
			goto bas;
		}
		else if (se�im2 == 2) {
			kontrol = g�ncel_bakiye - 350;
			if (kontrol < 0) {
				printf("Yeteri kadar bakiyeniz bulunmamaktad�r.Tekrar deneyiniz.\n");
			}
			else {
				g�ncel_bakiye = g�ncel_bakiye - 350;
				printf("G�ncel bakiyeniz:%d\n", g�ncel_bakiye);
			}
			goto bas;
		}
		else if (se�im2 == 3) {
			kontrol = g�ncel_bakiye - 300;
			if (kontrol < 0) {
				printf("Yeteri kadar bakiyeniz bulunmamaktad�r.Tekrar deneyiniz.\n");
			}
			else {
				g�ncel_bakiye = g�ncel_bakiye - 300;
				printf("G�ncel bakiyeniz:%d\n", g�ncel_bakiye);
			}
			goto bas;
		}
		else if (se�im2 == 4) {
			goto bas;
		}
		else {
			printf("Ge�ersiz tu�lama yapt�n�z.Tekrar deneyiniz.\n");
			goto bas2;
		}

	}
	else if (se�im == 5) {
		printf("Bizi tercih etti�iniz i�in te�ekk�r ederiz...\n");
	}
	






	

	return 0;
}