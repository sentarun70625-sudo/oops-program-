#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    file << "Blinding Lights" << endl;
    file << "Starboy" << endl;
    file << "Perfect" << endl;
    file << "Shape of You" << endl;
    file << "Believer" << endl;

    file.close();

    cout << "Songs saved successfully.";

    return 0;
}