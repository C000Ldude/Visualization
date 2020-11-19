#include "binaryTree.h"

BSTNode::BSTNode()
{
    Key=0;
    Left=Right=Parent=nullptr;
}


 BST::BST()
{
    root=nullptr;
}




 BSTNode* BST::Insert(BSTNode* node, int key)
 {
     // If BST doesn't exist
     // create a new node as root
     // or it's reached when
     // there's no any child node
     // so we can insert a new node here
     if(node == NULL)
     {
         node = new BSTNode;
         node->Key = key;
         node->Left = NULL;
         node->Right = NULL;
         node->Parent = NULL;
     }
     // If the given key is greater than
     // node's key then go to right subtree
     else if(node->Key < key)
     {
         node->Right = Insert(node->Right, key);
         node->Right->Parent = node;
     }
     // If the given key is smaller than
     // node's key then go to left subtree
     else
     {
         node->Left = Insert(node->Left, key);
         node->Left->Parent = node;
     }

     return node;
 }

 void BST::Insert(int key)
 {
     // Invoking Insert() function
     // and passing root node and given key
     root = Insert(root, key);
 }

 void BST::initializer(QGraphicsScene* mainScene,double height,double width)
 {
    treeScene=mainScene;
    treeSceneHeight=height;
    treeSceneWidth=width;
 }

 void BST::draw(int key,int operation)
  {
      treeScene->clear();
      if(operation==1)
      {
      this->Insert(key);
          horizontalDistanceMultiplier++;
      }

      double level=400;
      recursiveDraw(this->root,200+horizontalDistanceMultiplier*30,50,level);
  }


 void BST::recursiveDraw(BSTNode* node, double x1, double y1,double level)
 {
     if(node!=nullptr)
     {
                  level=level/2;
                  QGraphicsTextItem* text;
                  text=treeScene->addText(QString::number(node->Key),QFont("Times"));
                  text->setPos(QPointF(x1,y1));

         recursiveDraw(node->Left,x1-level,y1+100,level);
         recursiveDraw(node->Right,x1+level,y1+100,level);
     }
     else
     {
         return;
     }

 }
