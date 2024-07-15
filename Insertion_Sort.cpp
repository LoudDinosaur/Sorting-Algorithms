#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr{10, 1, 7, 20, 14, 99};
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}