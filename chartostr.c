    #include <stdio.h>

    void charToString(char c, char *str) {
        str[0] = c;
        str[1] = '\0';
    }

    int main() {
        char c = 'A';
        char str[2];

        charToString(c, str);

        printf("The string is: %s\n", str);
        return 0;
    }
