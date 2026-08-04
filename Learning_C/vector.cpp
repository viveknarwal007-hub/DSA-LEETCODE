#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,1,5};
    // cout << vec[0];  
    // vector<int> vec(1,5);
    for(int value : vec){  // for each loop 
        cout << value << endl;
    }
    // vectors functions 

    vec.push_back(10); // add element at the end of the vector = 1 10 
    cout << *vec.end()  << endl; 

    return 0;
}