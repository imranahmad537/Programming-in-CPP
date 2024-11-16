#include <iostream>
using namespace std;

int main() {
    // Initialize matrices A (3x2) and B (2x3)
    int A[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int B[2][3] = {{7, 8, 9}, {10, 11, 12}};

    // Initialize the result matrix C (3x3)
    int C[3][3] = {0};

    // Perform matrix multiplication
    for (int i = 0; i < 3; i++) { // Iterate over rows of A
        for (int j = 0; j < 3; j++) { // Iterate over columns of B
            for (int k = 0; k < 2; k++) { // Iterate over columns of A and rows of B
                
				C[i][j] += A[i][k] * B[k][j]; // for 1st iteration k =
            }
        }
    }

    // Output the result matrix C
    cout << "Result of A[3][2] * B[2][3] = C[3][3] is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Description : 
Matrix Multiplication Logic:

The result matrix C will have dimensions 3x3.
A triple nested loop is used to calculate the product of A and B:
The outer loop iterates over the rows of A.
The middle loop iterates over the columns of B.
The inner loop calculates the dot product between the corresponding row of A 
and column of B.

For C[i][j], the element in row i and column j of the result matrix C,
 we calculate:
C[i][j]=A[i][1]×B[1][j]+A[i][2]×B[2][j]

In words:

For each element of the resulting matrix, you take 
the corresponding row of matrix A and the corresponding column of matrix B.
Multiply the elements in the row and column together and sum the results.

C[0][0]=(1×7)+(2×10)=7+20=27
C[0][1]=(1×8)+(2×11)=8+22=30
and so on
*/

