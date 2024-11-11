#include <stdio.h>
#include <math.h>

typedef struct
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color;

Color getColor();// считать RGB-формат с консоли
unsigned long long convertToHTML(Color);// перевод из RGB-формата в число
Color convertToRGB(unsigned long long);// преобразование числа цвета в RGB-формат
void printRGB(Color);// печать цвета в RGB-формате (печать значений в десятичном виде через пробел)
// red green blue:
// 255 128 222
// Печатать только числа через пробел и \n в конце!!!
void printHTML(Color);// печать цвета в HTML-формате и \n в конце.
// Примеры: FFA902 0AA3FF

int main(){
    Color z, z2;
    unsigned long long html;

    z = getColor();
    printRGB(z);

    html = convertToHTML(z);
    printf("%llu\n", html);
    printHTML(z);

    z2 = convertToRGB(html);
    printRGB(z2);

    return 0;
}

Color getColor()
{
    Color a;
    scanf("%hhu %hhu %hhu", &a.red, &a.green, &a.blue);
    return a;
}
void printRGB(Color a)
{
    printf("%d %d %d\n", a.red, a.green, a.blue);
}
unsigned long long convertToHTML(Color a)
{
    return 256 * 256 * a.red + 256 * a.green + a.blue;
}
void printHTML(Color a)
{
    printf("%02X%X%X\n", a.red, a.green, a.blue);
}
Color convertToRGB(unsigned long long num)
{
    Color b;
    b.blue = num % 256;
    b.green = ((num - b.blue) / 256) % 256;
    b.red = num / 256 / 256 % 256;
    return b;
}
