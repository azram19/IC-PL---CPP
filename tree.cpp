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
treeNode<KV>::treeNode(KV* v, treeNode* l, treeNode* r){
	treeNode* newNode = new treeNode;
	newNode->value = v;
	newNode->left = l;
	newNode->right = r;
}

template <class KV>
KV* treeNode<KV>::get(KV* object, treeNode* node){
	if(node == NULL) return NULL;
	else if (object == node->value) return node->value;
	else if (object < node->value) node->left = get(object, node->left);
	else if (object > node->value) node->right = get(object, node->right);
}

template <class KV>
void treeNode<KV>::freeTree(treeNode* node){
	if(node == NULL) return NULL;
	freeTree(node->left);
	freeTree(node->right);
	delete node;
}
