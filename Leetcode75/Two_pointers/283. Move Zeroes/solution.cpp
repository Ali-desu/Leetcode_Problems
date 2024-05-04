#include <vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        int j = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
            else cnt ++;
        }

        for(int i = j ; i < j + cnt ; i++) nums[i] = 0;
    }
};