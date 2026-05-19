#include <iostream>
#include <vector>
#include <algorithm>

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

void reverse_vector()
{
    reverse(v.begin(), v.end());
}

void reverse_vector(int left, int right)
{
    reverse(v.begin() + left, v.begin() + right + 1);
}

void traverse_vector()
{
    for (const auto &x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    int l, r;
    cin >> l >> r;
    reverse_vector();
    traverse_vector();
    reverse_vector(l, r);
    traverse_vector();
    return 0;
}