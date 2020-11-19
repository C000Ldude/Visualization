#ifndef BINARYTREE_H
#define BINARYTREE_H


#include<QWidget>
#include<QtWidgets>


class BSTNode
{
    friend class BST;
public:
    BSTNode();

private:
    int Key;
    BSTNode* Left;
    BSTNode* Right;
    BSTNode* Parent;

};




class BST
{
public:
     BST();
    ~BST();
    void initializer(QGraphicsScene*,double,double);
    void draw(int key,int operation);
    void Insert(int key);
    void recursiveDraw(BSTNode*,double,double,double);


private:
    BSTNode* root;
    QGraphicsScene* treeScene;
    BSTNode* Insert(BSTNode* node, int key);
    double treeSceneHeight;
    double treeSceneWidth;
    int horizontalDistanceMultiplier=1;

};

#endif // BINARYTREE_H



