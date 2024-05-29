#include <stdio.h>
#include <locale.h>

int main(void)
{
    char *locale = setlocale(LC_ALL, "");
    short age = 22;
    char name[] ="Alsu";

    printf("мое имя - %-20s. \n", name);
    printf("мое имя - %20s. \n", name);
    return 0;
}