#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Gaat controleren of een getal even of oneven is
void evenOdd() {
    int a = 0;

    printf("Geef een getal: \n");
    scanf("%d", &a);

    if(a % 2 == 0) {
        printf("Het getal is even.\n");
    } else {
        printf("Het getal is oneven.\n");
    }
}

//Gaat de GGD berekenen
void ggd() {
    int a, b = 0;

    printf("Geef 2 getallen (1 2): \n");
    scanf("%d %d", &a, &b);

    while(a != b) {
        if(a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    printf("De GGD is: %d\n", a);
}

//Gaat controleren welke delers van a kleiner zijn dan b
void smallerThen() {
    int a, b = 0;

    printf("Geef 2 getallen (1 2): \n");
    scanf("%d %d", &a, &b);
    printf("De delers van %d die kleiner zijn dan %d zijn: \n", a, b);

    for (int i = 1; i <= a; i++) {
        if(a % i == 0 && i < b) {
            printf("%d \n", i);
        }
    }
    printf("\n");
}

//Gaat de wortel, het logaritme en de sinus van een getal bepalen
void math() {
    int a = 0;

    printf("Geef een getal: \n");
    scanf("%d", &a);
    double wortel = sqrt(a);
    double logaritme = log10(a);
    double sinus = sin(a);
    printf("De wortel van %d is %f. \t De log van %d is %f. \t De sinus van %d is %f \n", a, wortel, a, logaritme, a, sinus);
}

int main() {
    char c = '\0';
    printf("Kies een optie ...\n");
    printf("\t e: even/oneven \n");
    printf("\t g: GGD \n");
    printf("\t k: Kleiner dan\n");
    printf("\t w: Wiskundige berekeningen\n");
    printf("\t q: Quit \n");
    scanf("%c", &c);
    system("clear"); //terminal leegmaken

    switch(c) {
        case 'e':
            evenOdd();
            break;
        case 'g':
            ggd();
            break;
        case 'k':
            smallerThen();
            break;
        case 'w':
            math();
        case 'q':
            break;
    }
    return 0;
}