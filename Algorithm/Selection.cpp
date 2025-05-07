#include <iostream>
using namespace std;
int main()
{
    int a[5] = {4, 1, 9, 4,8};
    // Selection sorting
    for (int i = 0; i < 5; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(a[min], a[i]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "   ";
    }

    return 0;
}