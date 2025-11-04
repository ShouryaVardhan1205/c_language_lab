#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) {
    int i, len, temp;
    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}