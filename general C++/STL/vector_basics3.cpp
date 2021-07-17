//element accessers in vector
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    for(int i=1; i<=10; i++){
        v.push_back(i * 10);
    }
    cout << "\nReference operator [v] : v[2] =  " << v[2];
    cout << "\nAt : v.at(4) = " << v.at(4);
    cout << "\nFront() : v.front() = " << v.front();
    cout << "\nBack() : v.back() = " << v.back();

    //pointer to the first element
    int* pos = v.data();
    cout << "\nThe first element is : " << *pos;
    return 0;
}
