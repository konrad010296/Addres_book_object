#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <vector>
#include "Adresaci.h"
#include "fstream"
#include "FunkcjePomocnicze.h"
#include "Adresaci.h"
#include "PlikTekstowy.h"
using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void usunPlik(string NAZWA_PLIKU_Z_ADRESATAMI);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);


public:
    int pobierzIdOstatniegoAdresata();
    PlikZAdresatami(string nazwaPlikuAdresaci) : PlikTekstowy(nazwaPlikuAdresaci)
    {};
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int zapiszEdytowanegoAdresataDoPliku(Adresat adresat, string liniaZDanymiAdresata);
    int usunAdresataZPliku(int idAdresata);
};
#endif
