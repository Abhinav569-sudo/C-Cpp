#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n=10;
    for(int i=0; i<n; i++0){
        q.push(i*i);
    }
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
