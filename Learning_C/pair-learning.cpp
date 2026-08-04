#include <iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main() {
    // pair<int , int > p  = {2,5};
    // cout << p.first << endl;
    // cout << p.second << endl;
    
    pair<int , pair<char, int> > p  = {2,{'a',3}};
    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;
    return 0;
}