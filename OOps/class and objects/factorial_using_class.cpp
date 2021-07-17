#include <iostream>
using namespace std;

class fact{
	private:
		int fact = 1;
		int num1;
	public:
		int factorial();
		void input();
		void display();
};
void fact::input(){
	cout << "\nEnter the number :";
	cin >> num1;
}
int fact::factorial(){
		while (num1 > 0){
			fact = fact * num1;
			num1--;
		}
}
void fact::display(){
	cout << fact << endl;
}

int main(){
	
	fact f;
	f.input();
	f.factorial();
	f.display();
	
	return 0;
}
