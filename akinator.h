#ifndef AKINATOR_H
#define AKINATOR_H

struct treeNode {
    char* data;               //< pointer to string with the data
    struct treeNode* left;    //< pointer to node if answ == YES
    struct treeNode* right;   //< pointer to node if answ == NO
    int newNode;              //< indicates if node was added in
                              //< this session
};

struct tree {
    struct treeNode* ptr;     //< pointer to the first node
    char* buffer;             //< pointer to the buffer with database
};

enum ANSWER {
	NO  = 0,
	YES = 0
};

//---------------------------------------------------
//!
//! Constructor of tree
//! 
//! @param[out] tree     - pointer to the tree
//! @param[in] base_file - name of file with database
//!
//---------------------------------------------------

void treeCtor(struct tree* tree, char* base_file);

//---------------------------------------------------
//!
//! Constructor of node in the tree
//!
//! @param[out] node - ptr to node
//! @param[in]  data - feature
//!
//--------------------------------------------------

struct treeNode* treeNodeCtor(struct tree* tree, struct treeNode** node, char* data);

//---------------------------------------------------
//!
//! Destructor of tree
//!
//! @param[out] tree     - pointer to the tree
//!
//---------------------------------------------------

void treeDtor(struct tree* tree);

//---------------------------------------------------
//!
//! Destructor of node
//!
//! @param[out] node - pointer to node
//!
//---------------------------------------------------

void treeNodeDtor(struct treeNode* node);

//---------------------------------------------------
//!
//! Frees all nodes in the tree
//!
//! @param[out] ptr    - pointer to the first element
//!
//---------------------------------------------------

void treeClear(struct treeNode* ptr);

//--------------------------------------------------
//!
//! Adds new node to the tree
//!
//! @param[out] ptr - ptr to current node
//! @param[in]  ans - answer that user gave in cur
//!                   node
//--------------------------------------------------

void treeAdd(struct tree* tree, struct treeNode* ptr, char* data, char* feature);

#endif // AKINATOR_H
