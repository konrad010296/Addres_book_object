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
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuAdresaci,int idZalogowanego) :  plikZAdresatami(nazwaPlikuAdresaci), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanego)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyszukajAdresatowPoImieniu();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    void wyszukajAdresatowPoNazwisku();
    void edytujAdresata();
    void usunAdresata();

};

#endif
