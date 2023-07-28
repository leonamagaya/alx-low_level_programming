#include "shell.h"

char *_strcpy(char *dest, char *src) {
    int len = 0;
    while (*(src + len) != '\0') {
        *(dest + len) = *(src + len);
        len++;
    }
    *(dest + len) = '\0';
    return dest;
}

char *_strcat(char *dest, char *src) {
    int i = 0, j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int _strlen(char *s) {
    int length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

int _strncmp(const char* string1, const char* string2, size_t n) {
    int result = 0;
    if (n == 0)
        return 0;
    while (n > 1 && *string1 && (*string1 == *string2)) {
        string1++;
        string2++;
        n--;
    }
    result = *string1 - *string2;
    return result;
}
