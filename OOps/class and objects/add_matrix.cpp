#include <iostream>
using namespace std;

class matrix{
  public:
    int arr[3][3];
    //parametrized constructor
    matrix(int m){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                arr[i][j] = (i+j)*m;
            }cout << endl;
        }
    }
    void display(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << arr[i][j] << " ";
            }cout << endl;
        }
    }
    matrix operator +(matrix m){
    	matrix result(0);
    	for(int i=0; i<3; i++){
    		for(int j=0; j<3; j++){
    			result.arr[i][j] = arr[i][j] + m.arr[i][j]; 
			}
		}
    	return result;
	}
};

int main() {
	//code
	matrix a(1);
	matrix b(2);
	
	a.display();
	cout << "****\n";
	b.display();
	cout << "====\n";
	matrix c=a+b;
	c.display();
	
	return 0;
}
