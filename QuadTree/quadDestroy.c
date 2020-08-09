#include "makeNodes.h"

void destroyNode (Node *node) //search for lead nodes so memory can be freed
{
  int i;
  if(node->child[0] == NULL) //if the node has no children destroy the node
  {
    free(node);
  }
  else
  {
    for (i=0; i<4; ++i)
    {
      destroyNode(node->child[i]);
    }
  }
  printf("Node has been destroyed");
  return;
}
