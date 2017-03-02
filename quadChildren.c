#include "makeNodes.h"

void makeChildren (Node *parent) //splitting it into 4 children
{ //parent data
  double x = parent->xy[0];
  double y = parent->xy[1];
  int level = parent->level;
  double hChild = pow(2.0,-(level+1));
  //task 1
  if (level +1 <= MAX_LEVEL) //if max level has not been reached create children at a higher level
  {
    parent->child[0] = makeNode( x,y, level+1);
    parent->child[1] = makeNode( x+hChild,y, level+1);
    parent->child[2] = makeNode( x+hChild,y+hChild, level+1);
    parent->child[3] = makeNode( x,y+hChild, level+1);
    printf("Children successfully created \n");
  }
  else //print error message if max level was reached
  {
    printf("Children can not be created as the Max Level has been reached");
  }
  return;
}
