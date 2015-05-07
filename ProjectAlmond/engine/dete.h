#ifndef DETE_H
#define DETE_H
#include <string>
#include <QDate>

#include "engine/brak.h"
#include "engine/osoba.h"
class Brak;
class Osoba;

class Dete
{
public:
    Dete(Osoba* osoba, Brak* roditeljskaVeza, std::string trivija="",QDate* datumUsvajanja=nullptr);
    ~Dete();

    short int Sifra();
    Osoba* Potomak();
    Brak* RoditeljskiOdnos();
    std::string& Trivija();
    QDate& DatumUsvajanja();


    bool BrisanjeOdOsobe(); // destruktor od Osobe je pozvan, pa dete mora obavestiti i brak, jer ce i ono biti uskoro uklonjeno
    bool RaskiniSveVeze(); // brise podatke o svim vezama, priprema za brisanje na vecoj skali

private:
    static short int _sledecaSifra;
    short int _sifra;
    Osoba* _osoba;
    Brak * _roditeljskiOdnos;
    std::string _trivija;
    QDate _datumUsvajanja;
};

#endif // DETE_H