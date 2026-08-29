class Solution{
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int votecount = 0;
        for(int num:nums){
            if(votecount == 0){
                candidate = num;
            }
            if(num == candidate){
                votecount++;
            }
            else{
                votecount--;
            }
           

        }
         return candidate;

    }
        
    
};