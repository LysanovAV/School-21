#include "work_with_file.h"

#include <string.h>

#include "log_levels.h"
#include "logger.h"

int read_file(file, char *path) {
    int temp = 1;
    scanf("%255s", path);  // Считываем имя файла, ограничиваем длину 255 символов + нуль-терминатор
    file = fopen(path, "r");  // Открываем файл для чтения
    if (file == NULL) {
        temp = 0;
    } else {
        char ch;
        int empty = 1;
        while ((ch = fgetc(file)) != EOF) {  // Читаем файл посимвольно до конца файла
            putchar(ch);                     // Выводим каждый символ
            empty = 0;
        }
        if (empty) {
            temp = 0;
        } else
            printf("\n");
        fclose(file);  // Закрываем файл
    }
    return temp;
}

// int write_in_file(FILE *file, char *path) { return rtn; }
