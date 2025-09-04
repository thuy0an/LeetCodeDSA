/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function(x, y, z) {
    let c1 = Math.abs(z-x), c2 = Math.abs(z-y);
    if( c1 == c2)
        return 0;
    else if (c1 < c2)
        return 1;
    return 2;
};