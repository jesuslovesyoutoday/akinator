#ifndef AKINATOR_H
#define AKINATOR_H

struct treeElement {
    char* data;               //< pointer to string with the data
    struct treeElement* left;  //< pointer to element if answ == YES
    struct treeElement* right; //< pointer to element if answ == NO
    int newElement;           //< indicates if element was added in
                              //< this session
};

struct tree {
    struct treeElement* ptr;  //< pointer to the first element
    char* buffer;             //< pointer to the buffer with database
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
//! Destructor of tree
//!
//! @param[out] tree     - pointer to the tree
//!
//---------------------------------------------------

void treeDtor(struct tree* tree);

//---------------------------------------------------
//!
//! Frees all nodes in the tree
//!
//! @param[out] ptr    - pointer to the first element
//!
//---------------------------------------------------

void treeClear(struct treeElement* ptr);

#endif // AKINATOR_H
