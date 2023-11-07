#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;

public:
    KsiazkaAdresowa(string nazwaPlikuUzytkownicy,string nazwaPlikuAdresaci) : uzytkownikMenedzer(nazwaPlikuUzytkownicy), adresatMenedzer(nazwaPlikuAdresaci)
    {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
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
};

#endif
