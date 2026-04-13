#include <iostream>
using namespace std;
 
int N_Factorial(int n){
    if( n == 0 ){
        return 1;
    }

    return n*N_Factorial(n-1);
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    cout << "Factorial of N : " << N_Factorial(n);
    return 0;
}