#include <stdio.h>
#include <string.h>
#define SIZE 255

int read_file(const char* path);
int appendToFile(const char* path);

int main() {
    int menu;
    char temp;
    int exit = 1;

    if (scanf("%d%c", &menu, &temp) != 2 || ((temp != ' ') && (temp != '\n'))) {
        printf("n/a");
    } else {
        while (menu != -1) {
            switch (menu) {
                case 1:
                    char filename[SIZE + 1];  // Массив для хранения имени файла
                    scanf(
                        "%255s",
                        filename);  // Считываем имя файла, ограничиваем длину 255 символов + нуль-терминатор
                    read_file(filename);
                    break;

                case 2:
                    exit = (appendToFile(filename));
                    read_file(filename);
                    if (exit == 1) {
                        printf("n/a");
                    }
                    break;

                default:

                    break;
            }
            if (scanf("%d%c", &menu, &temp) != 2 || ((temp != ' ') && (temp != '\n'))) {
                printf("n/a\n");
                break;
            }
        }
    }
    return 0;
}

int read_file(const char* path) {
    FILE* file = fopen(path, "r");  // Открываем файл для чтения
    if (file == NULL) {
        printf("n/a\n");
        return 1;
    } else {
        char ch;
        int empty = 1;
        while ((ch = fgetc(file)) != EOF) {  // Читаем файл посимвольно до конца файла
            putchar(ch);                     // Выводим каждый символ
            empty = 0;
        }
        if (empty) {
            printf("n/a\n");
        } else
            printf("\n");
        fclose(file);  // Закрываем файл
    }
    return 0;
}

int appendToFile(const char* path) {
    FILE* file = fopen(path, "r");  // Открываем файл для чтения
    if (file == NULL) {
        return 0;
        fclose(file);  // Закрываем файл
    }

    else {
        char line[SIZE];
        fgets(line, SIZE, stdin);
        line[strcspn(line, "\n")] = 0;  // Убираем символ новой строки
        FILE* file = fopen(path, "a");  // Открываем файл на добавление
        if (file == NULL) {
            printf("n/a\n");
        }

        fprintf(file, "\n%s", line);  // Добавляем текст в файл
        fclose(file);
    }
    return 0;
}