// #include "stdc++.h"
// #include "HashTable.h"

// Hash::Hash(int b)
// {
// 	this->BUCKET = b;
// 	table = new std::list<int>[BUCKET];
// }

// void Hash::insertItem(int key)
// {
// 	int index = hashFunction(key);
// 	table[index].push_back(key);
// }

// void Hash::deleteItem(int key)
// {
// // get the hash index of key
// int index = hashFunction(key);

// // find the key in (index)th list
// std::list <int> :: iterator i;
// for (i = table[index].begin();
// 		i != table[index].end(); i++) {
// 	if (*i == key)
// 	break;
// }

// // if key is found in hash table, remove it
// if (i != table[index].end())
// 	table[index].erase(i);
// }

// // function to display hash table
// void Hash::displayHash() {
// for (int i = 0; i < BUCKET; i++) {
// 	std::cout << i;
// 	for (auto x : table[i])
// 	std::cout << " --> " << x;
// 	std::cout << std::endl;
// }
// }