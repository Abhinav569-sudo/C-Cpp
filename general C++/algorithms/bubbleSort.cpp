//Bubble sort
//complexity O(n^2)
#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

void bubbleSort(int arr[], int n, bool(*cmp)(int a, int b)){
    for(int j=n-1; j>0; j--){
        for(int i=0; i<j; i++){
            //if(arr[i+1] < arr[i])
            if(cmp(arr[i+1], arr[i])){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void display(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }
}

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
    bubbleSort(arr, n, compare);
    //To display the sorted array
    display(arr, n);
    return 0;
}
