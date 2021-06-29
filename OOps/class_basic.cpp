#include <iostream>
using namespace std;

//class creation
class person{
	public : 
		string name;
		int age;
		void func(){
			intro();
		}
		void printMarks(int marks); //function prototype
	private :
		void intro(){
			cout << "my name is " << name << endl;
			cout << "my age is " << age << endl;
		}
};
void person::printMarks(int marks){
	cout << "you got marks: " << marks << endl;
}

int main(){
	person p;
	p.name = "abhinav";
	p.age = 20;
	
	person p2;
	p2.name = "ayush";
	p2.age = 18;
	
	p.func();
	p2.func();
	p.printMarks(100);
	return 0;
}
