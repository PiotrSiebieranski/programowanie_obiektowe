#include "liczba.h"

#include <cassert>
#include <iostream>

Liczba::Liczba(double re) : re(re) {
  std::cout << "Konstruktor Liczba: re = " << re << '\n';
}

Liczba Liczba::operator+(Liczba &rhs) { return Liczba(re + rhs.re); }
Liczba::~Liczba() { std::cout << *this << '\n'; }
void Liczba::wypisz(std::ostream &out) { out << *this; }

double Liczba::modul() {
  if (re < 0) return -re;
  return re;
}

std::ostream &operator<<(std::ostream &out, const Liczba &l) {
  out << "Liczba rzeczywista: " << l;
  return out;
}
