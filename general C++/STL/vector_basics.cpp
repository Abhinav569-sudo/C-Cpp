//Different vectors iterators
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> g1;
    for(int i=1; i<=5; i++){
        g1.push_back(i);
    }
    cout << "The output of the begin and end: ";
    for(auto i=g1.begin(); i!=g1.end(); i++){
        cout << *i << " ";
    }
    cout << "\nOutput of the cbegin and cend: ";
    for(auto i=g1.cbegin(); i!=g1.cend(); i++){
        cout << *i << " ";
    }
    cout << "\nOutput of the rbegin and rend: ";
    for(auto i=g1.rbegin(); i!=g1.rend(); i++){
        cout << *i << " ";
    }
    cout << "\nOutput of the crbegin and crend: ";
    for(auto i=g1.crbegin(); i!=g1.crend(); i++){
        cout << *i << " ";
    }
    return 0;
}
