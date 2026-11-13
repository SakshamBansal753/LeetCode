class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
  sort(nums.begin(),nums.end());
  int mid,st=0,end=nums.size()-1;
  int index=0;
  while(st<=end){
    mid=st+(end-st)/2;
    if(nums[mid]>=k){
        index=mid;
        end=mid-1;
}else{
  st=mid+1;
}
  }
  return index;
    }
};