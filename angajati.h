#ifndef MAIN_CPP_ANGAJATI_H
#define MAIN_CPP_ANGAJATI_H


#include <iostream>
#include <vector>
#include "scule.h"
#include "masini.h"

class angajati
{
private:
    static int count;
    std::string nume;
    std::string prenume;
    long long cnp;
    std::string post;
    unsigned int salariu;
    unsigned int penalizari;
    masini masina;

public:
    angajati();
    explicit angajati(const class angajati* other);
    angajati(const angajati& other);

    ~angajati();

    friend std::ostream& operator<< (std::ostream& os, const angajati& other)
    {
        os << other.nume << "|" << other.prenume << "|" << other.cnp << "|" << other.post << "|" << other.salariu << "| -" << other.penalizari << '\n';
        os << other.masina;

        for(int i=0; i<= 100; i++)
            os << "-";

        os <<'\n';
        return os;
    }

    static int get_count()
    {
        return count;
    }

    void set_nume(std::string x)
    {
        this->nume = x;
    }
    void set_prenume(std::string x)
    {
        this->prenume = x;
    }
    void set_cnp(long long x)
    {
        this->cnp = x;
    }
    void set_post(std::string x)
    {
        this->post = x;
    }
    void set_salariu(unsigned int x)
    {
        this->nume = x;
    }
    void set_penalizari(unsigned int x)
    {
        this->penalizari = x;
    }

    angajati& operator= (const angajati& other)
    {
        this->nume = other.nume;
        this->prenume = other.prenume;
        this->cnp = other.cnp;
        this->post = other.post;
        this->salariu = other.salariu;
        this->penalizari = other.penalizari;
        this->masina = other.masina;
        return *this;
    }

};

#endif
