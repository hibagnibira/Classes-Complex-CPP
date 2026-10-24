#include "Complex.h"
#include <iostream>
#include <cmath> 

using namespace std;


Complex::Complex(double re, double im) : re(re), img(im) {}


Complex::Complex(const Complex& c) {
    this->re = c.re;
    this->img = c.img;
}


Complex::~Complex() {}


void Complex::afficher() const {
    if (img >= 0)
        cout << this->re << " + i" << this->img << endl;
    else
        cout << this->re << " - i" << -this->img << endl;
}


Complex Complex::operator+(const Complex& c) const {
    return Complex(this->re + c.re, this->img + c.img);
}

Complex Complex::operator+(double a) const {
    return Complex(this->re + a, this->img);
}

Complex Complex::operator-(const Complex& c) const {
    return Complex(this->re - c.re, this->img - c.img);
}

Complex Complex::operator-(double a) const {
    return Complex(this->re - a, this->img);
}

Complex Complex::operator*(const Complex& c) const {
    double r = (this->re * c.re) - (this->img * c.img);
    double i = (this->re * c.img) + (this->img * c.re);
    return Complex(r, i);
}

Complex Complex::operator*(double a) const {
    return Complex(this->re * a, this->img * a);
}

Complex Complex::operator/(const Complex& c) const {
    double denom = (c.re * c.re) + (c.img * c.img);
    if (denom == 0) {
        cerr << "Erreur : Division par zéro !" << endl;
        return Complex(0, 0);
    }
    double r = ((this->re * c.re) + (this->img * c.img)) / denom;
    double i = ((this->img * c.re) - (this->re * c.img)) / denom;
    return Complex(r, i);
}

Complex Complex::operator/(double a) const {
    if (a == 0) {
        cerr << "Erreur : Division par zéro !" << endl;
        return Complex(0, 0);
    }
    return Complex(this->re / a, this->img / a);
}


Complex operator+(double a, const Complex& c) {
    return Complex(a + c.re, c.img);
}

Complex operator-(double a, const Complex& c) {
    return Complex(a - c.re, -c.img);
}

Complex operator*(double a, const Complex& c) {
    return Complex(a * c.re, a * c.img);
}

Complex operator/(double a, const Complex& c) {
    double denom = (c.re * c.re) + (c.img * c.img);
    if (denom == 0) {
        cerr << "Erreur : Division par zéro !" << endl;
        return Complex(0, 0);
    }
    return Complex((a * c.re) / denom, (-a * c.img) / denom);
}


bool Complex::operator==(const Complex& c) const {
    return (this->re == c.re) && (this->img == c.img);
}

bool Complex::operator!=(const Complex& c) const {
    return !(*this == c);
}

bool Complex::operator<(const Complex& c) const {
    double module1 = sqrt((this->re * this->re) + (this->img * this->img));
    double module2 = sqrt((c.re * c.re) + (c.img * c.img));
    return module1 < module2;
}

bool Complex::operator>(const Complex& c) const {
    double module1 = sqrt((this->re * this->re) + (this->img * this->img));
    double module2 = sqrt((c.re * c.re) + (c.img * c.img));
    return module1 > module2;
}