//Linear search
//array is not sorted
//complexity O(n)

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
//main
int main(){
    int arr[]={10,5,8,9,2,3,1,6,4};
    int n=sizeof(arr)/sizeof(arr[0]); //to find the no of elements in array
    int key;

    cout << "Enter the elements to search: " << endl;
    cin >> key;

    int result = linearSearch(arr, n, key);
    if (result != -1){
        cout << "Element is available at index " << result << endl;
    }else{
        cout << "Element is not available" << endl;
    }
    return 0;
}
