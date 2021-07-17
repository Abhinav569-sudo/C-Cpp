//Getting return value for ++ operator
#include <bits/stdc++.h>
using namespace std;

class counter{
private:
    unsigned int count;
public:
    //constructor
    counter():count(0){}
    unsigned int get_count(){
        return count;
    }
    counter operator ++(){
        ++count;
        counter temp;
        temp.count = count;
        return temp;
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
