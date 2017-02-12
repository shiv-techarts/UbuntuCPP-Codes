#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "9 - 9 + 8 { 68 }";

    const char* regex = " +-{}";

    printf("%s", strpbrk(str, regex));
    return 0;
}
