#include<bits/stdc++.h>
using namespace std;
 
class solution {
    public:
 void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if(k==0)return;

        vector<int> temp(k);
        for (int i=0;i<k;i++){
            temp[i] = nums[n-k+i];
        }
        for(int i=n-k-1;i>=0;i--){
            nums[i+k] = nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i] = temp[i];
        }
    }
};
    int main(){
        vector<int>nums = {1,2,3,4,5,6,7};
        int k = 2;
        int n = nums.size();

        solution sol;
        sol.rotate(nums , k);

        for(int num :nums){
            cout<<num<<"";
        }
        return 0;
    }