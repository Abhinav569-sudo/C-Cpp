//Inheritance
#include <bits/stdc++.h>
using namespace std;
//Base class
class Animal{
public:
    int age;
    void breadth(){
        cout << "taking O2 and giving out CO2" << endl;
    }
};
//Inheriting the class animal
//Derived class
class Dog : public Animal{

};

int main(){
    Dog d;
    d.age = 5;
    cout << d.age << endl;
    d.breadth();
    return 0;
}
