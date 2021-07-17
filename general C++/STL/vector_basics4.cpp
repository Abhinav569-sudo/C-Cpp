//Modifiers in vector
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    //fill the array with 10 five times
    v.assign(5, 10);

    cout << "The vector elements are : ";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    //Insert 15 to the last position
    v.push_back(15);
    int n=v.size();
    cout << "\nThe last element is : " << v[n-1];
    //Removes the last elements
    v.pop_back();
    //prints the vector
    cout << "\nThe vector elements are : ";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    //Insert 5 at the beginning
    v.insert(v.begin(), 5);
    cout << "\nThe first element is : " << v[0];
    //Remove the first element
    v.erase(v.begin());
    cout << "\nThe first element is : " << v[0];
    //inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is : " << v[0];
    //Insert 20 at the back
    v.emplace_back(20);
    cout << "\nThe last element is : " << v[n-1];
    //Erases the vector
    v.clear();
    cout << "\nVector size after erase() : " << v.size();

    //Two vector to perform the swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);

    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << "\n\nVector 2: ";
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    //swap v1 and v2
    v1.swap(v2);
    cout << "\nAfter swap \nVector 1: ";
    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << "\nAfter swap \nVector 2: ";
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    return 0;
}
