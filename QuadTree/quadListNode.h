#include <stdlib.h>
#include <stdio.h>
#include "makeNodes.h"

#ifndef __QUADLISTNODES__H
#define __QUADLISTNODES__H

// struct for tree
struct leaf_struct
  {
    Node *treeNode;
    struct leaf_struct *nextLeaf;
  };

typedef struct leaf_struct LeafNode;

//create a new filled node by copying the parameter
LeafNode *createFilledNode(Node *leaf);

#endif
