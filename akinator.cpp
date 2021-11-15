#include "akinator.h"
#include <cstdlib>
#include <sys/stat.h>

void treeCtor(struct tree* tree, char* base_file)
{
	tree->ptr = NULL;
	char data[100] = "неизвестно кто"; 
    tree->ptr = treeNodeCtor(tree, &(tree->ptr), data);
    tree->buffer = NULL;
    
    struct stat file_inf;
    stat(base_file, &file_inf);
    int file_size = file_inf.st_size;
    if (file_size != 0)
    {
    	tree->buffer = (char*)calloc(file_size, sizeof(char));
	}
	else
	{
		
	}
}

struct treeNode* treeNodeCtor(struct tree* tree, struct treeNode** node, char* data)
{
	*node = (struct treeNode*)calloc(1, sizeof(struct treeNode));
	(*node)->right = NULL;
	(*node)->left  = NULL;
	(*node)->data  = data;
	if ((*node) != tree->ptr)
		(*node)->newNode = 1;
	return (*node);
}

void treeNodeDtor(struct treeNode* node)
{
	if (node->newNode == 1)
	{
		free(node->data);
	}
	free(node);
}

void treeClear(struct treeNode* ptr)
{
	while (ptr->left != NULL && ptr->right != NULL)
	{
		treeClear(ptr->left);
		treeClear(ptr->right);
	}
	treeNodeDtor(ptr);
}

void treeDtor(struct tree* tree)
{
	treeClear(tree->ptr);
	if (tree->buffer != NULL)
		free(tree->buffer);
}

void treeAdd(struct tree* tree, struct treeNode* ptr, char* data, char* feature)
{
	ptr->right = treeNodeCtor(tree, &(ptr->right), ptr->data);
	ptr->left  = treeNodeCtor(tree, &(ptr->left), data);
	ptr->data = feature;
}
