#include <unistd.h>

void       ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

/*Напишите функцию, которая меняет содержимое двух целых чисел, адреса которых 
передаются в качестве параметров.
Ваша функция должна быть объявлена ​​следующим образом:
void	ft_swap(int *a, int *b);*/