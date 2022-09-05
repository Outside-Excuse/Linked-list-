#include <iostream>
using namespace std;


class Node
{
public:
    int Value;
    Node* Next;
};



void printList(Node*n){
    while(n!= NULL){
        //si se escriben los 3 debido a que accede primero al valor y despues cambia  NEXT
        cout<<n->Value<<endl;
        n = n->Next;
    }
}

int main(){
Node* header = new Node();
Node* Second = new Node();
Node* Third = new Node();


//asignación de variables 
header->Value = 1; 
header->Next = Second;
Second->Value = 2;
Second->Next = Third;
Third->Value = 3;
Third->Next = NULL;

printList(header);

}

//https://www.youtube.com/watch?v=HKfj0l7ndbc