#include "makeNodes.h"

//making the nodes function
Node *makeNode (double x, double y, int level)
{
  int i;
  Node *node = (Node *)malloc(sizeof(Node)); //allocate the data structure
//node data
  node->level = level;
  node->xy[0] = x;
  node->xy[1] = y;
  for(i=0; i<4; ++i)
    node->child[i] = NULL; //set children to NULL
  return node;
}

void growTree (Node *node)
{
  int i;
  if(node->child[0] == NULL) //if node has no children create children
  {
    makeChildren(node);
  }
  else
  {
    for (i=0; i<4; ++i) //for all 4 child nodes
    {
      growTree(node->child[i]); //pass the child nodes to the current node
    }
  }
  return;
}
