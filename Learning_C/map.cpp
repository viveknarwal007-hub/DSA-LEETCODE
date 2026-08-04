#include <iostream>
#include<map>
using namespace std;

int main() {
    // map<key_type , value_type> m ;
    map<string , int> m ;
    // m[key] = value to insert or change 
    m["Tv"] = 102;
    m["phone"] = 10;
    m["tablet"] = 122;
    m["watch"] = 167;
    m["iphone"] = 200;
    

    for(auto p : m){
        cout << p.first << " " << p.second  << endl;
    } // this print lexicographically simple words alphatbetically in key 

    return 0;
}