#include<iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int value){
            this->value = value;
            next = nullptr;
        }
};

class Stack{
    private:
        Node* top;
        int height;

    public:
        Stack(int value){
            Node* newNode = new Node(value);
            top = newNode;
            height = 1;
        }

        void printStack(){
            Node* temp = top;
            while(temp){
                cout<< temp->value <<endl;
                temp = temp->next;
            }
        }

        void getTop(){
            cout<< "Top: " << top->value << endl;
        }

        void getHeight(){
            cout<<"Height: " << height << endl;
        }
        
        void push(int value){
            Node* newNode = new Node(value);

            newNode->next = top;
            top = newNode;
            height++; 
        }

        int pop(){
            if(height == 0) return INT_MIN;  // we use INT_MIN (-2147483647) as it is not usually found in a stack
            
            Node* temp = top;
            int poppedValue = top->value;
            top = top->next;
            delete temp;
            height--;

            return poppedValue;
        }

};

int main(){
    Stack* myStack = new Stack(2);

    myStack->push(1);

    myStack->pop();

    myStack->getTop();
    myStack->getHeight();
    myStack->printStack();
}