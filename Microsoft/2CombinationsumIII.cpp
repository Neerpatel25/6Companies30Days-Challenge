//216. Combination Sum III

class Solution {
public:
void help(int ind,int sum,int k,int n,vector<int>&ans1,vector<vector<int>>&ans2){

    if(k==0 && sum==n){
        ans2.push_back(ans1);
        return;
    }
    for(int i=ind;i<=9;i++){
        int h=0;
        for(int j=0;j<ans1.size();j++){
            if(i==ans1[j]){
                h=1;
                break;
            }
        }
        if(h){
            return;
        }
        ans1.push_back(i);
        help(ind+1,sum+i,k-1,n,ans1,ans2);
        ans1.pop_back();
    }
}

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans1;
        vector<vector<int>>ans2;
        help(1,0,k,n,ans1,ans2);
        return ans2;

    }
};
