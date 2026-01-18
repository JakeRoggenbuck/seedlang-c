#include <stdio.h>

int main() {

    char buffer[256];

    for (;;) {

        char *s = fgets(buffer, sizeof(buffer), stdin);

        if (s == NULL) {
            return 0;
        }

        while (*s) {
            if (*s == 'z') {
                // Output source
            }
            s++;
        }
    }

    return 0;
}
