iclass Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        if (triangle.empty())
            return 0;

        for (int i = triangle.size() - 1 - 1; i >= 0; -- i) {

            for (int j = 0; j < triangle[i].size(); ++ j) {

                triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
            }
        }

        return triangle[0][0];
    }
};
