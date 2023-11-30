#include <iostream>
#include<vector>
#include <utility>
std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
	std::pair<size_t, size_t> maxind;
	long int maxx = matrix[0][0];
	for (size_t i = 0; i < matrix.size(); i++) {
		for (size_t j = 0; j < matrix[0].size(); j++) {
			if (matrix[i][j] > maxx) {
				maxx = matrix[i][j];
				maxind = { i, j };
			}
		}
	}
	return maxind;
}
int main() {
	int rows, columns;
	std::cin >> rows >> columns;
	std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns));
	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < columns; j++) {
			int num;
			std::cin >> num;
			matrix[i][j] = num;
		}
	}
	std::cout << "maxind: " << MatrixArgMax(matrix).first << " " << MatrixArgMax(matrix).second;
}

