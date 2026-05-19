#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <iomanip>

using namespace std;

vector<pair<int, int>> v;

void input_vector(int n)
{
    for (int i = 0; i < n; i++)
    {
        int abscissa, ordinate;
        cin >> abscissa >> ordinate;
        v.push_back({abscissa, ordinate});
    }
}

vector<double> vector_and_pair()
{
    vector<double> result;
    for (const auto &x : v)
    {
        double value = sqrt(x.first * x.first + x.second * x.second);
        result.push_back(value);
    }
    return result;
}

void traverse_vector(vector<double> result)
{
    for (const auto &x : result)
        cout << fixed << setprecision(2) << x << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    vector<double> result = vector_and_pair();
    traverse_vector(result);
    return 0;
}