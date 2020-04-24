#include <bits/stdc++.h>
using namespace std;

template<typename T>
class node
{
public:
	string key;
	T value;
	node<T>* next;
	node(string k, T val){
		key = k;
		value = val;
		next = NULL;
	}

	//destructor
	~node(){
		if(next != NULL){
			delete next;
		}
	}
	
};


template<typename T>
class hashMap{
	node<T> ** arr;
	int currSize;
	int totalSize;

	int hashFunction(string k){
		int idx =0;
		int len = k.length();
		int multiplicationFactor = 1;

//(a*b)%x = ((a%x) * (b%x)) %x
		for (int i = 0; i < len; ++i)
		{
			int res = ((k[len-i-1] % totalSize) * (multiplicationFactor%totalSize))%totalSize;
			idx = ((idx%totalSize) + (res%totalSize))%totalSize;
			multiplicationFactor = ((multiplicationFactor%totalSize) *(47%totalSize))%totalSize;
		}
		return idx;

// "abc"
// idx = (c*1) + (b*47) + (a*47*47)
	}

	void rehash(){
		cout<<"rehashing"<<endl;
		node<T> ** oldArray = arr;
		int oldSize = totalSize;

		totalSize = 2*totalSize;
		arr = new node<T>*[totalSize];
		currSize =0;
		for (int i = 0; i < totalSize; ++i)
		{
			arr[i] = NULL;
		}

		for (int i = 0; i < oldSize; ++i)
		{
			if(oldArray[i] != NULL){
				node<T>* temp = oldArray[i];
				while(temp != NULL){
					insert(temp->key, temp->value);
					temp = temp->next;
				}
			}
		}

		for (int i = 0; i < oldSize; ++i)
		{
			delete oldArray[i];
		}

		delete[] oldArray;
	}

public:
	hashMap(int defaultSize = 7){
		totalSize = defaultSize;
		arr = new node<T>* [totalSize];

		for (int i = 0; i < totalSize; ++i)
		{
			arr[i] = NULL;
		}
		currSize = 0;
	}

	void insert(string k, T val){

		int idx = hashFunction(k);

		//insert at head of linked list
		node<T>* newNode = new node<T>(k, val);
		newNode->next = arr[idx];
		arr[idx] = newNode;
		currSize++;

		float loadFactor = (float)currSize/ (float)totalSize;
		if(loadFactor > 0.7){
			rehash();
		}
	}

	void print(){
		for (int i = 0; i < totalSize; ++i)
		{	
			cout<<i<<"_____";
			
			node<T>* temp = arr[i];
			while(temp != NULL){
				cout<<temp->key<<", "<<temp->value<<"--";
				temp = temp->next;
			}
			
			cout<<endl;
		}
	}


	T* search(string k){
		int idx = hashFunction(k);
		node<T>* temp = arr[idx];
		while(temp!=NULL){
			if(temp->key == k){
				return &(temp->value);
			}
			temp = temp->next;
		}
		return NULL;
	}

	T& operator[](string k){ // we will return value by reference
		T* valueAdd = NULL;

		if(search(k) != NULL){ // key found
			valueAdd = search(k);
		}
		else{ // key not found
			T garbageValue;
			insert(k, garbageValue);
			valueAdd = search(k);
		}
		//valueAdd => address of value
		return *valueAdd; // here we are returning the value only
	}

};


int main(int argc, char const *argv[])
{
	
	hashMap<int> hm(11);
	hm.insert("ABC", 10);
	hm.insert("DEF", 20);
	hm.insert("ghi",90);
	hm.insert("OPQ", 30);
	hm.insert("uio", 89);
	hm.print();
	// hm.insert("AsC", 100);
	// hm.print();
	// hm.insert("DhF", 200);
	// hm.print();
	// hm.insert("gki",900);
	// hm.print();
	// hm.insert("OiQ", 300);
	// hm.print();
	// hm.insert("upo", 890);
	//hm.print();
	if(hm.search("ABC") != NULL){
		cout<<"key found"<<endl;
	}else{
		cout<<"key not found"<<endl;
	}
	if(hm.search("AFC") != NULL){
		cout<<"key found"<<endl;
	}else{
		cout<<"key not found"<<endl;
	}

	//hm["ABC"]; //should return value for this key "ABC"
	hm["ABC"] = 90; // it should replace 10 by 90
	hm["AFKC"] = 1000; // it should add a new key "AFKC" in the hashmap and assign value 1000 to it
	hm.print();





	return 0;
}


// void fun(int& a){

// 	a = 10;
// }





