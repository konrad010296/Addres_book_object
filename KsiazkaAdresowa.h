#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_ADRESACI;

public:
    KsiazkaAdresowa(string nazwaPlikuUzytkownicy,string nazwaPlikuAdresaci) : uzytkownikMenedzer(nazwaPlikuUzytkownicy), NAZWA_PLIKU_ADRESACI(nazwaPlikuAdresaci)
    {
        adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    }
    int pobierzIdZalogowanegoUzytkownika();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void dodajAdresata();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyloguj();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
};

#endif
