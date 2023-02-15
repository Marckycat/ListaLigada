#pragma once
#include<string>

using namespace std;

template<class T>
class ListaNodo {
public:
	T* data;
	ListaNodo* next;
	ListaNodo* prev;

	ListaNodo(T* _d) {
		data = _d;
		next = nullptr;
		prev = nullptr;
	}

	T GetData() {
		return *data;
	}

	void InsertAfter(ListaNodo<T>* node) {
		node->next = this;
		this->prev = node;
	}

};