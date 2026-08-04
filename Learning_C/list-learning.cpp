#include <iostream>
#include<list>
#include<vector>
using namespace std;

int main() {
    list<int> l ;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    //u cant use normal for loop for lists 
    // need to use the iterator loops cuz list doesnt have index
    

    for(int x : l){
        cout << x << endl;
    }     // 4 3 1 2 
    

    return 0;
}