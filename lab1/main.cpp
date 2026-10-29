#include "wartosc_liczbowa.h"

#include <iostream>
#include <memory>
#include <vector>

int main() {
  {
    std::vector<std::unique_ptr<WartoscLiczbowa>> vec;
    vec.push_back(std::make_unique<Liczba>(5));
    vec.push_back(std::make_unique<Liczba>(7));

    for (auto &wartosc_liczbowa : vec)
      std::cout << wartosc_liczbowa->modul() << '\n';
  }

  {
    auto a = Liczba(1);
    auto b = Liczba(2);
    std::cout << "Wynik dodawania '" << a << "' i '" << b << "' to: '" << a + b
              << "'\n";
  }

  {
    auto a = Complex(1, 2);
    auto b = Complex(3, 4);
    std::cout << "Wynik dodawania '" << a << "' i '" << b << "' to: '" << a + b
              << "'\n";
  }

  {
    Liczba *heap_liczba = new Liczba(1);
    Complex *heap_complex = new Complex(1, 2);

    WartoscLiczbowa *polimorfic_value = heap_liczba;
    polimorfic_value = heap_complex;

    delete heap_complex;
    delete heap_liczba;

    Liczba stack_liczba(1);
    Complex stack_complex(1, 2);

    polimorfic_value = &stack_liczba;
    polimorfic_value = &stack_complex;
  }
}
