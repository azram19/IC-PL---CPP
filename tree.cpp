/*
 * Implementation of class treeNode
 * 
 * @author: Agnieszka Szefer <agnieszka.m.szefer@gmail.com>
 */

#include <iostream>
#include <string>
#include "tree.hpp"

using namespace std;

/*
 * Constructor of treeNode.
 */
template <class KV>
treeNode<KV>::treeNode(KV* v, treeNode* l, treeNode* r){
	treeNode* newNode = new treeNode;
	newNode -> value = v;
	newNode -> left = l;
	newNode -> right = r;
}

/*
 * Inserting an element object to tree with root 'node'.
 */
template <class KV>
treeNode<KV>* treeNode<KV>::insert(KV* object, treeNode* node){
	if(node == NULL){
		treeNode* root = treeNode(object, NULL, NULL);
	}
	else if(object < node -> value) node -> left = insert(object, node -> left);
	else if(object > node -> value) node -> right = insert(object, node -> right);
	return node;
}

/*
 * Getting an object from the map with root 'node'.
 */
template <class KV>
KV* treeNode<KV>::get(KV* object, treeNode* node){
	if(node == NULL) return NULL;
	else if (object == node -> value) return node -> value;
	else if (object < node -> value) node -> left = get(object, node -> left);
	else if (object > node -> value) node -> right = get(object, node -> right);
}

/*
 * Freeing the tree.
 */
template <class KV>
void treeNode<KV>::freeTree(treeNode* node){
	if(node == NULL) return NULL;
	freeTree(node -> left);
	freeTree(node -> right);
	delete node;
}
