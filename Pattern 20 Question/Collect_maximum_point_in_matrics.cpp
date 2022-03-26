#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// Function to check if cell (i, j) is valid and safe to visit
bool isSafe(vector<vector<int>> const &mat, int i, int j) {
    return !(i < 0 || i >= mat.size() || j < 0 || j >= mat[0].size() ||
            mat[i][j] == -1);
}
 
// Function to collect the maximum number of ones starting from cell mat[i][j]
int findMaximum(vector<vector<int>> const &mat, int i, int j)
{
    // base case
    if (mat.size() == 0) {
        return 0;
    }
 
    // return if cell (i, j) is invalid or unsafe to visit
    if (!isSafe(mat, i, j)) {
        return 0;
    }
 
    // if the row is odd, we can go left or down
    if (i & 1)
    {
        return mat[i][j] + max(findMaximum(mat, i, j - 1),
                            findMaximum(mat, i + 1, j));
    }
    // if the row is even, we can go right or down
    else {
        return mat[i][j] + max(findMaximum(mat, i, j + 1),
                        findMaximum(mat, i + 1, j));
    }
}
 
int main()
{
    vector<vector<int>> mat =
    {
        { 1, 1, -1, 1, 1 },
        { 1, 0, 0, -1, 1 },
        { 1, 1, 1, 1, -1 },
        { -1, -1, 1, 1, 1 },
        { 1, 1, -1, -1, 1 }
    };
 
    cout << "The Maximum value collected is " << findMaximum(mat, 0, 0);
 
    return 0;
}