#pragma once

class Complex
{
private: 
    double re; 
    double img; 

public: 
    
    Complex(double re = 0.0, double im = 0.0); 
    Complex(const Complex& c);
    ~Complex();

    void afficher() const;

   
    Complex operator+(const Complex& c) const;
    Complex operator+(double a) const;
    
    Complex operator-(const Complex& c) const;
    Complex operator-(double a) const;

    Complex operator*(const Complex& c) const;
    Complex operator*(double a) const;


    Complex operator/(const Complex& c) const;
    Complex operator/(double a) const;

    bool operator==(const Complex& c) const;
    bool operator!=(const Complex& c) const;
    bool operator<(const Complex& c) const;  
    bool operator>(const Complex& c) const;  

    
    friend Complex operator+(double a, const Complex& c);
    friend Complex operator-(double a, const Complex& c);
    friend Complex operator*(double a, const Complex& c);
    friend Complex operator/(double a, const Complex& c);
};