#include "lib.h"

int nprimo(int a, int b) {
    int risultato = 1, n = 0;

    if (b > 1 && a > 1) {

        risultato = nprimo(a - 1, b);

        n = b % a;

        if (n == 0) {
            return 0;
        }

    }
    return risultato;
}
