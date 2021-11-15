#include <stdio.h>
#include "akinator.h"

int main()
{
    char file[100] = "base.txt";
    struct tree tree;
    treeCtor(&tree, file);
    treeDtor(&tree);
    
    return 0;
}
