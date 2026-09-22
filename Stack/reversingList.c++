#include <iostream>
using namespace std;
 
int stk[10];
int top = -1;
int pop();
void push(int);

int main()
{
    int val, n, i;
    int arr[10];

    cout << "\nEnter the number of elements in the array: ";
    cin >> n;

    cout << "\n Enter the elements of the array: ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(i = 0; i < n; i++){
        push(arr[i]);
    }

    for(i = 0; i < n; i++){
        val = pop();
        arr[i] = val;
    }

    cout << "\n The reversed array is : ";
    for(i = 0; i < n; i++){
        cout << "\n " << arr[i];
    }

    return 0;
}

void push(int val){
    stk[++top] = val;
}

int pop(){
    return (stk[top--]);
}