//quick sort
//complexity is O(n^2)
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int i = s - 1;
    int j = s;
    int pivot = e;
    //loop
    for(j=s ;j <= e-1 ;j++){
        if(arr[j] <= arr[pivot]){
            i++;
            swap(arr[i], arr[j]);
        }
    }swap(arr[pivot], arr[i+1]);
    return i+1;
}

void quickSort(int arr[], int s, int e){
    if(s >= e){
        return ;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
// main
int main(){
    int n;
    //Take input
    cout << "How many elements do you want to enter: " << endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //To sort the user input
    quickSort(arr, 0, n-1);
    //To display the sorted array
    display(arr, n);
    return 0;
}
