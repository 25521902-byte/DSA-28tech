#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;

void input_vector(int row)
{
    v.resize(row + 1);
    for (int i = 1; i <= row; i++)
    {
        int column;
        cin >> column;
        v[i].resize(column + 1);
        for (int j = 1; j <= column; j++)
        {
            cin >> v[i][j];
        }
    }
}

void traverse_vector(int q)
{
    for (int i = 0; i < q; i++)
    {
        int row, column;
        cin >> row >> column;
        cout << v[row][column] << endl;
    }
}

int main()
{
    int n, q;
    cin >> n >> q;
    input_vector(n);
    traverse_vector(q);
    return 0;
}