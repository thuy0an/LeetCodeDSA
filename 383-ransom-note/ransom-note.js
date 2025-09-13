/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    let hash ={};
    for(let c of magazine)
        hash[c] = (hash[c] || 0) + 1;
    for(let c of ransomNote){
        if( !hash[c] || hash[c] <= 0)
            return false;
        hash[c]--;
    }
    return true;
};