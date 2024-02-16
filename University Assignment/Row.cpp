#include <iostream>

int main()
{
    int rows, columns;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    // Nested loop to print a rectangular pattern
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= columns; ++j)
        {
            std::cout << "(" << i << "," << j << ") ";
        }
        std::cout << std::endl;
    }

    return 0;
}
