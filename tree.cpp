#include <iostream>
#include <string>
#include "tree.hpp"

using namespace std;

template <class KV>
treeNode<KV>* treeNode<KV>::insert(KV* object, treeNode* node){
	if(node == NULL){
		treeNode* root = treeNode(object, NULL, NULL);
	}
	else if(object < node->value) node->left = insert(object, node->left);
	else if(object > node->value) node->right = insert(object, node->right);
	return node;
}

template <class KV>
treeNode<KV>::treeNode(KV v, treeNode* l, treeNode* r){
	treeNode* newNode = new treeNode;
	newNode->value = v;
	newNode->left = l;
	newNode->right = r;
}

template <class KV>


int main(){
	return 0;
}
