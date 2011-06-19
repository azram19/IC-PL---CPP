/*
 * Class Map
 * 
 * @author: Agnieszka Szefer <agnieszka.m.szefer@gmail.com>
 */

#include <iostream>
#include <string>
#include "tree.hpp"

using namespace std;

template <class K, class KV>
class Map{
	protected:
		treeNode<KV>* root;
	public:
		treeNode<KV>* put(K*, KV*);
		KV* operator[](K*);
		void freeMap(treeNode<KV>*);
		bool isEmpty(treeNode<KV>*);
};
