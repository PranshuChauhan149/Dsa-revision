#include<iostream>
using namespace std;
class Solution {
public:

    void rever(vector<int>&nums,int i,int j){
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k%n;
         rever(nums,0,n-1);
         rever(nums,0,k-1);
         rever(nums,k,n-1);
    }
};

// 7,6,5,4,3,2,1
// 5,6,7,1,2,3,4

int main(){

}