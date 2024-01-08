#include "hesap.h"

hesap::hesap(string isim_,int hesapno_,float bakiye_){
	hesap::bakiye=0;
	hesap::isim=isim_;
	hesap::hesapno=hesapno_;
	hesap::bakiye=bakiye_;
}
void hesap::hesabaParaYatir(float paraMiktari){
	hesap::bakiye=hesap::bakiye+paraMiktari;
}
void hesap::hesaptanParaCek(float paraMiktari){
	if(hesap::bakiye<paraMiktari){
		cout<<"Yetersiz bakiye mesajiniz!";
		throw std::exception("Exception mesajı:Yetersiz bakiye hatasi")
	}
	else{
		hesap::bakiye=hesap::bakiye-paraMiktari;
	}
}
void hesap::hesapDetayGoruntule(){
	cout<<"Hesap sahibi ismi: "<<hesap::isim<<endl;
	cout<<"Hesap no: "<<hesap::hesapno<<endl;
	cout<<"Hesap bakiyesi: "<<hesap::bakiye<<endl;
	cout<<endl;
}
