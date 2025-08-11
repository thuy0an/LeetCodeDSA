class Solution {
public:
    int mod = 1e9 +7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> curBit;
        int rep=1;
        while(n){
            if( n%2 ==1)
                curBit.push_back(rep);
            n/=2;
            rep*=2;
        }
        vector<int> res;
        for(vector<int> q : queries){
            int cur =1;
            for(int i=q[0]; i <= q[1]; i++)
                cur= static_cast<long long>(cur) * curBit[i] % mod;
            res.push_back(cur);
        }
        return res;
    }
};