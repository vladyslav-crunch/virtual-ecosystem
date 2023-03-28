#include <iostream>
#include "organizm.h"
#include "ustawienia.h"
#include "generatorlosowy.h"
using namespace std;

void wyswietl(UstawieniaSymulaji & UST){
    cout << "Znak glon:" << UST.znakGlon
         << " zycieMin=" << UST.glonZycieMin
         << " zycieMax=" << UST.glonZycieMax << endl;
}
//void drukujOrganizm(const Organizm & o){
//    cout << "licznikZycia: "
//         << o.stanLicznikaZycia()
//         << " licznikPosilkow: "
//         << o.stanLicznikaPosilkow() << endl
//         << "limitPosilkow: "
//         << o.limitPosilkow
//         << " kosztPotomka: "
//         << o.kosztPotomka << endl
//         << "glodny: " << o.glodny()
//         << " paczkujacy: "
//         << o.paczkujacy() << endl << endl;
//}

int main()
{
    //1. Dotęp do obiektu klasy UstawienaSymulacji
//    UstawieniaSymulaji & UST1 = UstawieniaSymulaji::pobierzUstawienia();
//    UstawieniaSymulaji & UST2 = UstawieniaSymulaji::pobierzUstawienia();
//    UstawieniaSymulaji & UST3 = UstawieniaSymulaji::pobierzUstawienia();

//    cout << "Pobranie ustawien 3x" << endl;
//    cout << "UST1: "; wyswietl(UST1);
//    cout << "UST1: "; wyswietl(UST2);
//    cout << "UST1: "; wyswietl(UST3);

//    cout << endl << "Zmiana wartosci tylko 1x" << endl;
//    UST2.glonZycieMax = 100;
//    cout << "UST1: "; wyswietl(UST1);
//    cout << "UST2: "; wyswietl(UST1);
//    cout << "UST3: "; wyswietl(UST1);
//    //1. Test kreacji obiektów
//    Organizm organizm1(8,3,2);
//    Organizm organizm2 = organizm1;
//    Organizm organizm3(organizm1);

//    cout << "Wynik testu kreacji obiektow:"
//         << endl << endl;
//    cout << "Organizm1:" << endl;
//    drukujOrganizm(organizm1);
//    cout << "Organizm2" << endl;
//    drukujOrganizm(organizm2);
//    cout << "Organizm3" << endl;
//    drukujOrganizm(organizm3);

//    //2. Test niezależności obietów
//    organizm1.posilek();
//    organizm1.posilek();
//    organizm2.posilek();
//    organizm2.posilek();
//    organizm3.krokSymulacji();

//    cout << "Wynik testu niezaleznosci obiektow:"
//         << endl << endl;
//    cout << "Organizm1:" << endl;
//    drukujOrganizm(organizm1);
//    cout << "Organizm2" << endl;
//    drukujOrganizm(organizm2);
//    cout << "Organizm3" << endl;
//    drukujOrganizm(organizm3);

//    //3. Test symulacji
//    Organizm organizm4(8,3,2);
//    cout << "Wynik testu symulacji:"
//         << endl << endl;
//    cout << "Stan pocztkowy:" << endl;
//    drukujOrganizm(organizm4);

//    for(int i=1; i<11; i++){
//        organizm4.krokSymulacji();
//        if(organizm4.potomek()){
//            organizm4.potomek();
//            cout << "---> Potomek" << endl;
//        }else organizm4.posilek();

//     cout << "Po wykonaniu kroku symulacji: "
//          << i << endl;
//     drukujOrganizm(organizm4);


//    }



    cout << "Liczbe losowe typu int:" << endl;
    cout << " od 0 do 5: ";
    for (int i = 0; i < 10; i++) {
        cout << GEN::losujOdZeraDo(5) << " ";
    cout << endl << " od 0 do 3: ";
    for(int i=0; i<10; i++)
        cout << GEN::losujOdZeraDo(3);
    cout << endl << " od 0 do 20: ";
    for(int i=0; i<10; i++)
        cout << GEN::losujOdZeraDo(20);
    cout << endl << endl;

    cout << "Liczby losowe typu long: " << endl;
    cout << " od -2 do 2:";
    for(int i=0; i<10; i++)
        cout << GEN::losujPomiedzy(-2L,2L)<< " ";
    cout << endl<< endl;

    cout << "Liczby losowe typu short: " << endl;
    cout << " od -2 do 6:";
    unsigned short min =2, max =6;
    for(int i=0; i<10; i++)
        cout << GEN::losujPomiedzy(max,min)<< " ";
    cout << endl<< endl;
    }




    return 0;
}
