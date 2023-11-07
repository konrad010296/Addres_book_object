#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include "FunkcjePomocnicze.h"
#include "Adresaci.h"
#include "windows.h"
#include "PlikZAdresatami.h"
#include <vector>

using namespace std;

class AdresatMenedzer
{
    PlikZAdresatami plikZAdresatami;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata();

public:
    AdresatMenedzer(string nazwaPlikuAdresaci,int idZalogowanego) :  plikZAdresatami(nazwaPlikuAdresaci), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanego)
    {
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
};

#endif
