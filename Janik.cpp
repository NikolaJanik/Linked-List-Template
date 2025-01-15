#include <iostream>


template <typename T>
struct Node {
	T data;
	Node* next;
};

template <typename T>
Node<T>* arrayToList(const T arr[], size_t size) {
    if (size == 0) return nullptr;

    Node<T>* head = new Node<T>{arr[0], nullptr};
    Node<T>* current = head;

    // Zaczynamy od i=1, bo arr[0] już dodaliśmy
    for (size_t i = 1; i < size; ++i) {
        current->next = new Node<T>{arr[i], nullptr};
        current = current->next;
    }
    return head;
}

template <typename T, typename Pred>
void removeBad(Node<T>*& head, Pred p) {
	Node<T>* current = head;
	Node<T>* prev = nullptr;

	while(current != nullptr) {
		if(p(current->data)) {
			std::cout << "DEL" << current->data << "; ";
			if(prev == nullptr){
				Node<T>* temp = current;
				head = current->next;
				current = current->next;
				delete temp;
			}else {
				Node<T>* temp = current;
				prev->next = current->next;
				current = current->next;
				delete temp;
			}
		} else {
			prev = current;
			current = current->next;
		}
	}
	std::cout << std::endl;
}

template <typename T>
void showList(const Node<T>* head) {
	const Node<T>* current = head;
	while(current != nullptr){
		std::cout << current->data << " ";
		current = current->next;
	}
	std::cout << std::endl;
}


template <typename T>
void deleteList(Node<T>*& head) {
	while(head != nullptr) {
		std::cout << "deleting " << head->data << "; ";
		Node<T>* temp = head;
		head = head->next;
		delete temp;
	}
	std::cout << std::endl;
	std::cout << "Empty list" << std::endl;
}


int main() {
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	size_t size = std::size(arr);
	Node<int>* head = arrayToList(arr,size);
	showList(head);
	removeBad(head, [](int n) {return n%2 != 0;});
	showList(head);
	removeBad(head, [](int n) {return n < 5;});
	showList(head);
	removeBad(head, [](int n) {return n > 9;});
	showList(head);
	deleteList(head);
	showList(head);
}



































