class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 0 ; i < numRows ; i++){
            vector<int> temp;
            int temp1= 1;
            temp.push_back(1);
            for(int j = 1 ; j <= i ; j++){
                temp1=temp1*(i-j+1);
                temp1 /= j;
                temp.push_back(temp1);
            }
            ans.push_back(temp);
        }   
        return ans;
    }
};