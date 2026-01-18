#include <stdio.h>
#include <string.h>

int main() {

    char buffer[256];
    const char *self =
        "#include <stdio.h>\n#include <string.h>\n\nint main() {\n\n    char "
        "buffer[256];\n    const char *self = \"?\";\n\n    for (;;) {\n\n     "
        "   char *s = fgets(buffer, sizeof(buffer), stdin);\n\n        if (s "
        "== NULL) {\n            return 0;\n        }\n\n        while (*s) "
        "{\n            if (*s == 'z') {\n                int n = "
        "strlen(self);\n                for (int i = 0; i < n; i++) {\n        "
        "            if (self[i] == 63) {\n                        for (int j "
        "= 0; j < n; j++) {\n                            switch (self[j]) {\n  "
        "                          case '\\n':\n                               "
        " printf(\"\\\\n\");\n                                break;\n         "
        "                   case '\"':\n                                "
        "printf(\"\\\\\\\"\");\n                                break;\n       "
        "                     case '\\\\':\n                                "
        "printf(\"\\\\\\\\\");\n                                break;\n       "
        "                     default:\n                                "
        "printf(\"%c\", self[j]);\n                            }\n             "
        "           }\n                    } else {\n                        "
        "printf(\"%c\", self[i]);\n                    }\n                }\n  "
        "              printf(\"%s\", self);\n            }\n            "
        "s++;\n        }\n    }\n\n    return 0;\n}\n";

    for (;;) {

        char *s = fgets(buffer, sizeof(buffer), stdin);

        if (s == NULL) {
            return 0;
        }

        while (*s) {
            if (*s == 'z') {
                int n = strlen(self);
                for (int i = 0; i < n; i++) {
                    if (self[i] == 63) {
                        for (int j = 0; j < n; j++) {
                            switch (self[j]) {
                            case '\n':
                                printf("\\n");
                                break;
                            case '"':
                                printf("\\\"");
                                break;
                            case '\\':
                                printf("\\\\");
                                break;
                            default:
                                printf("%c", self[j]);
                            }
                        }
                    } else {
                        printf("%c", self[i]);
                    }
                }
                printf("%s", self);
            }
            s++;
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {

    char buffer[256];
    const char *self = "?";

    for (;;) {

        char *s = fgets(buffer, sizeof(buffer), stdin);

        if (s == NULL) {
            return 0;
        }

        while (*s) {
            if (*s == 'z') {
                int n = strlen(self);
                for (int i = 0; i < n; i++) {
                    if (self[i] == 63) {
                        for (int j = 0; j < n; j++) {
                            switch (self[j]) {
                            case '\n':
                                printf("\\n");
                                break;
                            case '"':
                                printf("\\\"");
                                break;
                            case '\\':
                                printf("\\\\");
                                break;
                            default:
                                printf("%c", self[j]);
                            }
                        }
                    } else {
                        printf("%c", self[i]);
                    }
                }
                printf("%s", self);
            }
            s++;
        }
    }

    return 0;
}
