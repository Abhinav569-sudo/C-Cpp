#include <iostream>
using namespace std;

class numbers{
	private :
		int Sum=0;
	public :
		void sum();
		void display();
};
void numbers::sum(){
	int i;
	for(i=1 ;i<=100 ;i++){
		if(i%2 != 0){
			Sum +=i;
		}
	}
}
void numbers::display(){
	cout << "sum of the odd numbers are: " << Sum << endl;
}

int main(){
	numbers s;
	s.sum();
	s.display();
	
	return 0; 
}
