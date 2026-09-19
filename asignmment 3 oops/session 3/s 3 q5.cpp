#include <iostream>
#include <fstream>

using namespace std;

class Playlist {
    string playlistName;

public:
    Playlist() {
        playlistName = "My Favourites";
        cout << "Playlist created." << endl;
    }

    ~Playlist() {
        ofstream file("autosave.txt");

        file << playlistName;

        file.close();

        cout << "Playlist auto-saved." << endl;
    }
};

int main() {
    Playlist p;

    return 0;
}
