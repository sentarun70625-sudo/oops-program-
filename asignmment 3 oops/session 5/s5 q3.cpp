#include <iostream>
using namespace std;

class ProductSearch {
public:
    void searchProduct(string productName) {
        cout << "Searching for: " << productName << endl;
    }

    void searchProduct(string productName, string category) {
        cout << "Searching for: " << productName << endl;
        cout << "Category: " << category << endl;
    }
};

int main() {
    ProductSearch search;

    search.searchProduct("iPhone 15");

    cout << endl;

    search.searchProduct("iPhone 15", "Mobiles");

    return 0;
}