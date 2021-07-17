/*2. Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in
the array sums up to 13.*/

//code

#include <bits/stdc++.h>
using namespace std;

bool TofindTriplet(int arr[], int n ,int x){
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    cout << "Triplets are " << arr[i] << ", " << arr[j] << ", " << arr[k];
                    return true;
                }
            }
        }
    }
    return false;
}
//main function
int main(){
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = 6 ,x = 13;

    TofindTriplet(arr, n, x);
    return 0;
}

