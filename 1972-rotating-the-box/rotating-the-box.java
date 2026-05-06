class Solution {
    public char[][] rotateTheBox(char[][] box) {
        int m = box.length;
        int n = box[0].length;

        for (int r = 0; r < m; r++) {
            int p = n - 1; // vị trí đặt đá '#'

            for (int c = n - 1; c >= 0; c--) {
                if (box[r][c] == '*') {
                    p = c - 1; // reset sau obstacle
                } else if (box[r][c] == '#') {
                    // swap về vị trí p
                    char temp = box[r][p];
                    box[r][p] = '#';
                    box[r][c] = temp;
                    p--;
                }
            }
        }

        // Step 2: rotate 90° clockwise
        char[][] res = new char[n][m];

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                res[c][m - 1 - r] = box[r][c];
            }
        }

        return res;
    }
}