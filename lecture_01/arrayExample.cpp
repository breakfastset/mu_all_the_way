#include <iostream>

using namespace std;

int main()
{
    int myArray[5] = {11, 22, 33, 44, 55};
    for(int i = 0; i < 5; i++)
    {
        cout << myArray[i] << endl;
    }

    cout << endl;
    int matrix[2][3] = {
        {11, 12, 13},
        {21, 22, 23}
    };

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << "  ";
        }
        cout << endl;  // end of row
    }

    return 0;
}