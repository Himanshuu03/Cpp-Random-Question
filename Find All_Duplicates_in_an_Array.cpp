class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>arr2;
        int count;
        for(int i =0;i<arr.size()-1;i++){
            if(arr[i] == arr[i+1]){
                arr2.push_back(arr[i]);
            }
        } 
        return arr2;
    }
};
