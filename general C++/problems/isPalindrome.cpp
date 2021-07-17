//check whether a number is palindrome or not
#include <bits/stdc++.h>
using namespace std;

/*class Solution {
public:
    bool isPalindrome(int x) {
       long int rev = 0;
       int digit = 0, temp = x;
        if(x<0) {
            return false;
        } else {
            while(x != 0) {
            digit = x % 10;
            rev = rev * 10 + digit;
            x = x/10;
        }
        }
        if(rev == temp) {
            return true;
        } else {
            return false;
        }
    }
};*/

class Solution{
public:
    bool isPalindrome(int x){
        string s = to_string(x);
        if(s == string(s.rbegin(), s.rend())){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    int x, rev;
    cout << "Enter the number: " << endl;
    cin >> x;

    Solution s;
    rev = s.isPalindrome(x);

    if(rev == true){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not palindrome" << endl;
    }
    return 0;
}
