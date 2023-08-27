#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row * col - 1;

        int mid = start + (end - start) / 2;

        while (start <= end) {

            int element = matrix[mid / col][mid % col];

            if (element == target) {
                return 1;
            }

            if (element < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return 0;
    }
};
int main() {
    Solution s;
    vector<vector<int>> matrix;
    int row, col, val;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> row >> col;
    cout << "Enter the matrix elements in row-major order: ";
    for (int i = 0; i < row; i++) {
        vector<int> rowVector;
        for (int j = 0; j < col; j++) {
            cin >> val;
            rowVector.push_back(val);
        }
        matrix.push_back(rowVector);
    }
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    bool result = s.searchMatrix(matrix, target);
    cout << "The target value is" << (result ? " " : " not ") << "present in the matrix." << endl;
    return 0;
}
