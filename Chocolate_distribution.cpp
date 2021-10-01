/*
Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :

Each student gets exactly one packet.
The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.
Input Format

First line contains integer N i.e. the size of the array arr[]

The second line contains n space-separated integers that describe arr[].

Third line contains number of students m

Constraints

1 ≤ T ≤ 100

1 ≤ N ≤ 105

1 ≤ Ai ≤ 109

1 ≤ M ≤ N

Output Format

Your task is to print the minimum difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student

Sample Input 0

6
65 74 86 62 16 20 
3
Sample Output 0

12
Explanation 0

The minimum difference between maximum chocolates and minimum chocolates is 74 - 62 = 12

Sample Input 1

11
56 64 2 95 43 72 28 3 72 56 39 
7
Sample Output 1

33
Explanation 1

The minimum difference between maximum chocolates and minimum chocolates is 72 - 39 = 33

Sample Input 2

6
90 69 52 28 52 82 
4
Sample Output 2

30
Explanation 2

The minimum difference between maximum chocolates and minimum chocolates is 82 - 52 = 30 by choosing m packets {52,52,69,82}
*/
#include <bits/stdc++.h>
using namespace std;
int findMinDiff(unsigned long long int arr[], unsigned long long int n, unsigned long long int m)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    sort(arr, arr + n);
    if (n < m)
    {
        return -1;
    }
    long long int min_diff = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++)
    {
       long long int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
        {
            min_diff = diff;
        }
    }
    return min_diff;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long int n, m;
    std::cin >> n;
    unsigned long long arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cin >> m;
    std::cout << findMinDiff(arr, n, m) << endl;
    return 0;
}
