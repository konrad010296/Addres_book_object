#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{

    uzytkownikMenedzer.rejestracjaUzytkownika();

}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{

    uzytkownikMenedzer.logowanieUzytkownika();

    if(pobierzIdZalogowanegoUzytkownika() != 0)
    {
        adresatMenedzer.ustawIdZalogowanegoUzytkownika(pobierzIdZalogowanegoUzytkownika());
        adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    }
}
char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");

    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = FunkcjePomocnicze::wczytajZnak();

    return wybor;
}

char  KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = FunkcjePomocnicze::wczytajZnak();

    return wybor;
}


int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenedzer.dodajAdresata();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wyloguj()
{
    adresatMenedzer.ustawIdZalogowanegoUzytkownika(0);
    adresatMenedzer.wyczyscVektor();
    uzytkownikMenedzer.wyloguj();

}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}
