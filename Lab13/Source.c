
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int mn() {
    int sizeS = 40;
    int sizeN = 10;
    printf("Enter your name - ");

    char Name[10];
    char Snew[40] = "Hello";  // Приветствие
    char Snewprobel[40] = "";  // Для имени с пробелами

    // Считываем имя пользователя
    scanf("%9s", Name);

    // Формируем строку с именем с пробелами
    for (int i = 0; Name[i] != '\0'; i++) {
        // Копируем букву
        strncat(Snewprobel, &Name[i], 1);
        // Добавляем пробел после буквы
        strcat(Snewprobel, " ");
    }

    // Проверка, заканчивается ли строка на точку
    int length = strlen(Snewprobel);
    if (Snewprobel[length - 1] != '.') {
        // Добавляем точку, если её нет
        strcat(Snewprobel, ".");
    }
    else {
        // Удаляем последнюю точку, если она уже есть
        Snewprobel[length - 1] = '\0';
    }

    // Собираем полное приветствие
    strcat(Snew, ", ");  // Добавляем запятую и пробел к приветствию
    strcat(Snew, Snewprobel);  // Добавляем имя с пробелами

    // Приводим строку к верхнему регистру
    for (int i = 0; i < strlen(Snew); i++) {
        Snew[i] = toupper(Snew[i]);
    }

    // Выводим результат
    puts(Snew);

}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int sizeS = 40;
    int sizeN = 10;
    printf("Enter your name - ");

    char Name[10];
    char Snew[40] = "Hello";  // Приветствие
    char Snewprobel[40] = "";  // Для имени с пробелами

    // Считываем имя пользователя
    scanf("%9s", Name);

    // Формируем строку с именем с пробелами
    for (int i = 0; Name[i] != '\0'; i++) {
        // Копируем букву
        strncat(Snewprobel, &Name[i], 1);
        // Добавляем пробел после буквы
        strcat(Snewprobel, " ");
    }

    // Проверка, заканчивается ли строка на точку
    int length = strlen(Snewprobel);
    if (Snewprobel[length - 1] != '.') {
        // Добавляем точку, если её нет
        strcat(Snewprobel, ".");
    }
    else {
        // Удаляем последнюю точку, если она уже есть
        Snewprobel[length - 2] = '\0';
    }

    // Собираем полное приветствие
    strcat(Snew, ", ");  // Добавляем запятую и пробел к приветствию
    strcat(Snew, Snewprobel);  // Добавляем имя с пробелами

    // Приводим строку к верхнему регистру
    for (int i = 0; i < strlen(Snew); i++) {
        Snew[i] = toupper(Snew[i]);
    }

    // Выводим результат
    puts(Snew);

    return 0;
}