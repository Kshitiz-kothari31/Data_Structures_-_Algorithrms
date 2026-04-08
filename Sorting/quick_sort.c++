#include <iostream>
#include <vector>
using namespace std;
 
int partition(vector<int> &arr, int st, int ed){
    int x = arr[st], count = st;
    for(int i = st+1; i <= ed; i++){
        if( arr[i] <= x ){
            count++;
            swap(arr[i], arr[count]);
        }
    }
    swap(arr[st], arr[count]);

    return count;
}

void quickSort(vector<int> &arr, int st, int ed){
    if( st >= ed ){
        return;
    }else{
        int i = partition(arr, st, ed);
        quickSort(arr, st, i - 1);
        quickSort(arr, i+1, ed);
    }
}

int main()
{
    vector<int> arr = {16, 21, 15, 20, 13, 26, 12, 17};

    cout << "Before Sorting : ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    quickSort(arr, 0, arr.size()-1);
    cout << "After Sorting : ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}