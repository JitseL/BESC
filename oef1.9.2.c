#include <stdio.h>
#include <ctype.h>

int main() {
    char current, prev = ' ';
    char maxChar = ' ';
    int currentCount = 0;
    int maxCount = 0;

    printf("Geef letters: ");
    
    while((current = getchar()) != EOF && !isspace(current)) {
        if(current == prev) {
            currentCount++;
        } else {
            currentCount = 1;
        }
        
        if(maxCount < currentCount) {
            maxCount = currentCount;
            maxChar = current;
        }
        prev = current;
    }
    if(maxChar != ' ') {
        printf("De letter '%c' kwam '%d' keer voor\n", maxChar, maxCount);
    } else {
        printf("Geen input ontvangen\n");
    }

}