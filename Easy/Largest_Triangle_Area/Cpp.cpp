#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    double areaFromThreePoints(vector<int>& p1, vector<int>& p2, vector<int>& p3) {
        return abs((double) (  p1[0] * p2[1] + 
                            p2[0] * p3[1] + 
                            p3[0] * p1[1] - 
                            p1[1] * p2[0] -
                            p2[1] * p3[0] -
                            p3[1] * p1[0])) / 2.0;

    }

    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0;
        double area;
        for(int i = 0; i < points.size() - 2; ++i) {
            for(int j = i + 1; j < points.size() - 1; ++j) {
                for(int k = j + 1; k < points.size(); ++k) {
                    area = areaFromThreePoints(points[i], points[j], points[k]);
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};

int main() {
    vector<vector<int>> points = {{0,0},{0,1},{1,0},{0,2},{2,0}};
    Solution sol;
    cout << sol.largestTriangleArea(points) << endl;
    return 0;
}