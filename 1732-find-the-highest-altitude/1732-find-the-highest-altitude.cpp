class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int k = n+1;
        vector<int> arr(k);
        arr[0] = 0;
        for(int i = 1; i< gain.size()+1; i++){
            arr[i] = arr[i-1] + gain [i-1];
        }
        int max = 0;
        for(int i = 0; i<arr.size(); i++){
            if(max<arr[i]){
                max = arr[i];
            }
        }
        return max;
    }
};