#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int ed){ // this fxn will backtrack while mergeing.
    vector<int> temp;
    int i = st, j = mid+1;

    while( i <= mid && j <= ed ){ // This while loop is used to merge the arrays.
        if( arr[i] <= arr[j] ){
            temp.push_back(arr[i]);
            i++; 
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while( i <= mid ){ // store the elements of left sorted array.
        temp.push_back(arr[i]);
        i++;
    }

    while( j <= ed ){ // store the elements of right sorted array.
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){ // finally used to store the elements back on to the original array.
        arr[idx + st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int ed){
    if( st < ed ){
        int mid = st + (ed - st)/2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid+1, ed);
        merge(arr, st, mid, ed);
    }
}

int main(){

    vector<int> arr = {12, 31, 35, 8, 32, 17};
    cout << "Before Sorting : ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    mergeSort(arr, 0, arr.size()-1);
    cout << "After Sorting : ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}