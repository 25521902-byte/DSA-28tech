#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> binary_converting(long long value)
{
    vector<char> result;
    for (int i = 0; i < 64; i++)
    {
        int remainder = value % 2;
        result.push_back(remainder + '0');
        value /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}

void query(int t)
{
    for (int i = 0; i < t; i++)
    {
        long long value;
        cin >> value;
        vector<char> binary_number = binary_converting(value);
        for (const auto &x : binary_number)
            cout << x;
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    query(t);
    return 0;
}
