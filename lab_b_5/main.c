#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "split.h"
#define true 1
#define false 0

int main() {
    char line[80];
    while (!feof(stdin)) {
        fgets(line, 80, stdin);
        char *pch = strtok(line, " ");
        while (pch) {
            printf("%s\n", pch);
            pch = strtok(NULL, " ");
        }
//        printf("%s", line);
    }
    return 0;
}
