class Solution {
    public long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long k = Math.min(need1, need2);

        long only12 = (long) need1 * cost1 + (long) need2 * cost2;

        long mixed = k * costBoth + (need1-k)* (long) cost1 + (need2-k)* (long) cost2;
    
        long onlyBoth = (long) Math.max(need1, need2) * costBoth;

        return Math.min(only12, Math.min(mixed, onlyBoth)); 
    }
}