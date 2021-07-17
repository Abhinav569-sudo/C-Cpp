//Function overriding
#include <bits/stdc++.h>
using namespace std;

class Animal{
public:
    void feeding(){
        cout << "Eat food" << endl;
    }
    void speak(){
        cout << "make a sound" << endl;
    }
};
class Dog : public Animal{
public:
    void speak(){
        Animal::speak();
        //cout << "woof woof!!" << endl;
    }
    void do_trick(){
        cout << "sit" << endl;
    }
};
class Oliver : public Dog{};

int main(){
    Oliver d;
    d.speak();
    d.feeding();
    d.speak();
    d.do_trick();
    return 0;
}
