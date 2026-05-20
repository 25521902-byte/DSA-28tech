#include <iostream>
#include <vector>
#include <utility>

using namespace std;

char a[10005];
vector<pair<char, int>> v;

void input_array(int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void frequency_counting(int n)
{
    for (int i = 0; i < n; i++)
    {
        bool exist = false;
        for (auto &y : v)
        {
            if (y.first == a[i])
            {
                exist = true;
                y.second++;
                break;
            }
        }
        if (!exist)
            v.push_back({a[i], 1});
    }
}

void traverse_vector()
{
    cout << v.size() << endl;
    for (const auto &x : v)
        cout << x.first << " " << x.second << endl;
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_array(n);
    frequency_counting(n);
    traverse_vector();
    return 0;
}