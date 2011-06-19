/*
 * Implementation of class Map
 * 
 * @author: Agnieszka Szefer <agnieszka.m.szefer@gmail.com>
 */

#include <iostream>
#include "Map.hpp"

using namespace std;

/*
 * Inserting an element value to the map according to key.
 */
template <class K, class KV>
treeNode<KV>* Map<K, KV>::put(K* key, KV* value){
	return insert(value, root);
} 

/*
 * Overloading operator [].
 */
template <class K, class KV>
KV* Map<K, KV>::operator[](K* key){
	KV* vehicle = new KV(key);
	return get(vehicle, root); 
}

/*
 *	Freeing the map.
 */
template <class K, class KV>
void Map<K,KV>::freeMap(treeNode<KV>* root){
	freeTree(root);
}

/*
 * Checking whether the map is empty.
 */
template <class K, class KV>
bool Map<K, KV>::isEmpty(treeNode<KV>* node){
	if(node==NULL) return true;
	return false;
}
