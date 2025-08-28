/**
 * @param {number[][]} grid
 * @return {number[][]}
 */
var sortMatrix = function(grid) {
    const n = grid.length;

    for(let i=0; i <n; i++){
        let tmp =[];
        for(let j=0; i+j <n; j++)
            tmp.push(grid[i+j][j]);
        tmp.sort((a,b)=>b-a);
        for(let j=0; i +j < n; j++)
            grid[i+j][j] = tmp[j];
    }
    for(let j=1; j <n; j++){
        let tmp =[];
        for(let i=0; i+j <n; i++)
            tmp.push(grid[i][i+j]);
        tmp.sort((a,b)=> a-b);
        for(let i=0; i +j < n; i++)
            grid[i][i+j] = tmp[i];
    }
    return grid;
};