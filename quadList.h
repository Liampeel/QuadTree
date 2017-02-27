#include <stdlib.h>
#include <stdio.h>
#include "quadListNode.h"


#ifndef __QUADLIST__H
#define __QUADLIST__H
//Structure for linked list
struct leaf_list
{
    LeafNode *topNode; //pointer to the 1st node
};

typedef struct leaf_list NodeList;


void initialiseList (NodeList *nodeList); //initialise List function
void addNode(NodeList *nodeList, LeafNode *leafNode); //Add node function
void Listleaves (NodeList *myList, Node *node); //make list function

#endif
