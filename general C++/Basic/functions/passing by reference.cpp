//Passing by reference
#include <iostream>
using namespace std;
		//function
void fun(int &x){
    x = 30;
}
int main(){
    int x = 20;
    fun(x);
    cout << "x = " << x;
    return 0;
}
