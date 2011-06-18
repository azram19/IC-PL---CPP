#include <iostream>
#include <string>

using namespace std;

template <class KV> 
class treeNode{
	protected:
		KV value;
		treeNode* left;
		treeNode* right;
	public:
		treeNode(KV, treeNode*, treeNode*);
		treeNode* insert(KV*, treeNode*);
		KV get(KV);
		//void remove(KV);
};

