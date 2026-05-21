#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<char> hexadecimal_converting(long long value)
{
    if (!value)
        return {'0'};
    vector<char> result;
    string hexadecimal = "0123456789abcdef";
    while (value)
    {
        int remainder = value % 16;
        result.push_back(hexadecimal[remainder]);
        value /= 16;
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
        vector<char> result = hexadecimal_converting(value);
        for (const auto &x : result)
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
