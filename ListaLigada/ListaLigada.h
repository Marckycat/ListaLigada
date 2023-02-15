#pragma once
#include "ListaNodo.h"

template<class T>

class ListaLigada {
private:
	ListaNodo<T>* header;
public:
	ListaNodo<T>* GetHeader() {
		return header;
	}
	ListaLigada(T* item) {
		header = new ListaNodo<T>(item);
	}
	void Insert(T* item){
		ListaNodo < T* newmode = new ListaNodo<T>(item);
		header->InsertAfter(newmode);
		header = newmode;
	}
	void Delete() {

	}

};