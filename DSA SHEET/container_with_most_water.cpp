#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int temp = 0 , tempmax = 0 ;
        int i = 0 , j = n-1 ;
        while(i<j){
            if(height[i]<height[j]){
                temp = height[i]*(j-i);
                tempmax = max(temp,tempmax);
                i++;
            }
            else{
                temp=height[j]*(j-i);
                tempmax= max(temp,tempmax);
                j--;
            }

        }
        return tempmax;
        
        
    }
};

int main() {
    vector<int> height = {4,3,2,1,4};

    Solution obj;               // Create object of Solution class

    int ans = obj.maxArea(height); // Call the member function

    cout << ans << endl;

    return 0;
}
