#include <bits/stdc++.h>
using namespace std;

class BasicSlidingWindow
{
    int x, k;
    vector<int> arr;

public:
    BasicSlidingWindow(int x, int k)
    {
        this->x = x;
        this->k = k;

        arr.resize(x);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
    }

    int BruteForce()
    {
        int finalAnswer = INT_MIN;

        for (int i = 0; i <= x - k; i++)
        {
            int currentSum = 0;

            for (int j = i; j < i + k; j++)
            {
                currentSum += arr[j];
            }

            finalAnswer = max(finalAnswer, currentSum);
        }

        return finalAnswer;
    }
    int SlidingWindow()
    {
        int windowSum = 0;

        // calculating sum
        for (int i = 0; i < k; i++)
        {
            windowSum += arr[i];
        }

        int maxSum = windowSum;

        int i = 1;
        int j = k;

        while (j < x)
        {
            windowSum = windowSum + arr[j] - arr[i - 1];
            maxSum = max(maxSum, windowSum);

            i++;
            j++;
        }

        return maxSum;
    }
};

int main()
{
    int x, k;
    cin >> x >> k;

    BasicSlidingWindow bfs(x, k);
    cout << bfs.BruteForce();
    BasicSlidingWindow sw(x, k);
    cout << sw.SlidingWindow();

    return 0;
}
