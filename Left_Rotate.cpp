#include <iostream>
using namespace std;

void rotate(long int *input, long int n, long int d)
{
    long int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < d)
        {
            count++;
        }
    }
    if (count != n)
    {
        for (int k = count; k < n; k++)
        {
            cout << input[k]<<" ";
        }
    }
    else if (count == n)
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++;
            j--;
        }
    }
    for (int j = 0; j < count; j++)
    {
        cout << input[j]<<" ";
    }
}
int main()
{
    long int input[1000];
    long int n, d;
    cin >> n >> d;
    for (int j = 0; j <= n - 1; j++)
    {
        cin >> input[j];
    }
    rotate(input, n, d);

    return 0;
}
