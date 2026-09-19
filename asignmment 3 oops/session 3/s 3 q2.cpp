#include <iostream>
using namespace std;

class Product {
    string productName;
    float price;
    float rating;

public:
    Product(string name, float p, float r) {
        productName = name;
        price = p;
        rating = r;
    }

    void displayInfo() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    Product p("iPhone 15", 69999, 4.5);

    p.displayInfo();

    return 0;
}