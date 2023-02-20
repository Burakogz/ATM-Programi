#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Turkish");

	int seçim,seçim2;
	int güncel_bakiye = 1000,miktar,kontrol;
	int ID=123456, Þifre=22,x,y,hata=0;
	a:
	printf("\n*********************************************************\n");
	printf("Kullanýcý adý:");
	scanf("%d", &x);
	printf("\nÞifre:");
	scanf("%d", &y);
	printf("*********************************************************\n");

	if (ID != x || Þifre != y) {
		
		hata++;
		if (hata == 3) {
			printf("Kartýnýz bloke edilmiþtir...\a");
			exit();
		}
		printf("Hatalu kullanýcý adý veya þifre tekrar deneyiniz.");
		goto a;
	}
	else {
		goto bas;
	}
	bas:
	printf("\n1-BAKÝYE GÖRÜNTÜLE\n2-PARA YATIR\n3-PARA ÇEK\n4-FATURA ÖDE\n5-KART ÝADE\nYapmak istediðiniz iþlemi seçiniz.");
	scanf("%d", &seçim);



	if (seçim == 1) {
		system("CLS");
		printf("Güncel bakiyeniz:%d\n", güncel_bakiye);
		goto bas;
	}
	else if(seçim == 2) {
		system("CLS");
		printf("Yatýrmak isteðiniz miktarý giriniz:\n");
		scanf("%d", &miktar);
		güncel_bakiye = güncel_bakiye + miktar;
		printf("Güncel bakiyeniz:%d\n", güncel_bakiye);
		goto bas;
	}
	else if (seçim == 3) {
		system("CLS");
		printf("Çekmek isteðiniz miktarý giriniz:\n");
		scanf("%d", &miktar);
		kontrol = güncel_bakiye - miktar;
		if (kontrol < 0) {
			printf("Yeteri kadar bakiyeniz bulunmamaktadýr.Tekrar deneyiniz.\n");
		}
		else{
			güncel_bakiye = güncel_bakiye - miktar;
			printf("Güncel bakiyeniz:%d\n", güncel_bakiye);
		}
		goto bas;

	}
	else if (seçim == 4) {
		system("CLS");
		bas2:
		printf("1-Ýnternet faturasý(150)\n2-Elektrik faturasý(350)\n3-Su faturasý(300)\n4-Geri\nÖdemek isteðiniz faturayý seçiniz:\n");
		scanf("%d",& seçim2);
		if (seçim2 == 1) {
			kontrol = güncel_bakiye - 150;
			if (kontrol < 0) {
				printf("Yeteri kadar bakiyeniz bulunmamaktadýr.Tekrar deneyiniz.\n");
			}
			else {
				güncel_bakiye = güncel_bakiye - 150;
				printf("Güncel bakiyeniz:%d\n", güncel_bakiye);
			}
			goto bas;
		}
		else if (seçim2 == 2) {
			kontrol = güncel_bakiye - 350;
			if (kontrol < 0) {
				printf("Yeteri kadar bakiyeniz bulunmamaktadýr.Tekrar deneyiniz.\n");
			}
			else {
				güncel_bakiye = güncel_bakiye - 350;
				printf("Güncel bakiyeniz:%d\n", güncel_bakiye);
			}
			goto bas;
		}
		else if (seçim2 == 3) {
			kontrol = güncel_bakiye - 300;
			if (kontrol < 0) {
				printf("Yeteri kadar bakiyeniz bulunmamaktadýr.Tekrar deneyiniz.\n");
			}
			else {
				güncel_bakiye = güncel_bakiye - 300;
				printf("Güncel bakiyeniz:%d\n", güncel_bakiye);
			}
			goto bas;
		}
		else if (seçim2 == 4) {
			goto bas;
		}
		else {
			printf("Geçersiz tuþlama yaptýnýz.Tekrar deneyiniz.\n");
			goto bas2;
		}

	}
	else if (seçim == 5) {
		printf("Bizi tercih ettiðiniz için teþekkür ederiz...\n");
	}
	






	

	return 0;
}