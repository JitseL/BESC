#include <stdio.h>
#include <ctype.h>

int main() {
    char karakters = '\0';
    int letters = 0;
    int woorden = 1;

    printf("Typ een zin: \n");
    while((karakters = getchar()) != '\n' && karakters != EOF) {
        letters++;

        if(karakters == ' ') {
            letters--; //spaties niet meetellen
            woorden++;
        } else {
            woorden = woorden;
        }
    }

    printf("Het aantal woorden: '%d'\n", woorden);
    printf("Het aantal letters: '%d'\n", letters);
    return 0;
}