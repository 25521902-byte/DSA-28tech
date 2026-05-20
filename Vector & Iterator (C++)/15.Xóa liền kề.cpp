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

vector<int> unique_vector()
{
    vector<int> result;
    result.push_back(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[i - 1])
            result.push_back(v[i]);
        else
            continue;
    }
    return result;
}

void traverse_vector(vector<int> result)
{
    for (const auto &x : result)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    vector<int> result = unique_vector();
    traverse_vector(result);
    return 0;
}