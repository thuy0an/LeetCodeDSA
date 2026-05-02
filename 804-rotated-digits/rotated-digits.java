class Solution {
    public int rotatedDigits(int n) {
        return (int) IntStream.rangeClosed(1, n)
                .filter(this::isGood)
                .count();
    }

    private boolean isGood(int num){
        String s = String.valueOf(num);
        boolean check = false;

        for (char c : s.toCharArray()) {
            if (c == '3' || c == '4' || c == '7') return false;
            if (c == '2' || c == '5' || c == '6' || c == '9') check = true;
        }

        return check;
    }
}