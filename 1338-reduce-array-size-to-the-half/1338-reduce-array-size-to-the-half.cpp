class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int>v;
        int ans=0;
        int n1=0;
        unordered_map<int,int>mp1;
        for(int i=0;i<arr.size();i++){
        mp1[arr[i]]++;
        }
        for(auto it:mp1){
            v.push_back(it.second);
            
        }
        if(v.size()==1)return 1;
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            if(ans>=arr.size()/2){
                return n1;
            }
            n1++;
            ans+=v[i];
            
        }
        return 0;
        
    }
};