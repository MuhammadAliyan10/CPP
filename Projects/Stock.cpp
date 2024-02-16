#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Product
{
    string name;
    int quantity;
    double price;
};

vector<Product> stock;

// Function prototypes
void loadStockFromFile();
void saveStockToFile();
void addProductToStock();
void addSalesMade();
void generateBill();
void displayCurrentStock();
void displayOldStock();
void displayLastDataSaved();
void searchItemInStock();
void exitProgram();

int main()
{
    loadStockFromFile();

    int choice;
    do
    {
        cout << "Menu:\n";
        cout << "1. Add Products to Stock\n";
        cout << "2. Add Sales Made\n";
        cout << "3. Generate Bill\n";
        cout << "4. Display Current Stock & Save Data to File\n";
        cout << "5. Display Old Stock\n";
        cout << "6. Display Last Data Saved\n";
        cout << "7. Search Item in Stock\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addProductToStock();
            break;
        case 2:
            addSalesMade();
            break;
        case 3:
            generateBill();
            break;
        case 4:
            displayCurrentStock();
            saveStockToFile();
            break;
        case 5:
            displayOldStock();
            break;
        case 6:
            displayLastDataSaved();
            break;
        case 7:
            searchItemInStock();
            break;
        case 8:
            exitProgram();
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 8);

    return 0;
}

void loadStockFromFile()
{
    // Implement this function to load data from a file into the stock vector.
    // The file should contain product information, one product per line, in a specific format.
    // Example format: "Product_Name Quantity Price"
    ifstream inFile("stock_data.txt");
    if (!inFile)
    {
        cout << "No stock data available.\n";
        return;
    }

    stock.clear();
    string productName;
    int productQuantity;
    double productPrice;

    while (inFile >> productName >> productQuantity >> productPrice)
    {
        Product product;
        product.name = productName;
        product.quantity = productQuantity;
        product.price = productPrice;
        stock.push_back(product);
    }

    inFile.close();
    cout << "Stock data loaded from file.\n";
}

void saveStockToFile()
{
    // Implement this function to save the current stock data to a file.
    // The file should contain product information, one product per line, in a specific format.
    // Example format: "Product_Name Quantity Price"
    ofstream outFile("last_saved_stock.txt");
    if (!outFile)
    {
        cout << "Error saving data to file.\n";
        return;
    }

    for (const Product &product : stock)
    {
        outFile << "Product Name: " << product.name << "\n";
        outFile << "Quantity: " << product.quantity << "\n";
        outFile << "Price per unit: " << product.price << "\n";
        outFile << "-------------------------\n";
    }

    outFile.close();
}

void addProductToStock()
{
    Product newProduct;
    cout << "Enter product name: ";
    cin.ignore();
    getline(cin, newProduct.name);
    cout << "Enter product quantity: ";
    cin >> newProduct.quantity;
    cout << "Enter product price: ";
    cin >> newProduct.price;

    stock.push_back(newProduct);
    cout << "Product added to stock.\n";
}

void addSalesMade()
{
    string productName;
    int soldQuantity;
    cout << "Enter the product name for the sale: ";
    cin.ignore();
    getline(cin, productName);
    cout << "Enter the quantity sold: ";
    cin >> soldQuantity;

    for (Product &product : stock)
    {
        if (product.name == productName)
        {
            if (product.quantity >= soldQuantity)
            {
                product.quantity -= soldQuantity;
                cout << "Sale recorded. Updated stock.\n";
            }
            else
            {
                cout << "Insufficient quantity in stock.\n";
            }
            return;
        }
    }

    cout << "Product not found in stock.\n";
}

void generateBill()
{
    string productName;
    cout << "Enter the product name for the bill: ";
    cin.ignore();
    getline(cin, productName);

    for (const Product &product : stock)
    {
        if (product.name == productName)
        {
            cout << "----- Bill -----\n";
            cout << "Product: " << product.name << "\n";
            cout << "Quantity: 1\n";
            cout << "Price per unit: " << product.price << "\n";
            cout << "Total amount: " << product.price << "\n";
            cout << "-----------------\n";
            return;
        }
    }

    cout << "Product not found in stock.\n";
}

void displayCurrentStock()
{
    // Implement this function to display the current stock data on the console.
    cout << "----- Current Stock -----\n";
    for (const Product &product : stock)
    {
        cout << "Product Name: " << product.name << "\n";
        cout << "Quantity: " << product.quantity << "\n";
        cout << "Price per unit: " << product.price << "\n";
        cout << "-------------------------\n";
    }
}

void displayOldStock()
{
    // Implement this function to display old stock data (read from the file).
    ifstream inFile("old_stock.txt");
    if (!inFile)
    {
        cout << "No old stock data available.\n";
        return;
    }

    cout << "----- Old Stock -----\n";
    string line;
    while (getline(inFile, line))
    {
        cout << line << "\n";
    }
    inFile.close();
}

void displayLastDataSaved()
{
    // Implement this function to display the last saved stock data (read from the file).
    ifstream inFile("last_saved_stock.txt");
    if (!inFile)
    {
        cout << "No data saved previously.\n";
        return;
    }

    cout << "----- Last Data Saved -----\n";
    string line;
    while (getline(inFile, line))
    {
        cout << line << "\n";
    }
    inFile.close();
}

void searchItemInStock()
{
    string productName;
    cout << "Enter the product name to search: ";
    cin.ignore();
    getline(cin, productName);

    for (const Product &product : stock)
    {
        if (product.name == productName)
        {
            cout << "----- Product Details -----\n";
            cout << "Product Name: " << product.name << "\n";
            cout << "Quantity: " << product.quantity << "\n";
            cout << "Price per unit: " << product.price << "\n";
            cout << "---------------------------\n";
            return;
        }
    }

    cout << "Product not found in stock.\n";
}

void exitProgram()
{
    // Save the current stock data to a file before exiting
    saveStockToFile();

    // Perform any other necessary cleanup or tasks before exiting

    cout << "Exiting the program.\n";
    // You can
    // Implement any cleanup or exit routines here.
}
