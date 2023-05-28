#pragma once
#include "Node.h"
#include <iostream>
template <typename T>
class DoubleLinkedList
{
private:
	int nr_elements;
	Node<T>* list;

public:
	DoubleLinkedList()
	{
		list = nullptr;
		nr_elements = 0;
	}
	void PushOnBack(T x)
	{
		
		if (list == nullptr)
		{
			Node<T>* t = new Node<T>;
			t->next = nullptr;
			t->precedent = nullptr;
			t->value = x;
			list = t;
			
		}
		else
		{
			
			Node<T>*t = list;
			while (t->next != nullptr)
				t = t->next;
			Node<T>* newnode = new Node<T>;
			newnode->next = nullptr;
			newnode->precedent = nullptr;
			newnode->value = x;
			t->next = newnode;
			newnode->precedent = t;
		}
		nr_elements++;
	}
	void PushOnFront(T x)
	{
		if (list == nullptr)
		{
			Node<T>* t = new Node<T>;
			t->next = nullptr;
			t->precedent = nullptr;
			t->value = x;
			list = t;

		}
		else
		{
			Node<T>* t = new Node<T>;
			t->next = nullptr;
			t->precedent = nullptr;
			t->value = x;
			list->precedent = t;
			t->next = list;
			list = t;
		}
		nr_elements++;
	}
	int GetCount()
	{
		return nr_elements;
	}
	T PopFromBack()
	{
		if (nr_elements == 1)
		{
			T val = list->value;  
			nr_elements = 0;
			return val;
		}
		Node<T>* t = list;
		while (t->next != nullptr)
			t = t->next;
		T val = t->value;
		t->next = nullptr;
		t->precedent->next = nullptr;
		delete t;
		nr_elements--;
		return val;
	}

	void PrintAll(void(*func)(const T&)) 
	{
		std::cout << "Elements: " << nr_elements << " => ";
		if(list!=nullptr)
		{
		Node<T>* t = list;
		while (t != nullptr)
		{
			(*func)(t->value);
			t = t->next;
		}
		std::cout << '\n';
		}
	}
	
};

