#include <iostream>
#include "Map.hpp"

using namespace std;

template <class K, class KV>
treeNode<KV>* Map<K, KV>::put(K* key, KV* value){
	return insert(value, root);
} 


template <class K, class KV>
KV* Map<K, KV>::operator[](K* key){
	KV* vehicle = new KV(key);
	return get(vehicle, root); 
}

template <class K, class KV>
void Map<K,KV>::freeMap(treeNode<KV>* root){
	freeTree(root);
}

template <class K, class KV>
bool Map<K, KV>::isEmpty(treeNode<KV>* node){
	if(node==NULL) return true;
	return false;
}

int main(){
	return 0;
}
