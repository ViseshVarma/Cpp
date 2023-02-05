#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node* prev;

        Node(int value){
            this->value = value;
            next = nullptr;
            prev = nullptr;
        }
};

class DoublyLinkedList {
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        DoublyLinkedList(int value){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        void printList() {
            Node* temp = head;
            while(temp) {
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getHead(){
            cout<< "Head: " << head->value << endl;
        }

        void getTail(){
            cout<< "Tail: " << tail-> value << endl;
        }

        void getLength(){
            cout << "Length: "<< length << endl;
        }

        void append(int value){
            Node* newNode = new Node(value);
            if(length == 0){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                newNode-> prev = tail;
                tail = newNode;
            }
            length++;
        }
};

int main(){
    DoublyLinkedList* myDLL = new DoublyLinkedList(1);

    myDLL->append(2);

    myDLL->printList();
}