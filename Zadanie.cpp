#include <iostream>
using namespace std;

class Pracownik
{
private:
int pesel;

public:
int id;
string imie, nazwisko, stanowisko;	

void UstawPersonalia(string pImie, string pNazwisko, int pPesel)
{
imie = pImie;
nazwisko = pNazwisko;
pesel = pPesel;
}

void ustawStanowisko(string *)
{

string *w = &stanowisko;


}
/* ****************************************************

** Autor: Maksymilian Janiec

** Metoda ma  ...............................

************************************************** */

void wyswietlDane()
{
cout<<"Id: "<<id<<", Imie: "<<imie<<", Nazwisko: "<<nazwisko<<", Stanowisko: "<<stanowisko<<", Pesel: "<<pesel<<endl;
}

void wyswietlPersonalia()
{
cout<<"Imie: "<<imie<<", Nazwisko: "<<nazwisko<<", Pesel: "<<pesel<<endl;
}

void wyswietlStanowisko()
{
cout<<" Stanowisko:  "<<stanowisko<<endl;
}


};


int main()
{

Pracownik pracownik;

string stanowisko="Kucharz";
string *wskaznik = &stanowisko;

pracownik.UstawPersonalia("Marek","Dowbor", 123456789);
pracownik.wyswietlPersonalia();
pracownik.ustawStanowisko(&stanowisko);
pracownik.wyswietlStanowisko();
pracownik.wyswietlDane();




return 0;
}
