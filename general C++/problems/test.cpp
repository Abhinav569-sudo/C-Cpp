#include <bits/stdc++.h>
using namespace std;

void printMap(int a[], int n){
    map<int ,int> mp;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        cout << it.second << " ";
    }
    cout << endl;
}

int main(){
    int a[8] = {2,2,2,2,4,5,5,1};
    int n = 8;
    printMap(a, n);
    return 0;
}
