/**
 * @param {string} s
 * @return {boolean}
 */
var doesAliceWin = function(s) {
    return [...s].some( c => "ueoai".includes(c));
};