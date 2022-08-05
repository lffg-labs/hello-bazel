#include <stdio.h>

#include "lib/math/add.h"
#include "lib/math/sub.h"

int main() {
    printf("1 + 2 = %d\n", add(1, 2));
    printf("2 - 1 = %d\n", sub(2, 1));
    return 0;
}
