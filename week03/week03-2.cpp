//week03-2 283. Move Zeroes
//move 0 to the right = no 0 goes to left and add 0
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; ///target nums[k]
        for (int num : nums){
            if (num != 0){///not 0 go left
                nums[k] = num;///num left
                k++;///next line
            }
        }
        //all remain become 0
        for (int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
