#include <iostream>
#include <vector>
using namespace std;
 
int merge(vector<int> &arr, int st, int mid, int ed){
    vector<int> temp;
    int i = st, j = mid + 1, invCount = 0;

    while ( i <= mid && j <= ed ){
        if( arr[i] <= arr[j] ){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            invCount += (mid-i+1);
        }
    }

    while( i <= mid ){
        temp.push_back(arr[i]);
        i++;
    }

    while( j <= ed ){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i = 0; i < temp.size(); i++ ){
        arr[i+st] = temp[i];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int st, int ed){
    if( st < ed ){
        int mid = st + (ed - st)/2;

        int left_inversion_count = mergeSort(arr, st, mid);
        int right_inversion_count = mergeSort(arr, mid+1, ed);

        int inversion_count = merge(arr, st, mid, ed);

        return left_inversion_count + right_inversion_count + inversion_count;
    }

    return 0;
}

int main()
{
    vector<int> arr = {6, 3, 5, 2, 7};

    int ans = mergeSort(arr, 0, arr.size()-1);
    cout << "Inversion count : " << ans << endl;
    return 0;
}