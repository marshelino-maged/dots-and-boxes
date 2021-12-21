#include <stdio.h>
#include <stdlib.h>
#include "colors.h"
#include "menu.h"


int main()
{
    system("color");
    int i;
    i = print_menu();
    print_menu2(i);
    scanf("%d",i);


    return 0;
}
