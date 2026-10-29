#include "liczba.h"

#include <cassert>
#include <cmath>
#include <iostream>

Complex::Complex(double re, double im) : re(re), im(im) {
  std::cout << "Konstruktor Complex: re = " << re << ", im = " << im << '\n';
}

Complex::~Complex() { std::cout << *this << '\n'; }

Complex Complex::operator+(Complex &rhs) {
  return Complex(rhs.re + re, rhs.im + im);
}

std::ostream &operator<<(std::ostream &out, const Complex &l) {
  out << "Liczba zespolona: (re: " << l.re << " im: " << l.im << ")\n";
  return out;
}

double Complex::modul() { return std::sqrt(re * re + im * im); }
void Complex::wypisz(std::ostream &out) { out << *this; }
