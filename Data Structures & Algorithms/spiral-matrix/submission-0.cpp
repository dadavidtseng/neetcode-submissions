class Solution {
   public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // m -> row
        // n -> column
        int m = matrix.size();
        int n = matrix[0].size();

        // m=2, n=2
        // 1,2 -> 1,2,4,3
        // 3,4

        // m=3, n=3
        // 1,2,3 -> 1,2,3,6,9,8,7,4,5
        // 4,5,6
        // 7,8,9

        // m=2, n=4
        // 1,2,3,4 -> 1,2,3,4,8,7,6,5
        // 5,6,7,8

        vector<int> spiral{};
        int left = 0;
        int right = n;
        int top = 0;
        int bottom = m;

        while (left < right && top < bottom) {
            for (int i = left; i < right; i++) {
                spiral.push_back(matrix[top][i]);
            }
            top++;
            for (int j = top; j < bottom; j++) {
                spiral.push_back(matrix[j][right - 1]);
            }
            right--;
            if (!(left < right && top < bottom)) {
                break;
            }

            for (int k = right - 1; k >= left; k--) {
                spiral.push_back(matrix[bottom - 1][k]);
            }

            bottom--;
            for (int r = bottom - 1; r >= top; r--) {
                spiral.push_back(matrix[r][left]);
            }

            left++;
        }

        return spiral;
    }
};
