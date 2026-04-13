#include <iostream>
using namespace std;
 
int sum_N(int n){
    if( n == 1 ){
        return 1;
    }

    return n + sum_N(n-1);
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    cout << sum_N(n);
    return 0;
}