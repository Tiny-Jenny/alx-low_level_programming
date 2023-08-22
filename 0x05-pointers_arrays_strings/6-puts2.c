#include "main.h"
void puts2(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (i % 2 == 0) {
            _putchar("%c", str[i]);
        }
        i++;
    }
    _putchar("\n");
}
