#include <iostream>
using namespace std;
int gcd(int a  ,int  b){
    if(a==b) return a ;
    if(a==0) return b;
    if(b==0) return a;
    if(a>b)  return gcd(a%b, b);
    if(b>a)  return gcd(a,b%a);

}

int main() {
    int a = 20 ;
    int b  = 0;
    cout << gcd(a,b) << endl;

    return 0;
}