#include <stdio.h>

int main() {

    /*
     * Variablen müssen deklariert werden!
     * Der Computer reserviert hierbei je nach Variable genug Speicher
     * z.B. : 32bit für int | 8bit für char
     * */
    char zeichen = 'A';
    printf("Zeichen: %c\n", zeichen);

    short ganzZahl = 2; //−32.768 - 32.767
    int ganzZahl2 = 3; // −2.147.483.648 - 2.147.483.647
    long ganzZahl3 = 4;

    printf("Zahl: %d\n", ganzZahl);

    float kommazahl1 = 0.000001f;
    double kommazahl2 = 0.000000000000002;
    long double kommazahl3 = 0.3l;

    printf("Kommazahl: %f\n", kommazahl1);


    //Strings
    char satz[] = "Hello, Silke!\n";

    printf("%s", satz);
    return 0;
}

