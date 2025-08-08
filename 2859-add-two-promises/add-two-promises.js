/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
    return Promise.all([promise1,promise2]).then(([v1, v2]) => v1 + v2);


    /*
    Hoặc dùng
    const a = await promise1;
    const b = await promise2;
    console.log(a + b);
     */
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */