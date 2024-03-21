#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;
int n;


ull Q(int n)
{
    return n == 1 ? 1 : Q(n-1)+2*n-1;
}

ull BruteForce(int n)
{
    ull res = 1;
    for (ull i = 2; i <= n; ++i)
        res += 2*i-1;
    return res;
}



ull CSC(int n)
{
    return (ull)n*(2*n)/2;
}



int main()
{
    clock_t st, en;
    n = 10'000'000;

    st = clock();
    cout << CSC(n) << "\n";
    en = clock();
    cout << "Thoi gian dung cong thuc cap so cong = " << (en-st)/1000. << " s.\n";

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
