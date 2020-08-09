#include "quadList.h"

#ifndef __QUADWRITE__H
#define __QUADWRITE__H

void printOut( FILE *fp, Node *node); //print out file function
void printTree (Node *head); //print the tree function
void writeNode (FILE *fp, Node *node); //print the node function
void printTreeV2 (NodeList *nodeList); //print the tree function V2
void printOutV2 (FILE *fp, LeafNode *node); //print out the file function V2
void growtreeV2 (NodeList *nodeList); //grow the tree function V2

#endif
