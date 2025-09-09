#include <iostream>

using namespace std;

int getSum(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(void)
{
    int nums[3];
    cout << "Enter 3 numbers separated by spaces: ";
    cin >> nums[0] >> nums[1] >> nums[2];
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << "Array sum = " << getSum(nums, size) << endl;

    return 0;
}