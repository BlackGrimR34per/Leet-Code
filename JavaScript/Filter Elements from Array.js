/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const filteredArr = [];
    for (let index = 0; index < arr.length; index++){
        if (fn(arr[index], index))
            filteredArr.push(arr[index]);
    }
    return filteredArr;
};