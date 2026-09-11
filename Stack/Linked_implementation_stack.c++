#include <iostream>
using namespace std

struct Node{
    int data;
    Node *next;
}

int main(){
    int val, option;
    Node *head = NULL;

    do{
        cout << "\n *****MAIN MENU*****";
        cout << "\n 1. PUSH";
        cout << "\n 2. POP";
        cout << "\n 3. PEEK";
        cout << "\n 4. DISPLAY";
        cout << "\n 5. EXIT";

        cout << "\n Enter your option : ";
        cin >> option;

        switch(option){
            case 1: 
                cout << "\n Enter the number to be pushed on to the stack: ";
                cin >> val;
                head = push(head, val);
                break;
            case 2: 
                head = pop(head);
                if( val != -1 ){
                    cout << "\n The value deleted from stack is : " << val;
                    break;
                }
                break;
            case 3: 
                val = peek(st);
                if( val != -1 ){
                    cout << "\n The value stored at top of stack is : " << val;
                    break;
                }
                break;
            case 4:
                display(st);
                break;
        }
    }while(option != 5);

    return 0;
}

struct Node *createNode(int val){
    Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node -> val = val;
    new_node -> next = NULL;
    return new_node;
}

struct Node *push(Node *head, int val){
    if( head == NULL ){
        head = createNode(val);
        return head;
    }else{
        struct Node *temp = createNode(val);
        head -> next = temp;
        head = temp;

        return head;
    }
}

struct Node *pop(Node *head, )