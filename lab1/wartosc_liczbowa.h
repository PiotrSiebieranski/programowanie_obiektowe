#pragma once

#ifndef LICZBA_H
#define LICZBA_H

#include <ostream>

class WartoscLiczbowa {
public:
  virtual double modul() = 0;
  virtual void wypisz(std::ostream &out) = 0;
  virtual ~WartoscLiczbowa() {}
};

class Liczba : public WartoscLiczbowa {
  double re;

public:
  Liczba operator+(Liczba &rhs);
  double modul();
  Liczba(double re);
  ~Liczba(void);
  friend std::ostream &operator<<(std::ostream &out, const Liczba &l);
  void wypisz(std::ostream &out);
};

class Complex : public WartoscLiczbowa {
protected:
  double re;
  double im;

public:
  ~Complex(void);
  Complex(double re = 0, double im = 0);
  Complex operator+(Complex &);
  friend std::ostream &operator<<(std::ostream &out, const Complex &l);
  double modul();
  void wypisz(std::ostream &out);
};

#endif // LICZBA_H
