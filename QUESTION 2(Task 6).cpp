#include <iostream>
using namespace std;
int main()
{
    int row, column;
    /*prompts the user to enter the number of row and column*/
    cout << "Enter the number of row" << endl;
    cin >> row;

    cout << "Enter the number of column" << endl;
    cin >> column;

    if (row > 3)
    {
        cout << "number of rows can not exceed 3" << endl;
        return 0;
    }
    if (column > 3)
    {
        cout << "number of columns can not exceed 3" << endl;
    }

    double **array = new double *[row];

    for (int p = 0; p < row; ++p)
    {
        array[p] = new double[column];
    }

    cout << "values of the array are: " << endl;

    for (int i = 0; i < row; ++i)
    {
        for (int b = 0; b < column; ++b)
        {

            cout << "Enter the value of your array [" << i << "][" << b << "]:";
            cin >> array[i][b];
        }
    }
    cout << "values of the array are: " << endl;

    for (int i = 0; i < row; ++i)
    {
        for (int b = 0; b < column; ++b)
        {
            cout << array[i][b] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; ++i)
    {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}
