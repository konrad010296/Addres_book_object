#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <vector>
#include "Adresaci.h"
#include "fstream"
#include "FunkcjePomocnicze.h"
#include "Adresaci.h"
using namespace std;

class PlikZAdresatami
{
    string nazwaPlikuZAdresatami;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);


public:
    int pobierzIdOstatniegoAdresata();
    PlikZAdresatami()
    {
        nazwaPlikuZAdresatami = "Adresaci.txt";
    };
    ~PlikZAdresatami() {};
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyczyscVektor();
};
#endif
