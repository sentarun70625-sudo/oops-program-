#include <iostream>
using namespace std;

class Movie {
    string movieName;
    float rating;

public:
    Movie(string name, float r) {
        movieName = name;
        rating = r;
    }

    Movie(const Movie &m) {
        movieName = m.movieName;
        rating = m.rating;
    }

    void displayInfo() {
        cout << "Movie Name: " << movieName << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    Movie original("Avengers", 4.8);

    Movie copied(original);

    cout << "Original Movie:" << endl;
    original.displayInfo();

    cout << "\nCopied Movie:" << endl;
    copied.displayInfo();

    return 0;
}