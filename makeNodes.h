#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//defining the max level variable = 9
#define MAX_LEVEL 9
#ifndef __QUADNODES__H
#define __QUADNODES__H

struct qnode
{ //node data
  int level;
  double xy[2];
  struct qnode *child [4];
};

typedef struct qnode Node;

Node *makeNode (double x, double y, int level);

void makeChildren (Node *parent); //make children function
void destroyNode (Node *node); //destroy nodes function
void growTree (Node *node); //grow the tree function

#endif
