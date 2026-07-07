#include <unistd.h>

void ft_print_comb(void) {
    for (char c1 = '0'; c1 <= '7'; c1++) {
        for (char c2 = '1'; c2 <= '8'; c2++) {
            for (char c3 = '2'; c3 <= '9'; c3++) {
                char str[3] = {c1, c2, c3};
                write(1, str, 3);
                if (c1 != '7' && c2 != '8' && c3 != '9') {
                    write(1, ", ", 2);
                }
            }
        }
    }
}