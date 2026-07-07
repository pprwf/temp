#include <unistd.h>

void ft_print_comb2(void) {
    for (int f = 0; f <= 98; f++) {
        for (int l = f + 1; l <= 99; l++) {
            char mix[5] = {f / 10 + '0', f % 10 + '0', ' ', l / 10 + '0', l % 10 + '0'};
            write(1, mix, 5);
            if (!(f == 98 && l == 99)) { write(1, ", ", 2); }
        }
    }
}