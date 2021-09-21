#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int row1, col1;
    cin >> row1 >> col1;
    int a[row1][col1];
    for(int i=0; i<row1; i++) for(int j=0; j<col1; j++) cin >> a[i][j];

    int row2, col2;
    cin >> row2 >> col2;
    /* 
            Resultant matrix
            ───┬────────────
               C[r1][c2]
           ┌───┴───────────┐
        A[r1][c1] * B[r2][c2]
               └───┬───┘
        Multiplication is possible iff c1 == r2 => true

        Dimensions of resultant matrix are r1 and c2

     */
    if(col1 == row2)
    {
        int b[row2][col2];
        for(int i=0; i<row2; i++) for(int j=0; j<col2; j++) cin >> b[i][j];

        int c[row1][col2];

        /* 
            The definition of matrix multiplication is that if C = AB for an 
            n × m matrix A and an m × p matrix B, then C is an n × p matrix 
            with entries

            C[i][j] = Summation(from 0 to m) of a[i][k]*b[k][j]
         */
        
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                c[i][j] = 0;
                for(int k=0; k<col1; k++)
                {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }

        cout << "Product: " << endl;
        for(int i=0; i<row1; i++) 
        {
            for(int j=0; j<col2; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
        
    }
    else
    {
        cerr << "Matrices of given dimensions are incompatible for multiplication.";
        cerr << endl;
    }
    
}