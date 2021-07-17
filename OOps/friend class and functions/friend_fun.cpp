//friend functions and class
#include <bits/stdc++.h>
using namespace std;

class box{
    double width;

    public:
        friend void printWidth(box box);
        void setWidth(double wid);

};
//member function definition
void box::setWidth(double wid){
    width = wid;
}
//Note : printWidth() is not a member function of any class.
void printWidth(box box){
    //Because printWidth is the friend of box, it can directly access any member of this class
    cout << "width of box : " << box.width << endl;
}
//main function
int main(){
    box box;
    //set box width without member function
    box.setWidth(10.0);
    //use friend function to print the width
    printWidth(box);
    return 0;
}
