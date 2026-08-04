#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    // functions
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "top element = " << s.top() << endl;


    // while (!s.empty())
    // {
    //     cout << s.top( ) << " ";
    //     s.pop();

    // }
    // cout << endl;


    // SWAP FUNCTION 
    stack<int> s2;
    s2.swap(s);

    cout << "the size of s is = " << s.size() <<endl;
    cout << "the size of s2 is = " << s2.size() <<endl;
    
    return 0;
}