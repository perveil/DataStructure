//
// Created by Administrator on 2018/12/7.
//

#ifndef DATASTRUCTURE_BINARYTREE_H
#define DATASTRUCTURE_BINARYTREE_H
class Node {
private:
    int value;
    Node * left;
    Node * right;
public:
    Node(int v){
        this->value=v;
    }
    int getValue(){
        return this->value;
    }
};

class BinaryTree {
  private:
    Node * root;
public:
    Node * insert(int value);
    Node * deleteNode(int value);
};


#endif //DATASTRUCTURE_BINARYTREE_H
