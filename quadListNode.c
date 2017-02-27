#include "quadListNode.h"



LeafNode *createFilledNode(Node *leaf)
  {
    //create the filled node
    LeafNode *newNode = (LeafNode *) malloc(sizeof(LeafNode)); //allocate storage
    newNode->treeNode = leaf;
    newNode->nextLeaf = NULL; //pointer to the next node =NULL
    return newNode;
  }
