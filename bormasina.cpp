#include "scula.h"
#include "bormasina.h"

bormasina::bormasina()
{
    this->capacitate = 0;
    this->turatie = 0;
    this->acumulator = "Lipsa";
    count++;
    creeare_scula();
}
bormasina::bormasina(std::string const& denumire, std::string const& marca, culoare_t const& culoare_p,
                     culoare_t const& culoare_s, int const& stock, double const& pret, double const& capacitate,
                     int const& turatie, std::string const& acumulator) :
                     scula(denumire, marca, culoare_p, culoare_s, stock, pret),
                     capacitate(capacitate),
                     turatie(turatie),
                     acumulator(acumulator)
                     {
                         count++;
                         creeare_scula();
                     }



bormasina::~bormasina()
{
    count--;
    destructor_scula();
    ///std::cout << "destr bormasina";
}