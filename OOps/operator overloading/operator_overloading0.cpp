//overloading an unary operator
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class counter{
private:
    unsigned int count;
public:
    //constructor
    counter(): count(0){

    }
    unsigned int get_count(){
        return count;
    }
     //increment (prefix)
    void operator ++(){
        ++count;
    }
};
int main(){
    counter c1, c2;
    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();

    ++c1;
    ++c2;
    ++c2;

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();
    return 0;
}
