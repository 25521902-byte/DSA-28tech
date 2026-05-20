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

void reverse_vector(int n)
{
    for (int i = 0; i < n / 2; i++)
        swap(v[i], v[n - i - 1]);
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
    reverse_vector(n);
    traverse_vector();
    return 0;
}