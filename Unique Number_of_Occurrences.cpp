class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>arr2;
        sort(arr.begin(),arr.end());
        int count =0;
        int n = arr.size();
        cout<<arr.size()<<" ";
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] == arr[i+1]){
                count++;
            }
            else{
                arr2.push_back(count);
                count=0;
            }
        }
         if(arr[n-1]!= arr[n-2]){
              arr2.push_back(0);
        }
        else{
            arr2.push_back(count);
        }
        sort(arr2.begin(),arr2.end());
        cout<<arr2.size();
        for(int i =0;i < arr2.size()-1;i++){
            cout<<arr2[i];
            if(arr2[i] == arr2[i+1]){
                return false;
            }
        }
        return true;
    }
};
