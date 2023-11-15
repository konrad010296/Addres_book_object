#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H
#include <iostream>
#include <fstream>
using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;

public:
    PlikTekstowy(string nazwaPlikuUzytkownicy) : NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPlikuUzytkownicy) {};
    bool czyPlikJestPusty();
    string pobierzNazwePliku();
};
#endif
