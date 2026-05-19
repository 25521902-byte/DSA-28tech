#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void input_vector(int m)
{
    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
}

void erase_and_insert(int manipulation)
{
    if (manipulation == 1)
    {
        int position, value;
        cin >> position >> value;
        if (position >= 0 && position <= v.size())
            v.insert(v.begin() + position, value);
    }
    else if (manipulation == 2)
    {
        int position;
        cin >> position;
        if (position >= 0 && position < v.size())
            v.erase(v.begin() + position);
    }
}

void traverse_vector()
{
    for (const auto &x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int m;
    cin >> m;
    input_vector(m);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int manipulation;
        cin >> manipulation;
        erase_and_insert(manipulation);
    }
    if (v.empty())
        cout << "EMPTY" << endl;
    else
        traverse_vector();
    return 0;
}