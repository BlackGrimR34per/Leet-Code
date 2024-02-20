/**
 * @param {Function} fn
 * @return {Function}
 */

// ... is a spread operator that maps each input to a value
function memoize(fn) {
    let mapping = new Map()
    return function(...args) {
        let input = JSON.stringify(args);
        if (!mapping.get(input)){
            let output = fn(...args);
            mapping.set(input, output);
            return output;
        }
        return mapping.get(input);
    }
}

/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */