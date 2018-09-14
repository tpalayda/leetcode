#include <iostream>
#include <vector>

//Shoelace's Formula                  x1,y1                           x2,y2                      x3,y3
double TriangleArea(const std::vector<int>& points1, const std::vector<int>& points2, const std::vector<int>& points3)
{
    return 0.5 * abs(
                    points1[0] * points2[1] +
                    points2[0] * points3[1] + 
                    points3[0] * points1[1] - 
                    points1[1] * points2[0] - 
                    points2[1] * points3[0] - 
                    points3[1] * points1[0] );
}
double largestTriangleArea(const std::vector<std::vector<int>>& points) 
{
    const size_t n = points.size();
    double result = 0;
    for(unsigned i = 0; i < n; ++i)
        for(unsigned j = i+1; j < n; ++j)
            for(unsigned q = j+1; q < n; ++q)
                result = std::max(result, TriangleArea(points[i],points[j],points[q]));
    return result;
}

int main()
{
    std::cout << largestTriangleArea({{0,0},{0,1},{1,0},{0,2},{2,0}}) << std::endl;
}
