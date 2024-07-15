#include<iostream>
using namespace std;
int findmax(int arr[], int size)
{
    int k = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (k < arr[i])
        {
            k = arr[i];
        }
    }
    return k;
}

void count_sort(int arr[], int size)
{
    int max=findmax(arr,size);

    int auxarr[max + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        auxarr[arr[i]] += 1;
    }

    int j = 0;
    for (int i = 0; i <size; i++)
    {
        while (auxarr[i]--)
        {
            arr[j++] = i;
        }
    }
}

int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int arr[100];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    count_sort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}