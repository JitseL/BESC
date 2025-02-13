#include <stdio.h>
#include <math.h>

// n! berekenen
long factorial(int n) {
    long fact = 1;
    for(int i=1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Taylorreeks berekenen
double reeksontwikkeling(double x) {
    double som = 0.0;
    for(int n=0; n <= 10; n++) {
        som += pow(x, n) / factorial(n);
    }
    return som;
}

int main() {
    for(double x = 0.1; x <= 1.0; x += 0.1) {
        double uitkomst = reeksontwikkeling(x);
        double juiste = exp(x);
        printf("De uitkomst is: '%0.1f'\t", uitkomst);
        printf("De uitkomst zou moeten zijn: '%0.1f'\n", juiste);
    }
}
