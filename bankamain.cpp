#include <iostream>
#include "hesap.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	hesap hesap1=hesap("Ali Kayhan",17123,250.75);
	hesap hesap2=hesap("Berna Ozan",174153,0);
	hesap1.hesabaParaYatir(200);
	try{
		hesap1.hesaptanParaCek(100);
	}
	catch(std::exception e){
		cout<<e.what();
	}
	hesap1.hesapDetayGoruntule();
	
	hesap2.hesapDetayGoruntule();
	try{
		hesap2.hesaptanParaCek(100);
	}
	catch(std::exception e){
		cout<<e.what();
	}
	hesap2.hesapDetayGoruntule();
	return 0;
}
