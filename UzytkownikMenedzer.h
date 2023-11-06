#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H
#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include "Uzytkownik.h"
#include "FunkcjePomocnicze.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;

public:
    UzytkownikMenedzer(string nazwaPlikuUzytkownicy) : plikZUzytkownikami(nazwaPlikuUzytkownicy) {};
    ~UzytkownikMenedzer() {};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyloguj();
};
#endif
