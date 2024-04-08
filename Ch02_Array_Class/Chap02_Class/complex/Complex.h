#pragma once

#include <cstdio>

class Complex
{
    double real;
    double imag;

public:
    void set(double r, double i)
    {
        real = r;
        imag = i;
    }

    void read(const char *msg)
    {
        printf(" %s ", msg);
        scanf("%1f", &real);

        printf("%s", msg);
        scanf("%1f", &imag);
    }

    void print(const char *msg)
    {
        printf("%s= %4.2f + %4.2fi\n", msg, real, imag);
    }

    void add(Complex a, Complex b)
    {
        real = a.real + b.real;
        imag = a.imag + b.imag;
    }
};