#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second == p2.second) {
        return p1.first > p2.first;
    }
    return p1.second > p2.second;
}

int main()
{
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> v;
    for (auto x : mp) {
        v.push_back(make_pair(x.first, x.second));
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0].first << endl;
    return 0;
}
