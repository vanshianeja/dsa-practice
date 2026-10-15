class Solution {
public:
    int maximumWealth(vector<vector<int>>& wealth) {
        int max = 0;
        for(int i = 0; i<wealth.size(); i++){
            int sum = 0;
            for(int j = 0; j<wealth[i].size(); j++){
                
                sum = sum + wealth[i][j];
            }
            if (max<sum){
                max = sum;
            }
        }
        return max;
    }
};