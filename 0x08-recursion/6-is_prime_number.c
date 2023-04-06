#include "main.h"
#include <math.h>

int is_prime_number(int n) {
    // Handle special cases
    if (n <= 1) {
        return 0;
    } else if (n <= 3) {
        return 1;
    }

    // Check if n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }

    // Check if n is divisible by any number up to its square root
    int i;
    for (i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }

    // If n is not divisible by any number up to its square root, it is prime
    return 1;
}
