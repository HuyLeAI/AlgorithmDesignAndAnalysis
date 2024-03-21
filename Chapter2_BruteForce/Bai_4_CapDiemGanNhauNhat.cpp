#include <bits/stdc++.h>

using namespace std;

double distance(vector<int> a, vector<int> b)
{
    return sqrt((a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]) );
}
//vector<double> dis;
vector<vector<int>> BruteForce(vector<vector<int>> a, int n)
{
    double min_v = DBL_MAX;
    vector<vector<int>> res(2);
    for (int i = 0; i < n-1; ++i)
        for (int j = i+1; j < n; ++j)
        {
            double k = distance(a[i], a[j]);
            //dis.push_back(k);
            if(min_v > k)
            {
                min_v = k;
                res[0] = a[i];
                res[1] = a[j];
            }
        }
    return res;
}

int main()
{
    vector<vector<int>> a = {{1, 2}, {2, 3}, {3, 5}, {-1, 5}, {2, 6}, {12, 8}, {-3, -4}, {2, 7}};
    int n = a.size();
    vector<vector<int>> res = BruteForce(a, n);
    for (auto i : res)
    {
        for (auto j : i)
            cout << j << ' ';
        cout << '\n';
    }
    cout << "Khoang cach = " << distance(res[0], res[1]) << '\n';
    for (auto i : dis)
        cout << i << '\n';
    return 0;
}
