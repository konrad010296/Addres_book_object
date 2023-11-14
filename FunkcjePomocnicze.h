#ifndef FUNKCJEPOMOCNICZE_H
#define FUNKCJEPOMOCNICZE_H
#include <iostream>
#include <algorithm>
#include <sstream>
#include <fstream>
using namespace std;

class FunkcjePomocnicze
{

public:
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static char wczytajZnak();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static int konwersjaStringNaInt(string liczba);
    static bool czyPlikJestPusty(fstream &plikTekstowy);
    static int wczytajLiczbeCalkowita();
};

#endif
