#include "quadList.h"

//Initialise empty list
void initialiseList (NodeList *nodeList)
  {
    nodeList->topNode=NULL; //set the pointer to NULL
  }
//Add node to the top of the list
void addNode(NodeList *nodeList, LeafNode *leafNode)
  {
    leafNode->nextLeaf = nodeList->topNode; //add the existing list of nodes to the bottom
    nodeList->topNode = leafNode; //Set list to point to a new node
  }
//Function to create a list of leaf nodes
void Listleaves (NodeList *myList ,Node *node)
  {
    int i;
    if(node->child[0]==NULL) //If node has no children
    {
      addNode(myList, createFilledNode(node)); //add to the list
    }
    else
    {
      for (i=0; i<4; ++i) //for all 4 child nodes
      {
        Listleaves(myList,node->child[i]); //pass the child node of the current node
      }
    }
    return;
  }
