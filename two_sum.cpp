class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int,int> umap;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            
            int num2 = target - nums[i];
            
            if(umap.find(num2) != umap.end()){
                return {umap[num2],i};
            }
            else{
                umap[nums[i]] = i;
            }
        }
        return {0,0};
    }
};
