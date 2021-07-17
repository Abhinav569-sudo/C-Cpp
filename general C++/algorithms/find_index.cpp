//print the index for a sorted arrays
#include <bits/stdc++.h>
using namespace std;

int findI(vector<int>&v, int x){
    /*if(binary_search(v.begin(), v.end(), x)){
            return lower_bound(v.begin(), v.end(), x)-v.begin();
    }return lower_bound(v.begin(), v.end(), x) - v.begin() + 1;*/
    int i=0;
    int j = v.size()-1;
    while(i <= j){
        int mid = (i+j)/2;
        if(v[mid] == x){
            return mid;
        }
        else if(v[mid] > x){
            j = mid-1;
        }else{
            i = mid+1;
        }
        return i;
    }
}
int main(){
    vector<int>v{1,3,5,6};
    cout << findI(v ,5);
    return 0;
}

