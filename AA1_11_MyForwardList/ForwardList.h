#pragma once
#pragma once

#include <iostream>
using namespace std;

class ForwardList
{
	struct node {
		int data;
		node* next;
		node() : data(0), next(nullptr) {};
		node(int _data, node* _next) :data(_data), next(_next) {};
	};
	node* first;					//puntero al primer elemento de la lista
	node* last;						//puntero al �ltimo elemento de la lista
	int size;						//numero de elementos que tiene la lista
public:
	ForwardList(int size);					//M constructor	// FET
	~ForwardList();					//I
	void Push_back(node** last, int value);		//M inserta un nuevo elemento al final de la lista con valor value // FET
	void Pop_back();				//I elimina el �ltimo elemento de la lista
	void Push_front(node** first, int value);		//M inserta un nuevo elemento al principio de la lista con valor value // FET
	void Pop_front();				//I elimina el primer elemento de la lista
	bool IsEmpty() const;			//M devuelve true si la lista est� vac�a, sino devuelve false // FET
	int Front() const;				//I devuelve el valor del primer elemento de la lista // FET
	int Back() const;				//M devuelve el valor del �ltimo elemento de la lista // FET
	int Size()const;				//I devuelve el tama�o (numero de elementos) de la lista // FET
	void Erase(int value);			//M elimina todos los elementos de la lista que tienen como valor value.
	void Insert(int value1, int value2); //I inserta un nuevo elemento con value2 despu�s del elemento con value1
	void InsertByPos(int value, int position); //M inserta un nuevo elemento con value en la posici�n indicada.
	//Asuma que el primer elemento de la lista est� en la posici�n 0, el segundo en la 1 y as� sucesivamente. // FET

	friend bool operator==(const ForwardList& l1, const ForwardList& l2); //I compara el contenido de dos listas l1 y l2. //Devuelve truesi son iguales, false en caso contrario
	friend std::ostream& operator<<(std::ostream& o, const ForwardList& l); // M
};