/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */

// Easiest method is to apply arr.map to automatically apply
var map = function(arr, fn) {
    const output = [];
    for (let index = 0; index < arr.length; index++){
        output.push(fn(arr[index], index));
    }
    return output;
};