#include <iostream>
#include "organizm.h"
#include "ustawienia.h"
#include "generatorlosowy.h"
#include "nisza.h"
#include "osobniki.h"
#include "sasiedztwo.h"

static Nisza n1,n2,n3;

using namespace std;


string nazwaRodzaju(RodzajMieszkanca rodzaj){
    switch(rodzaj){
        case GLON: return "GLON";
        case GRZYB: return "GRZYB";
        case BAKTERIA: return "BAKTERIA";
        case PUSTKA: return "PUSTKA";
        case SCIANA: return "SCIANA";
        case TRUP: return "TRUP";
        case NIEZNANE: return "NIEZNANE";
    }
}


int main()
{
    Nisza nisza;
    nisza.przyjmijLokatora(new Bakteria());

    cout << "Kto w niszy: "
         << nisza.ktoTuMieszka() << endl;
    cout << "Czy zywy: "
         <<nisza.lokatorZywy() << endl;

    Sasiedztwo sasiedztwo;
    sasiedztwo.okreslSasiada(P, GLON);
    sasiedztwo.okreslSasiada(PG, GRZYB);
    sasiedztwo.okreslSasiada(G, GRZYB);
    sasiedztwo.okreslSasiada(LG, GLON);
    sasiedztwo.okreslSasiada(L, BAKTERIA);
    sasiedztwo.okreslSasiada(LD, BAKTERIA);
    sasiedztwo.okreslSasiada(D, GLON);
    sasiedztwo.okreslSasiada(PD, PUSTKA);

    ZamiarMieszkanca zamiar = nisza.aktywujLokatora(sasiedztwo);

    cout << "Akcja: " << zamiar.akcja << " gdzie: " << zamiar.gdzie << endl;
    return 0;
}
