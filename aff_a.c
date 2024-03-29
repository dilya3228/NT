#include <unistd.h>

int     main(int argc, char **argv)
{
    int i = 0;

    if(argc != 2)
    {
        write(1, "a", 1);
    }
    else
    {
        while(argv[1][i])
        {
            if(argv[1][i] == 'a')
            {
                write(1, "a", 1);
                break;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу, которая принимает строку и отображает в ней первый символ «а»,
за которым следует новая строка. Если в строке нет символов «а», программа просто 
записывает новую строку. Если количество параметров не равно 1, программа 
отображает «а», за которым следует новая строка.
Пример:
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$*/