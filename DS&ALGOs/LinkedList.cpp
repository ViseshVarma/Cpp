#include<iostream>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;

        Node(int value){
            this -> value = value;
            next = nullptr;
        }

};

class LinkedList 
{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        LinkedList(int value)
        {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        void printList() {
            Node* temp = head;
            while (temp) {
                cout << temp->value << endl;
                temp = temp -> next;
            }
        }

        void getHead(){
            cout << "Head: " << head->value << endl;
        }

        void getTail(){
            cout<< "Tail: " << tail -> value << endl;
        }

        void getLength(){
            cout << "Length: " << length << endl;
        }

        void append(int value){
            Node* newNode = new Node(value);
            if(length == 0){
            head = newNode;
            tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }

        void deleteLast() {
            if(length == 0) return;
            Node* temp = head;
            Node* pre = head;
            while(temp->next) {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next = nullptr;
            length--;
            if(length == 0){
                head = nullptr;
                tail = nullptr;
            }
            delete temp;
        }

        void prepend(int value){
            Node* newNode = new Node(value);
            if(length == 0){
                head = newNode;
                tail = newNode;
            }
            else{
                newNode -> next = head;
                head = newNode;
            }
            length++;
        }

        void deleteFirst(){
            if(length == 0) return;
            Node* temp = head;
            if(length == 1) {
                head = nullptr;
                tail = nullptr;
            }
            else{
                head = head -> next;
            }
            delete temp;
            length--;
        }

        Node* get(int index){
            if(index < 0 || index >= length){
                return nullptr;
            }
            Node* temp = head;
            for(int i = 0; i< index; i++){
                temp = temp->next;
            }
            return temp;
        }

        bool set(int index, int value){
            Node* temp = get(index);
            if(temp) {
                temp->value = value;
                return true;
            }
            return false;
        }

};

int main(){
    LinkedList* myLinkedList = new LinkedList(5);

    myLinkedList -> getHead();
    myLinkedList -> getTail();

    myLinkedList -> append(2);

    myLinkedList -> getLength();

    myLinkedList -> deleteLast();

    myLinkedList -> printList();   
}
