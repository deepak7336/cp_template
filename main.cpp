#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    for (int ii = 1; ii <= t; ii++)
    {
        int n, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        multiset<int> ms;
        multiset<int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            it = ms.lower_bound(arr[i]);
            if (it == ms.begin())
            {
                ms.insert(arr[i]);
                ans++;
            }
            else
            {
                it--;
                ms.erase(it);
                ms.insert(arr[i]);
            }
        }
        cout << "#" << ii << " " << ans << "\n";
    }

    return 0;
}
