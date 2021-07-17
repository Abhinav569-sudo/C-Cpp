//reducing unnecessary variables
#include <bits/stdc++.h>
using namespace std;

class counter{
private:
    unsigned int count;
public:
    //constructor with no arguments
    counter():count(0){}
    //constructor with one argument
    counter(int c):count(c){}

    unsigned int get_count(){
        return count;
    }
    counter operator ++(){
        ++count;                //increment count, then
        return counter(count);  //return an unnamed temporary object initialized to this count
    }
};
int main(){
    counter c1, c2;
    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();

    ++c1;            //c1 = 1
    c2 = ++c1;       //c1 = 2, c2 = 2

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();
    return 0;
}
