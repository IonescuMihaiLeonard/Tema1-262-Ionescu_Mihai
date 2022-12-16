#include "polizor.h"

polizor::polizor()
{
    this->putere = 0;
    this->turatie = 0;
    count++;
}
polizor::polizor(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p,
                 culoare_t const& culoare_s, int const& stock, double const& pret, int const& putere, int const& turatie) :
                 scula(denumire, marca, culoare_p, culoare_s, stock, pret),
                 putere(putere),
                 turatie(turatie)
                 {
                     count++;
                 }


polizor::~polizor()
{
    count--;
    ///std::cout << "destr polizor";
}