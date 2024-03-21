#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;
int n;


ull Q(int n)
{
    return n == 1 ? 1 : Q(n-1)+n*n;
}

ull BruteForce(int n)
{
    ull res = 1;
    for (ull i = 2; i <= n; ++i)
        res += i*i;
    return res;
}

int main()
{
    clock_t st, en;
    n = 100'000;

    st = clock();
    cout << BruteForce(n) << "\n";
    en = clock();
    cout << "Thoi gian thuc hien giai thuat truc tiep = " << (en-st)/1000. << " s.\n";

    st = clock();
    cout << Q(n) << "\n";
    en = clock();
    cout << "Thoi gian de quy = " << (en-st)/1000. << " s.\n";



    return 0;
}
