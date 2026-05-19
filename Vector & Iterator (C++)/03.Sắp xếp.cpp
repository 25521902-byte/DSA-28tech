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

void increasing_sort(int n)
{
    sort(v.begin(), v.end());
}

void decreasing_sort(int n)
{
    sort(v.begin(), v.end(), greater<int>());
}

void traverse_vector()
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    increasing_sort(n);
    traverse_vector();
    decreasing_sort(n);
    traverse_vector();
    return 0;
}