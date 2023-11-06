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
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata();

public:
    AdresatMenedzer()
    {
        idZalogowanegoUzytkownika = 0;
    };
    ~AdresatMenedzer() {};
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void ustawIdZalogowanegoUzytkownika(int id);
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyczyscVektor();
};

#endif
