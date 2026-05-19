#include <iostream>
#include <vector>

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

void traverse_vector(int left, int right)
{
    for (auto it = v.begin() + left; it <= v.begin() + right; it++)
        cout << *it << " ";
    cout << endl;
    for (auto it = v.begin() + right; it >= v.begin() + left; it--)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    int l, r;
    cin >> l >> r;
    traverse_vector(l, r);
    return 0;
}