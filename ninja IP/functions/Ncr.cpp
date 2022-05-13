#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);

    int result = fact_n / (fact_r * fact_n_r);
    cout << result << endl;

    /*
    int fact_n = 1;
    for (int i = 1; i <= n; i++)
    {
        fact_n = fact_n * i;
    }

    int fact_r = 1;
    for (int i = 1; i <= r; i++)
    {
        fact_r = fact_r * i;
    }

    int fact_n_r = 1;
    for (int i = 1; i <= n - r; i++)
    {
        fact_n_r = fact_n_r;
    }

    cout << fact_n / (fact_r * fact_n_r) << endl;
    */
}