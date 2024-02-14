/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let res = init;
    for (let index = 0; index < nums.length; index++){
        res = fn(res, nums[index]);
    }
    return res;
};