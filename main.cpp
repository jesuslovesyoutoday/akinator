#include <stdio.h>
#include "akinator.h"

int main()
{
    char file[100] = "base.txt";
    struct tree tree;
    treeCtor(&tree, file);
    
    puts("=============================================");
    puts("            Welcome to akinator!");
    puts("=============================================\n");
    
    puts("                        *                    ");
    puts("                       /\\                    ");
    puts("                  /\\__/__\\_/\\                ");
    puts("                 / ===   === \\               ");
    puts("                |  (#) _ (#)  |              ");
    puts("                |     / \\     |              ");
    puts("                 \\           /               ");
    puts("                  \\__      _/                ");
    puts("                    /     /                  ");
    puts("                   |   __/                   ");
    puts("                    | /                      ");
    puts("                     |\\                      ");
    puts("                     |/                      ");
    puts("                   __|__                     ");
    puts("                   \\_ _/                     ");
    puts("                    |#|                      ");
    puts("                   |###|                     ");
    puts("                  |#####|                    ");
    puts("                  |#####|                    ");
    puts("                   -----                     ");
    
    puts("                Choose mode:\n");
    puts("  guessing | defining | comparing | show_base\n");   
    
    treeDtor(&tree);
    
    return 0;
}
