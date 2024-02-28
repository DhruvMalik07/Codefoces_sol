#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_map<string, set<string>> m;
    while (n--)
    {
        string name;
        cin >> name;
        int t;
        cin >> t;
        string temp;
        while (t--)
        {
            cin >> temp;
            m[name].insert(temp);
        }
    }
    
    cout<<m.size()<<endl;
    for (auto &entry : m)
    {
        string name = entry.first;
        set<string> &words = entry.second;

        for (const string &word : words)
        {
            for (int l = 1; l < word.size(); l++)
            {
                if (words.find(word.substr(l)) != words.end())
                {
                    words.erase(word.substr(l));
                }
            }
        }
        
        cout << name << " " << words.size() << " ";
        for (const string &word : words)
        {
            cout << word << " ";
        }
        cout << endl;
    }

    
}

int main()
{
    int t = 1;
    while (t--)
        solve();

    return 0;
}
