NOTE!!!!

insert(nums[i]).second -> checks if nums[i] was successfully inserted.
!seen.insert(nums[i]).second means "If nums[i] was already in the set", return true 
(because we found a duplicate within the given range k).

unordered_set<int> returns a pair:
first: An iterator pointing to the element in the set.
second: A boolean (true or false).
true → Insertion was successful (element was not already present).
false → Element already existed in the set (duplicate found).



class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){   
            if(i>k) s.erase(nums[i-k-1]);
            if(!s.insert(nums[i]).second) return true;
        }
        return false;
    }
};
