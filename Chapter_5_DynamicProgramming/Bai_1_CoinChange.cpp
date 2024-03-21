#include <iostream>

using namespace std;


int main()
{
    int c[] = {5, 1, 2, 10, 6, 2};
    int n = sizeof(c)/4;
    int F[n];
    F[0] = 0, F[1] = c[0];
    for (int i = 2; i <= n; ++i)
        F[i] = max(F[i-1], F[i-2]+c[i-1]);
    cout << F[n];

    /// Tìm các đồng lấy được
    cout << "\nCac dong: ";
    for (int i = n; i >= 0; --i)
        if (F[i] == F[i-1])
            continue;
        else{
            cout << c[i-1] << ' ';
            --i;
        }
    return 0;
}
