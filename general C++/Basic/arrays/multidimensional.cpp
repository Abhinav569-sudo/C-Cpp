//multidimensional array
#include <iostream>
#include <iomanip>
using namespace std;

const int Districts = 4;
const int months = 3;
//main function
int main(){
    int d, m;
    double sales[Districts][months];

    cout << endl;
    for(d=0; d<Districts; d++){
        for(m=0; m<months ;m++){
            cout << "Enter the sales for the district : " << d+1;
            cout << ", months " << m+1 << ": ";
            cin >> sales[d][m];
        }
    }
    cout << "\n\n";
    cout << "                          months\n";
    cout << "                   1         2         3";
    for(d=0; d<Districts; d++){
        cout << "\nDistricts :" << d+1;
        for(m=0; m<months; m++){
            cout << setiosflags(ios::fixed)
                 << setiosflags(ios::showpoint)
                 << setprecision(2)
                 << setw(10)
                 << sales[d][m];
        }
    }
    cout << endl;
    return 0;
}
