#include "main.h"
#include <math.h>

int is_prime_number(int n) {
    if (n <= 1) {
        return 0;
    } else if (n <= 3) {
        return 1;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }

    int i;
    for (i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}
