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
		friend class Govmt;  //initializing friend class
	private :
		void intro(){
			cout << "my name is " << name << endl;
			cout << "my age is " << age << endl;
		}
};

class govmt{
	public :
		void hackerman(person p3){
			cout << "The name of the person is :" << p3.name << endl;
			cout << "The age is : " << p3.age << endl;
		}
};
void person::printMarks(int marks){
	cout << "you got marks: " << marks << endl;
}

int main(){
	//friend class object
	person p3;
	p3.name = "Abhinav";
	p3.age = 20;
	
	govmt g;
	g.hackerman(p3);
	return 0;
}
