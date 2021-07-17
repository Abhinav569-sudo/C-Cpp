//capacity functions in the vector
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    for(int i=1; i<=5; i++){
        v.push_back(i);
    }
    cout << "Size : " << v.size();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nMax_size : " << v.max_size();
    //To resize the vector
    v.resize(4);
    cout << "\nSize : " << v.size();
    //check if the vector is empty or not
    if(v.empty() == false){
        cout << "\nVector is not empty";
    }else{
        cout << "\nVector is empty";
    }
    //shrink the vector
    v.shrink_to_fit();
    cout << "\nThe elements are : ";
    for(auto it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    return 0;
}
