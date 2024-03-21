#include <bits/stdc++.h>

using namespace std;

int a[50][50], n;

void createMatrix()
{
    srand(10);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (i == j)
                a[i][j] = 0;
            else
                a[i][j] = rand()%(3*n)+1;
}

void showMatrix()
{
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}


int fitFunction(vector<int> path)
{
    int cost = 0;
    for (int i = 1; i < n; i++)
        cost += a[path[i]][path[i+1]];
    cost +=  a[path[n]][path[1]];
    return cost;
}

void showPath(vector<int> path)
{
    for (int i = 1; i <= n; ++i)
        cout << path[i] << " -> ";
    cout << path[1] << '\n';
}

pair<int,vector<int>> TSP_BruteForce()
{
    int cost = INT_MAX;
    vector<int> path(n+1), res;
    generate(path.begin(), path.end(), [dem = 0]()mutable{return dem++;});
    do{
        int min_v = fitFunction(path);
        if (min_v < cost)
        {
            cost = min_v;
            res = path;
        }
    }while (next_permutation(path.begin()+1, path.end()));
    return {cost, res};
}



int main()
{
    n = 10;
    createMatrix();
    showMatrix();
    cout << "Ket qua la: \n";
    pair<int, vector<int>> result = TSP_BruteForce();
    cout << "Chi phi: " << result.first << '\n';
    cout << "Hanh trinh: ";
    showPath(result.second);

    return 0;
}
