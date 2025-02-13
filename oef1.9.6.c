#include <stdio.h>

//interpoleren voor x
float interpolatiex(int p0x, int p1x, float f) {
    float px = p0x + f * (p1x - p0x);
    return px;
}

//interpoleren voor y
float interpolatiey(int p0y, int p1y, float f) {
    float py = p0y + f * (p1y - p0y);
    return py;
}

int main() {
    int p0x, p0y, p1x, p1y;
    float f;

    printf("Geef het eerste punt (x y): ");
    scanf("%d %d", &p0x, &p0y);
    
    printf("Geef het tweede punt (x y): ");
    scanf("%d %d", &p1x, &p1y);

    printf("Geef de interpolatiefactor (0-1): ");
    scanf("%f", &f);

    float px = interpolatiex(p0x, p1x, f);
    float py = interpolatiey(p0y, p1y, f);

    printf("Het coordinaat van het punt is: ('%0.1f' '%0.1f')\n", px, py);
}