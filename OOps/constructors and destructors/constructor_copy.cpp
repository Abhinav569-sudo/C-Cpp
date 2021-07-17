//copy constructor
#include <bits/stdc++.h>
using namespace std;

class Line{
    public:
        int getLength(void);
        Line(int len); //constructor
        Line(const Line &obj); //copy constructor
        ~Line(); //destructor
    private:
        int *ptr;
};
//Member function definition including constructor
Line::Line(int len){
    cout << "Normal constructor allocating ptr" << endl;
    //allocating memory to the pointer
    ptr = new int;
    *ptr = len; //copy the value
}
Line::Line(const Line &obj){
    cout << "copy constructor allocating ptr" << endl;
    ptr = new int;
    *ptr = *obj.ptr; //copy the value
}
Line::~Line(void){
    cout << "freeing the memory!!" << endl;
    delete ptr;
}
int Line::getLength(void){
    return *ptr;
}
void display(Line obj){
    cout << "Length of line : " << obj.getLength() << endl;
}
//main function
int main(){
    //Line line(10);
    Line line1(10);
    Line line2 = line1;
    //display(line);
    display(line1);
    display(line2);
    return 0;
}
