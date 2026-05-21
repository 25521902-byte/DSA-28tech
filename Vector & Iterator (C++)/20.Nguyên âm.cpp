#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<pair<char, int>> v;

void input_vector(int n)
{
    for (int i = 0; i < n; i++)
    {
        char c;
        int value;
        cin >> c >> value;
        v.push_back({c, value});
    }
}

void traverse_vector()
{
    bool exist = false;
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        if (it->first == 'u' || it->first == 'e' || it->first == 'o' || it->first == 'a' || it->first == 'i')
        {
            cout << it->first << " " << it->second << endl;
            exist = true;
        }
    }
    if (!exist)
        cout << "28tech";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    traverse_vector();
    return 0;
}
