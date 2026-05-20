#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> v;

void input_vector(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < m; j++)
        {
            int value;
            cin >> value;
            row.push_back(value);
        }
        v.push_back(row);
    }
}

void reverse_vector(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
}

void traverse_vector(int n, int m)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    input_vector(n, m);
    reverse_vector(n, m);
    traverse_vector(n, m);
    return 0;
}