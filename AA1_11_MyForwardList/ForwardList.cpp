#include "ForwardList.h"

ForwardList::ForwardList(int size)					//M
{
	int thisData = 0;
	
	for (int i = 0; i < size + 1; i++) {

		cin >> thisData;

		if (i == 0) {
			*last = node::node();
			last->data = thisData;
			*first = *last;
		}
		else
		Push_front(&first, thisData);
			
	
	}
}

ForwardList::~ForwardList()					//I
{

}

void ForwardList::Push_back(node** last, int value)		//M inserta un nuevo elemento al final de la lista con valor value
{
	size++;
	node* newNode = new node();
	node* auxNode = new node();
	newNode->data = value;
	newNode->next = nullptr;
	if (last == nullptr)
		*last = newNode;
	else {
		auxNode = *last;
		auxNode->next = newNode;
		*last = newNode;
	
	}
		//*last->next = newNode;

}

void ForwardList::Pop_back()				//I elimina el último elemento de la lista
{

}

void ForwardList::Push_front(node** first, int value)		//M inserta un nuevo elemento al principio de la lista con valor value
{
	size++;
	node* newNode = new node();
	newNode->data = value; 
	newNode->next = *first;
	*first =  newNode;
}

void ForwardList::Pop_front()				//I elimina el primer elemento de la lista
{


}

bool ForwardList::IsEmpty() const					//M devuelve true si la lista está vacía, sino devuelve false
{
	bool empty;
	if (first == nullptr || size < 1)
		return true; 
	else
		return false;
}

int ForwardList::Front() const						//I devuelve el valor del primer elemento de la lista
{
	int frontNum = first->data;
	return frontNum;
}

int ForwardList::Back() const						//M devuelve el valor del último elemento de la lista
{
	int backNum = last->data;
	return backNum;
}

int ForwardList::Size()const						//I devuelve el tamaño (numero de elementos) de la lista
{
	return size;
}
void ForwardList::Erase(int value)					//M elimina todos los elementos de la lista que tienen como valor value.
{

}

void ForwardList::Insert(int value1, int value2)	//I inserta un nuevo elemento con value2 después del elemento con value1
{

}

void ForwardList::InsertByPos(int value, int position) //M inserta un nuevo elemento con value en la posición indicada.
{
	node* newNode = new node();
	node* auxNode = new node();
	newNode->data = value;
	if (size < position)
		Push_back(&last, value);
	else {
		*auxNode = *last;
		 Push_back(&auxNode, auxNode->data);
		for (int i = size -2; i > position; i--) {
			auxNode = first;
			for (int j = 0; j < i; j++) {
				auxNode = auxNode->next;
			}
			InsertByPos(auxNode->data, i);
		}
		for (int j = 0; j <= position; j++) {
			auxNode = auxNode->next;
		}
		auxNode->data = newNode->data;
	}

}