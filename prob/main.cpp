#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>



void menu()
{
    printf("Здравствуйте.\n");
    printf("1. Получить справку о программе\n");
    printf("2. Получить псевдослучайную последовательность чисел\n");
    printf("3. Выйти\n");
 
    printf(">");
}
void spravka()
{
    printf("Программа генерирует псевдослучайную\n последовательность чисел\n в конфигурации Фибоначи\n");
    system("pause");
}
void gen(){
    
}

int get_variant(int count) {
    int variant;
    char s[100]; // строка для считывания введённых данных
    scanf("%s", s); // считываем строку

    // проверка на корректность ввода
    while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
        printf("Не правильное значение. Повторите попытку: "); // сообщение об ошибке
        scanf("%s", s); // считываем строку повторно
    }

    return variant;
}

int main()
{
    int variant; // выбранный пункт меню

    

    do {
        menu(); 


        variant = get_variant(3); // получаем номер выбранного пункта меню

        switch (variant) {
        case 1:
            spravka();
            break;

        case 2:
            
            break;


        }

        if (variant != 3)
            system("pause"); // почему-то не работает ¯\_(ツ)_/¯
    } while (variant != 3);

    return 0;
}
