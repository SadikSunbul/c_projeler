#include <stdio.h>
#include <string.h>

void right_rotate(char* str, int n) {
    int len = strlen(str);
    char* end = str + len - 1;  // Son karakterin adresini belirle

    // Son karakterden ba�layarak, n karakter sa�a do�ru kayd�r
    while (n--) {
        char temp = *end;
        for (char* p = end; p > str; p--) {
            *p = *(p-1);
        }
        *str = temp;
    }
}

int main() {
    char str[] = "Merhaba dunya";
    printf("Orijinal metin: %s\n", str);

    right_rotate(str, 4);

    printf("D�nd�r�lm�� metin: %s\n", str);

    return 0;
}

