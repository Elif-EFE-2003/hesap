#pragma once 
#include <iostream>
#ifndef HESAP_H
#define HESAP_H
using namespace std;
class hesap
{
	private:
		string isim;
		int hesapno;
		float bakiye;
		
	public:
		hesap(string isim_,int hesapno_,float bakiye_);
	    void hesabaParaYatir(float paraMiktari);
		void hesaptanParaCek(float paraMiktari);
		void hesapDetayGoruntule();	

};

#endif
