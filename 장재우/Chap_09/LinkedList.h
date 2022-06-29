#pragma once
#include <iostream>

using namespace std;

template <typename T>
class LinkedList {
public :
	class Node<T> {
	private :
		T data;
		Node<T>* next;

		Node(T* data, Node<T>* next) {
			this->data = *data;
			this->next = next;
		}
	};

private :
	Node<T>* head;
	Node<T>* crnt;

public :
	LinkedList() {
		head = crnt = NULL;
	}

	~LinkedList() {
		Node<T>* next;
		for (Node<T>* iter = head; iter != NULL; iter = next) {
			next = iter->next;
			delete iter;
		}
	}

	T* search(T* obj, bool(*compare)(T*, T*)) {
		Node<T>* ptr = head;

		while (ptr != NULL) {
			if (compare(obj, &(ptr->data)) == 0) {
				crnt = ptr;
				return &ptr->data;
			}
			ptr = ptr.next;
		}
		
		return NULL;
	}

	void addFirst(T* obj) {
		Node<T>* ptr = head;
		head = crnt = new Node<T>(obj, ptr);
	}

	void addLast(T* obj) {
		if (head == NULL)
			addFirst(obj);
		else {
			Node<T>* ptr = head;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr.next = crnt = new Node<T>(obj, NULL);
		}
	}

	void removeFist() {
		if (head != NULL) {
			delete head;
			head = crnt = head->next;
		}
	}

	void removeLast() {
		if (head != NULL) {
			if (head.next == NULL)
				removeFist();
			else {
				Node<T>* ptr = head;
				Node<T>* pre = head;

				while (ptr->next != null) {
					pre = ptr;
					ptr = ptr->next;
				}
				delete ptr;
				pre->next = NULL;
				crnt = pre;
			}
		}
	}

	void remove(Node* p) {
		if (head != NULL) {
			if (p == head)
				removeFist();
			else {
				Node<T>* ptr = head;

				while (ptr->next != p) {
					ptr = ptr.next;
					if (ptr == NULL) return;
				}
				ptr.next = p.next;
				crnt = ptr;
				delete p;
			}
		}
	}

	void removeCurrentNode() {
		remove(crnt);
	}

	public void clear() {
		while (head != NULL)
			removeFist();

		crtn = null;
	}

	bool next() {
		if (crnt == NULL || crnt->next == NULL)
			return false;
		crtn = crtn.next;
		return ture;
	}

	void printCurrentNode() {
		if (crnt == NULL)
			cout << "선택한 노드가 없습니다.\n";
		else
			cout << crnt->data;
	}

	void dump() {
		Node<T>* ptr = head;

		while (ptr != NULL) {
			cout << ptr->data << "\n";
			ptr = ptr->next;
		}
	}
};