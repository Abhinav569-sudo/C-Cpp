//overloading the binary operators using operator overloading
#include <bits/stdc++.h>
using namespace std;

class Distance{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0),inches(0.0){}
    Distance(int ft ,float inch): feet(ft), inches(inch){}

    void getdist(){
        cout << "\n Enter the feet: "; cin >> feet;
        cout << "\n Enter the inches: "; cin >> inches;
    }
    void display() const{
        cout << feet << "\n" << inches << "\n";
    }
    Distance operator +(Distance)const;
};
Distance Distance::operator +(Distance d2)const{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if(i>=12.0){
        i -=12.0;
        f++;
    }
    return Distance(f, i);
}
int main(){
    Distance dist1, dist3, dist4;
    dist1.getdist();

    Distance dist2(11, 6.25);
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;

    cout << "dist1 = "; dist1.display(); cout << endl;
    cout << "dist2 = "; dist2.display(); cout << endl;
    cout << "dist3 = "; dist3.display(); cout << endl;
    cout << "dist4 = "; dist4.display(); cout << endl;
    return 0;
}
