/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubarray = function(nums) {
    let n = nums.length;
    let l=0, maxLen =0;
    let check =0;
    for(let r=0; r< n; r++){
        if( nums[r] ==0) check++;
        while(check >1){
            if(nums[l]==0) check--;
            l++;
        }

        maxLen= Math.max(maxLen, r-l);
    }
    return maxLen;
};