#include <stdio.h>
#include <string.h>

void right_rotate(char* str, int n) {
    int len = strlen(str);
    char* end = str + len - 1;  // Son karakterin adresini belirle

    // Son karakterden baþlayarak, n karakter saða doðru kaydýr
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

    printf("Döndürülmüþ metin: %s\n", str);

    return 0;
}

