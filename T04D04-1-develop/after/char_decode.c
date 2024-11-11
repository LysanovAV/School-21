#include <stdio.h>
void code();
void decode();

int main()
{
    int a;
    
    scanf("%d ", &a);
    
    switch(a) {
        case 0: code();    
        break;
        
        case 1: decode();
        break;
    }
    return 0;
}

void code() {
    char a = 'a', str[100];
    int i = 0;
    while (a != '\n'){
        if (scanf("%c", &a) == '\0') {
            break;
        }
        if (i % 2 != 0 && a != 32 && a != '\n') {
            printf("n/a");
            break;
        }
        str[i] = a;
        i++;
    }
    for(int j = 0; j < i - 1; j++) {
        if (str[j] == 32) {
             printf(" ");
        }
        else {
        printf("%x", str[j]);
        }
}
}

void decode() {
    // не придумал проверку на ввод без пробелов для 16 ричных чисел
    int a = 'a', str[100];
    int i = 0;
    while (scanf("%x", &a) != '\n'){

        str[i] = a;
        i++;
        if (getchar() == '\n') break;

        }

    for(int j = 0; j <= i + 1; j++) {
        if (j == 0) {
             printf("%c", str[j]);
        }
        else {
        printf(" %c", str[j]);
        }
}

}