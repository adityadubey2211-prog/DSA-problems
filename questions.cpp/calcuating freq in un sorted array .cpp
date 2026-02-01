# include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>& nums){
    for(int i = 0; i<nums.size(); i++){
        for(int j = 0; j<nums.size()-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j], nums[j+1]);
            }
        }
    }
}
int binarysearch_left(vector<int>& nums, int st, int end, int x){
    int count = 0;
    if(st>end){
        return -1;
    }
    if(st<end){
        int mid = st + (end - st)/2;
        if(nums[mid] == x){
            int left =  binarysearch_left(nums, st, mid-1, x);
            if(left == -1){
                return mid;
            }
            else{
                return left;
            }
        }
        else if(nums[mid]>x){
            return binarysearch_left(nums, st, mid-1, x);
        }
        else{
            return binarysearch_left(nums, mid+1, end, x);
        }
        return count;
    }
}
int binarysearch_right(vector<int>& nums, int st, int end, int x){
    if(st>end){
        return -1;
    }
    if(st<=end){
        int mid = st + (end - st)/2;
        if(nums[mid] == x){
            int right =  binarysearch_right(nums, mid+1, end, x);
            if(right == -1){
                return mid;
            }
            else{
                return right;
            }
        }
        else if(nums[mid]>x){
            return binarysearch_right(nums, st, mid-1, x);
        }
        else{
            return binarysearch_right(nums, mid+1, end, x);
        }
    }
}
int main (){
    vector<int> nums = {3,2,4,5,3,3,4,5,3,46,43,4,3};
    int x = 3;
    bubblesort(nums);
    int first = binarysearch_left(nums, 0, nums.size()-1, x);
    int last = binarysearch_right(nums, 0, nums.size()-1, x);
    if(first == -1){
        cout<<"-1";
    }
    else{
        cout<<last - first + 1;
    }
    return 0;
}