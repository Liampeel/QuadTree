#include "valueTree.h"
#include "quadList.h"
#include "printout.h"
#include "makeNodes.h"
#include "quadListNode.h"

int main(int argc, char **argv) //main
{
  Node *head = makeNode(0.0,0.0,0); //create the head node at level 0
  //printf("%d",sizeof(*head));
  //task 2
  makeChildren(head); //split a node to level 1

  growTree(head); //grow the tree
  printTree(head);//print tree

  //task 3
/*  NodeList treeList; //define the list
  initialiseList(&treeList); //initialise the list
  Listleaves(&treeList, head); //add all the lead nodes to list
  growtreeV2(&treeList);


  NodeList treeList2; //define the list
  initialiseList(&treeList2); //initialise the list
  Listleaves(&treeList2, head); //add all the lead nodes to list
  growtreeV2(&treeList2);
  printTreeV2(&treeList2);
  //task 3 end
*/
  //destroyNode (head);

//node used for walking through the linked list
  int falseCount = 2;
  while (falseCount!=0)
  {
    falseCount = 1; //initialise the false count
    NodeList nodeList; //create list of leaf nodes
    initialiseList(&nodeList);
    Listleaves(&nodeList,head); //add leaf nodes to list
    LeafNode *walkNode = nodeList.topNode; //node used for walking through list
    for(; walkNode!=NULL ;walkNode=walkNode->nextLeaf) //print each node then move on to the next node
    {
      Node *node = walkNode->treeNode; //get the leaf node from the linked list
      bool returned = indicator(node,0.5,0);
      if(returned == false) //if the value is false then make children
      {
        Node *node = walkNode->treeNode;
        makeChildren(node); //make chidlren
        falseCount ++ ;
      }
    }
    falseCount = falseCount -1 ; //remove slack from the false count
  }
  //task 4
/*
  NodeList treeList3 ; //create a linked list of leaf nodes
  initialiseList(&treeList3); //initialise the list
  Listleaves(&treeList3,head); //add nodes to list
  printTreeV2(&treeList3); //print out the tree
  destroyNode (head); //free memory on the tree
*/
  return 0;
}
