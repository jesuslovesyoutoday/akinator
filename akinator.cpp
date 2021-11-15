#include "akinator.h"
#include <cstdlib>
#include <sys/stat.h>

void treeCtor(struct tree* tree, char* base_file)
{
    tree->ptr           = (struct treeElement*)calloc(1, sizeof(treeElement));
    tree->ptr->data     = NULL;
    tree->ptr->left     = NULL;
    tree->ptr->right    = NULL;
    tree->buffer        = NULL;
    
    struct stat file_inf;
    stat(base_file, &file_inf);
    int file_size = file_inf.st_size;
    if (file_size != 0)
    {
	}
	else
	{
		
	}
}

void treeClear(struct treeElement* ptr)
{
	while (ptr->left != NULL && ptr->right != NULL)
	{
		treeClear(ptr->left);
		treeClear(ptr->right);
	}
	free(ptr);
}

void treeDtor(struct tree* tree)
{
	treeClear(tree->ptr);
	free(tree->buffer);
}
