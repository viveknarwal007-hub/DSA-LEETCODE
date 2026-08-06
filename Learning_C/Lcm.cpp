#include <iostream>
using namespace std;
int gcdrec(int a  ,int  b){
    if(a==b) return a ;
    if(a==0) return b;
    if(b==0) return a;
    if(a>b)  return gcdrec(a%b, b);
    if(b>a)  return gcdrec(a,b%a);

}
int lcm(int a , int b){
     if (a == 0 || b == 0)  return 0;
    int gcd = gcdrec(a,b);
    return (a/gcd)*b;
}

int main() {
    int a = 20 ;
    int b  = 28;
    cout << gcdrec(a,b) << endl;
    cout << lcm(a,b) << endl;

    return 0;
}