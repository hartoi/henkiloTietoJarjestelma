#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "fi-FI");
					//     0      1        2  3  4
	string etunimi[5] = { "Jere","Joonius","","","" };
	string sukunimi[5] = { "Lahtinen","Vartiainen","","","" };
	char lisaa_tietoja; // kysytään jatketaanko potilaiden lisäämistä
	int talletettavaIndeksi = 0; // pitää kirjaa monesko asiakas on kyseessä
	while (true) {
		cout << "Anna etunimi:";
		cin >> etunimi[talletettavaIndeksi];//<-mieti tuota
		cout << "Anna sukunimi:";
		cin >> ... // <- mieti mitä tuohon tulee
		// Lisää sukunimen kysely ja tallettaminen
		for (int i = 0; i < 5; i++) { // käy läpi kaikki indeksit, eli koko etunimi listan
			cout << i << " Tiedot:" << etunimi[i] << " " << sukunimi << endl;
		}
		cout << "Haluatko syöttää uuden henkilön tiedot?(k/e)" << endl;
		cin >> lisaa_tietoja;
		if (lisaa_tietoja == 'k') {talletettavaIndeksi++; }
		else { break; } // poistutaan silmukasta
		if (talletettavaIndeksi == 5) { break; }

	}
	cout << "Ohjelma loppuu tähän" << endl;
}
/*
	string sukunimi[5] = { "Mallikas","Ihememaa","","","" };
	int vuosi[5] = { 7,12,0,0,0 };
	char sukupuoli[5] = { 'm','n','','','' };

			cout << "Anna sukunimi:";
		cin >> sukunimi[0];
		cout << "Anna syntymävuotesi:";
		cin >> vuosi[0];
		cout << "Oletko mies vai nainen (m/n):";
		cin >> sukupuoli[0];

		cout << "Annoit tiedot:" << etunimi[0] << " " << sukunimi[0] << ". Olet " << 2018 - vuosi[0] << " ja olet " << sukupuoli[0] << endl;

*/