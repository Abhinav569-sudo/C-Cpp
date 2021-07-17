//constructors
//they are the automatically executed whenever an object is created
#include <bits/stdc++.h>
using namespace std;

class counter{
private:
    unsigned int count;
public:
    counter():count(0){
        cout << "constructor called\n";
    }
    void inc_count(){
        count++;
    }
    int get_count(){
        return count;
    }
};
int main(){
    counter c1, c2;
    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();

    c1.inc_count();
    c2.inc_count();
    c2.inc_count();

    cout << "\ninc 1 = " << c1.get_count();
    cout << "\ninc 2 = " << c2.get_count();
    cout << endl;

    return 0;
}
