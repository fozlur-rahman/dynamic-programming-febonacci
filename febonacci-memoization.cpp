#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int save[N];

int fibo(int n)
{
    if (n <= 1)
        return 1;

    if (save[n] != -1)
        return save[n];
    int fibo1 = fibo(n - 1);
    int fibo2 = fibo(n - 2);

    save[n] = fibo1 + fibo2;
    return save[n];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= N; i++)
    {
        save[i] = -1;
    }
    fibo(n);
    cout << save[n];
    return 0;
}