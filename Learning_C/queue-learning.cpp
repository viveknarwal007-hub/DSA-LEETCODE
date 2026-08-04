#include <iostream>
#include<queue>
using namespace std;

int main() {
    // first in first out structure 
    queue<int> s;
    // functions
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);


    while (!s.empty())

    {
        cout << s.front() << endl ; 
        s.pop();

    }

    

    return 0;
}