//Two sums
#include <bits/stdc++.h>
using namespace std;

int isSum(int arr[], int Size, int target){
   for(int i=0; i<Size-1; i++){
    for(int j=i+1; j<Size; j++){
        if(arr[i]+arr[j] == target){
            cout << "[" << i << "," << j << "]" << endl;
            break;
        }
    }
   }
   return 0;
}
int main(){
    int arr[] = {2,7,11,15};
    int target = 9;
    int Size = sizeof(arr)/sizeof(arr[0]);

    isSum(arr, Size, target);
    return 0;
}
