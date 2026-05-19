#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<pair<pair<int, int>, int>> v;

void input_vector(int n)
{
    for (int i = 0; i < n; i++)
    {
        int abscissa, ordinate, altitude;
        cin >> abscissa >> ordinate >> altitude;
        v.push_back({{abscissa, ordinate}, altitude});
    }
}

void traverse_vector()
{
    for (const auto &x : v)
        cout << x.first.first + x.first.second + x.second << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    traverse_vector();
    return 0;
}