#include <iostream.h>
#include <conio.h>

main()
{
	int sifre, secim,tutar,telefon,kod;
	double iban;
	char onay;

	cout<<"************ ..... Bankasýna Hoþ Geldiniz    *************************";
	cout<<"Sifrenizi Giriniz: ";
	cin>>sifre;

	if (sifre == 0000) {
		cout<<"Sifre Dogrulandý.";
		cout<<"Lutfen yapmak istediginiz islemi seciniz: "<<endl<<endl;
		cout<<"Para yatýrmak icin 1 "<<endl<<"para cekmek icin 2 "<<endl<<"EFT ypamk icin 2"<<endl;
		cout<<"Tuslayýn : ";
		cin>>secim;
		cout<<endl;

		if (secim == 1) {
					cout<<"Para yatýrma islemine hos geldiniz."<<endl;
					cout<<"Lutfen paranizi düzgün bir sekilde yerlestiriniz."<<endl;
					cout<<"Yatýrýlan tutarý onaylýyor musunuz? E/H"<<endl;

					if (onay=="e") {
									 cout<<"Paraniz yatiriliyor..."<<endl;
									 cout<<"Kartinizi almayý unutmayin"<<endl;
					}

					else if (onay == "h") {
									cout<<"Ýslem iptal edildi."<<endl;
									cout<<"Kartiniz iade ediliyor."<<endl;
					}

					else {
									cout<<"Hatalý tuslama yaptiniz."<<endl<<"Lutfen buyuk harf kullanýn."<<endl;
					}
		}

		else if (secim == 2) {

			 }


	}



	else {
		cout<<"Sifre Dogrulanamadý.";
	}

	getch();
}
