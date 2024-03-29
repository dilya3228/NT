#include <unistd.h>

char    *ft_strcpy(cgar *s1, char *s2)
{
    int a = 0;

    while(s2[a])
    {
        s2[a] = s1[a]
        a++;
    }
    s1[a] = '\0';
    return(s1);
}

/*Воспроизведите поведение функции strcpy (man strcpy).
Ваша функция должна быть объявлена ​​следующим образом:
char    *ft_strcpy(char *s1, char *s2);
Сама функция `ft_strcpy` копирует данные из строки, на которую указывает 
аргумент `s2`, в строку, на которую указывает аргумент `s1`, пока не 
встретится символ конца строки (нулевой символ). Копирование производится 
вместе с символом конца строки.
Так же функция после копирования возвращает указатель на ту строку, 
в которую были скопированы данные.
Если строки перекрываются, результат копирования будет не определен.*/