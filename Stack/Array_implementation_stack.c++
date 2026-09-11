#include <iostream>
using namespace std;
 
#define max 3

int st[max], top = -1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main()
{
    int val, option;

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
                push(st, val);
                break;
            case 2: 
                val = pop(st);
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

void push(int st[], int val){
    if( top == max-1 ){
        cout << "\n STACK OVERFLOW";
    }else{
        top++;
        st[top] = val;
    }
}

int pop(int st[]){
    int val = -1;
    if( top == -1 ){
        cout << "\n STACK UNDERFLOW";
        return val;
    }else{
        val = st[top];
        top--;
        return val;
    }
}

int peek(int st[]){
    if( top == -1 ){
        cout << "\n STACK IS EMPTY";
        return -1;
    }else{
        return (st[top]);
    }
}

void display(int st[]){
    int i;
    if( top == -1 ){
        cout << "\n STACK IS EMPTY";
    }else{
        for(i = top; i >= 0; i--){
            cout << st[i] << " " << endl;
        }
    }
}