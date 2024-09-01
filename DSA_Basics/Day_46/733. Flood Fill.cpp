class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int dist1[4] = {0, 0, -1, 1};
        int dist2[4] = {1, -1, 0, 0};
        int n = image.size(), m = image[0].size();
        int originalColor = image[sr][sc];

        if (originalColor == color) return image; // No need to fill if the color is already the same

        queue<pair<int, int>> q;

        q.push({sr, sc});
        image[sr][sc] = color;

        while (!q.empty()) {
            auto p = q.front(); q.pop();

            for (int i = 0; i < 4; i++) {
                int x = p.first + dist1[i], y = p.second + dist2[i];
                if (x < 0 || y < 0 || x >= n || y >= m || image[x][y] != originalColor) continue;
                q.push({x, y});
                image[x][y] = color;
            }
        }

        return image;
    }
};