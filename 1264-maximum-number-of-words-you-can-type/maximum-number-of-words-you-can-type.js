/**
 * @param {string} text
 * @param {string} brokenLetters
 * @return {number}
 */
var canBeTypedWords = function(text, brokenLetters) {
    let brokenSet = new Set(brokenLetters);
    let arr = text.split(" ");
    let res =0;
    for(let word of arr){
        let check = true;
        for(let ch of word)
            if(brokenSet.has(ch)){
                check=false;
                break;
            }
        if(check) res++;
    }

    return res;
};