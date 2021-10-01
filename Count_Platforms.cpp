#include <iostream>
#include <algorithm>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    int plat_needed = 1, result = 1;
    int i = 1, j = 0;

    for (int i = 0; i < n; i++)
    {
        plat_needed = 1;

        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) || (arr[j] >= arr[i] && arr[j] <= dep[i]))
            {
                plat_needed++;
            }
        }
        result = max(result, plat_needed);
    }

    return result;
}
int main()
{
    int n;
    cin >> n;
    int arr[100], dep[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> dep[i];
    }
    cout << findPlatform(arr, dep, n);
    return 0;
}
