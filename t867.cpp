#include <iostream>
#include <vector>

std::vector<std::vector<int>> transpose(const std::vector<std::vector<int>>& A)
{
    size_t col_num = A.size();
    size_t row_num = A[0].size();
    std::vector<std::vector<int>> result(row_num, std::vector<int>(col_num, 0));

    for(unsigned i = 0; i < row_num; ++i)
        for(unsigned j = 0; j < col_num; ++j)
            result[i][j] = A[j][i];
    return result;
}

int main()
{
    const std::vector<std::vector<int>> A =
    {{1,2,3},
     {4,5,6},
     {7,8,9}};
    std::vector<std::vector<int>> result = transpose(A);
    /*
    1 4 7
    2 5 8
    3 6 9
    */
    for(const auto& vector : result)
    {
        for(const auto& el : vector)
            std::cout << el << " ";
        std::cout << "\n";
    }

    const std::vector<std::vector<int>> B =
    {{1,2,3},
     {4,5,6}};
    result = transpose(B);
    /*
    1 4
    2 5
    3 6
    */
    for(const auto& vector : result)
    {
        for(const auto& el : vector)
            std::cout << el << " ";
        std::cout << "\n";
    }
}
