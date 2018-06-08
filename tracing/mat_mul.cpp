//
// Created by Eli Bradley on 6/8/18.
//

#include <iostream>
#include <vector>

using matrix = std::vector<std::vector<int> >;

matrix multiply(matrix A, matrix B) {
    int A_rows = A.size();
    int A_cols = A[0].size();
    int B_cols = B[0].size();

    matrix C = matrix(A_rows, std::vector<int>(B_cols));

    for (int i = 0; i < A_rows; i++) {
        for (int k = 0; k < A_cols; k++) {
            // We access all elements of A in stride-1 order.
            int A_element = A[i][k];

            for (int j = 0; j < B_cols; j++) {
                // Access the appropriate elements of B all in a row (not a column!).
                // In consequence, C will also be written in rows.
                C[i][j] = A_element * B[k][j];
            }
        }
    }

    return C;
}

int main(int argc, char **argv) {
    matrix A = matrix(3, std::vector<int>(4));
    matrix B = matrix(4, std::vector<int>(3));

    matrix result = multiply(A, B);
}