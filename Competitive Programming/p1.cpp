#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Sorted Array Elements" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; arr[i] + arr[j] >= arr[k]; k++)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    cout << "Indices are " << endl;
                    cout << "i = " << i <<endl;
                    cout << "j = " << j <<endl;
                    cout << "k = " << k <<endl;
                }
            }
        }
    }
    cout << "No Such Indices Found";
    return 0;
}