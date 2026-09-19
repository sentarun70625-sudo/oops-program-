#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("wishlist.txt");

    string product;
    float price;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter product name: ";
        getline(cin, product);

        cout << "Enter price: ";
        cin >> price;
        cin.ignore();

        file << product << " - Rs. " << price << endl;
    }

    file.close();

    ifstream readFile("wishlist.txt");

    cout << "\nWishlist:\n";

    string line;

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}