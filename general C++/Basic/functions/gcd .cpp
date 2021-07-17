#include <iostream>
using namespace std;
//recursive method to find the gcd
long int gcd_recur(long int a, long int b){
    return b==0 ? a : gcd_recur(b, a%b);
}
//iterative method to find the gcd
int gcd_itera(long int a,long int b){
    long int rem = INT_MAX;
    do{
        rem = a%b;
        a = b;
        b = rem;
    }while(rem != 0);
        cout << a << endl;
}

int main() {
	int a, b;
	cin >> a >> b;
    //cout << gcd_itera(a, b);
	cout << gcd_recur(a, b);

	return 0;
}

