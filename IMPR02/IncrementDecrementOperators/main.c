#include <stdio.h>
/*
 * Lav en skrivebordsudførelse af programmet, og forklar hvad der udskrives i de tre kald af printf. I en
 * skrivebordsudførelse gennemgås programmets enkelte trin manuelt - med papir og blyant eller ved en tavle -
 * uden først at køre programmet på en computer.
 *
 * Når du er færdig med skrivebordsudførelsen, anbefales at du sammenligner dine resultater med det
 * resultat du får ved at køre programmet på din computer.
 *
 * Vær sikker på at diskutere dine resultater med dine medstuderende i gruppen.
 *
 * Skrivebordsudførelse:
 * 1. Variablerne i, j og k har værdierne 3, 4 og 5.
 * 2. i og k variablerne incrementes med 1. j decrementer med 1.
 *    Værdierne er nu 4, 3 og 6
 * 3. Printf statement output: i: 4, j: 3, k: 6
 * 4. res1, res2 og res3 variabler forvandler værdierne tilbage til deres oprindelige værdi
 *    vha. increment og decrement.
 * 5. Den 2. printf statement output: res1: 3, res2: 4 og res3: 5
 * 6. Den 3. printf statement output: i: 4, j: 3 og k: 6
 *
 * Resultat:
 * i: 4, j: 3, k: 6
 * res1: 3, res2: 3, res3: 5
 * i: 3, j: 4, k: 5
 *
 * Min skrivebordudførelse var forkert i trin 5 og 6. Grunden til dette er at
 *
 * ++i vil increment værdien af i, og derefter returnere den incremented value som f.eks.:
 *  i = 1;
 *  j = ++i;
 *  (i is 2, j is 2)
 *
 * i++ vil increment værdien af i, men returnere den oprindelige værdi af i fra før
 * variablen blev incremented:
 *  i = 1;
 *  j = i++;
 *  (i is 2, j is 1;
 *  I et for loop vil postprefix køre loopet flere gange, da det skal bruge flere loops på at increment værdien korrekt.
 *
 *  source: @https://stackoverflow.com/questions/24853/what-is-the-difference-between-i-and-i
 */
int main() {
    int i = 3, j = 4, k = 5;
    int res1, res2, res3;

    i++; j--; ++k;

    printf("i: %d, j: %d, k: %d\n", i,j,k);

    res1 = --i;
    res2 = j++;
    res3 = --k;

    printf("res1: %d, res2: %d, res3: %d\n", res1, res2, res3);
    printf("i: %d, j: %d, k: %d\n", i,j,k);

    return 0;
}