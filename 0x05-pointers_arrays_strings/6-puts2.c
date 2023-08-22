#include "main.h"
void puts2(char *str) {
    int i = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            _putchar.c(str[i]);
        }
        i++;
    }
    _putchar.c("\n");
}
