#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> v;

void input_vector(int n)
{
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    cout << *min_element(v.begin(), v.end()) << endl
         << *max_element(v.begin(), v.end()) << endl
         << accumulate(v.begin(), v.end(), 0LL);
    return 0;
}