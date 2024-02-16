#include <iostream>

int search(int arr[], int size, int target)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1; // Return -1 if the target is not found
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 57, 68};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    std::cout << "Enter the element to search for: ";
    std::cin >> target;

    int index = search(arr, size, target);

    if (index != -1)
    {
        std::cout << "Element found at index: " << index << std::endl;
    }
    else
    {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
