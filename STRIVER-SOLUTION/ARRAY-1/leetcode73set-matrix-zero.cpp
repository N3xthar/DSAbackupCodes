#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // not for finding the minimal approach   ! !!!!

    // int a = 0;
    // int b = 0;

    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}};


    int n = matrix.size();    // for the rows
    int m = matrix[0].size(); // for the column brother !!!
b
    // now i am printing the matrix using the for loop brother  !!!

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    

    // now i am checking the which arrow has the o rows and the column !!

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (matrix[i][j] == 0)

            {
                rows[i] = 0;
                column[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if ((rows[i] ==  0 ) || (column[j] == 0))
                matrix[i][j] = 0;
        }
    }

    // printing the resultant matrix is

    cout << " \n The  resultant matrix is \n ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}