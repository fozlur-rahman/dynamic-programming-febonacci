#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
        return 1;
    int fibo1 = fibo(n - 1);
    int fibo2 = fibo(n - 2);

    int fiboResult = fibo1 + fibo2;
    return fiboResult;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}

// use sort cut for febonacci series
/*
#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}
*/
