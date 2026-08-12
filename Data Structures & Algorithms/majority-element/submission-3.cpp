class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=0;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                el=nums[i];
                count+=1;
            }
            else if(nums[i]==el){
                count+=1;
            }
            else{
                count-=1;
            }
        }
        return el;
    }
};