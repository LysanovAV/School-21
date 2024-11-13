#include <stdio.h>

int main() {
    FILE * fin = fopen("pong.c", "r");
    char temp;
    while ((temp = fgetc(fin)) != EOF)
    {
        printf("%c", temp);
    }
    fclose(fin);
    return 0;
}