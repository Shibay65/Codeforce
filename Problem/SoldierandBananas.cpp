#include <iostream>
using namespace std;
int main()
{
    int k, n, w, need;
    int sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum = sum + i;
    }
    need = (k * sum);
    if (need < n)
        cout << 0;
    else
        cout << need - n;

    return 0;
}