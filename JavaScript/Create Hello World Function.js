/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    // ...args implies that the function can receive any number of inputs
    return function(...args) {
        return "Hello World"
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */