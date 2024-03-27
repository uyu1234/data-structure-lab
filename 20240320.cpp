#include <cstdio>

int main(void)
{
    int Vpp;
    double Vbb = 8.0;
    double Vb = Vbb - 0.7;
    double Ib = Vb / (100000);
    double Ic = 150 * Ib;
    double Ie = Ib + Ic;
    double Vc = 10 - (Ie * 1200);

    printf("Ib=%10f\n", Ib);
    printf("Ic=%10f\n", Ic);
    printf("Vc=%10f\n", Vc);
}