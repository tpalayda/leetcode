#include <iostream>
#include <vector>

//Rectangle Overlap [x1, y1, x2, y2] - x1,y1 bottom left corner & x2,y2 top right corner
bool isRectangleOverlap(const std::vector<int>& rec1, const std::vector<int>& rec2)
{
    //left, bottom, right, top
    return !(rec1[2] <= rec2[0] || rec1[3] <= rec2[1] || rec1[0] >= rec2[2] || rec1[1] >= rec2[3]);
}

int main()
{
    std::cout << isRectangleOverlap({0,0,2,2},{1,1,3,3}) << std::endl; //1
    std::cout << isRectangleOverlap({0,0,1,1},{1,0,2,1}) << std::endl; //0
}
