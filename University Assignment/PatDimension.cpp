#include <iostream>

int main()
{
    // Define the dimensions of the array
    const int rows = 3;
    const int columns = 4;

    // Create a two-dimensional array
    int arr[rows][columns];

    // Initialize the array with some values
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            arr[i][j] = i * columns + j + 1;
        }
    }

    // Access and print the array elements
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
