#include <iostream>
using namespace std;
 
void printNums(int n){
    if( n == 1 ){
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printNums(n-1);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printNums(n);

    return 0;
}