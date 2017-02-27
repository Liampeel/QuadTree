#include "printout.h"

//print out the tree
void printOut(FILE *fp, Node *node)
{
  //node data
  double x = node->xy[0];
  double y = node->xy[1];
  int level = node->level;
  double h = pow(2.0, -level);
//corner points for the tree
  fprintf(fp, " %g %g\n",x,y);
  fprintf(fp, " %g %g\n",x+h,y);
  fprintf(fp, " %g %g\n",x+h,y+h);
  fprintf(fp, " %g %g\n",x,y+h);
  fprintf(fp, " %g %g\n\n",x,y);

  return;
}
//open the quad.out file
void writeTree( Node *head)
{
  FILE *fp = fopen("quad.out","w");
  writeNode (fp,head);
  fclose(fp);
  return;

}
//recursively search for leaf
void writeNode (FILE *fp, Node *node)
{
  int i;
  if(node->child[0]==NULL)
  {
    printOut(fp, node);
  }
  else
  {
    for(i=0; i<4; ++i)
    {
      writeNode(fp, node->child[i]);
    }
  }
  return;
}

void writeTreeV2 (NodeList *nodeList)
{
  FILE *fp = fopen("quad.out","w");
  LeafNode *walkNode=nodeList->topNode; //node for walking through the list
  for(; walkNode!=NULL ;walkNode=walkNode->nextLeaf) //print every node then move to the next one
  {
    printOutV2(fp, walkNode); //printing the individual nodes
  }
  fclose(fp);
  return;
}

void printOutV2 (FILE *fp, LeafNode *listNode)
{
  //node data
  double x = listNode->treeNode->xy[0];
  double y = listNode->treeNode->xy[1];
  int level = listNode->treeNode->level;
  double h = pow(2.0,-level);

//printing the corner points for the tree
  fprintf(fp, "%g %g\n",x,y);
  fprintf(fp, "%g %g\n",x+h,y);
  fprintf(fp, "%g %g\n",x+h,y+h);
  fprintf(fp, "%g %g\n",x,y+h);
  fprintf(fp, "%g %g\n\n",x,y);
}

void growtreeV2 (NodeList *nodeList)
{
  LeafNode *walkNode=nodeList->topNode; ///node for walking through the list
  for(; walkNode!=NULL ;walkNode=walkNode->nextLeaf) //print everynode then move to the next one
  {
    Node *node = walkNode->treeNode;
    makeChildren(node); //make children nodes
  }
  return;
}
