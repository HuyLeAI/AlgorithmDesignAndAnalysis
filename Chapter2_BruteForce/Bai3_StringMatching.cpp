#include <bits/stdc++.h>

using namespace std;


int StringMatching(string S, string pattern)
{
    int m = S.length(), n = pattern.length();
    for (int i = 0; i < m-n+1; i++){
        int j = 0;
        while (j < n && S[i+j] == pattern[j])
        {
            ++j;
        }
        if (j == n)
            return i;

    }

    return -1;
}


int main()
{
    string s = "Le Nhat Huy", pattern = "Nhat";
    cout << StringMatching(s, pattern);
    /*
    size_t pos = s.find(pattern);
    if (pos != string::npos)
        cout << pos;
    else
        cout << -1;
        */
    return 0;
}
