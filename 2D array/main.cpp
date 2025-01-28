#include <iostream>

using namespace std;

void matrix_axb();
void transpose();

int main()
{
    transpose();
}

void matrix_axb()
{
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int b [3][2] = {{3,4},{4,6},{2,7}};
    int c [2][2] = {{0,0},{0,0}};

    for(int i = 0; i < 2; i++){
        for(int k = 0; k < 2; k++){
            for(int j = 0; j < 3; j++){
                c[i][k] += a[i][j] * b[j][k];
            }
            cout << c[i][k] << " ";
        }
        cout << endl;
    }
}
