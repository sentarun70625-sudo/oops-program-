#include <iostream>
using namespace std;

class Playlist {
    string playlistName;

public:
    Playlist() {
        playlistName = "My Favourites";
        cout << "Welcome to My Favourites Playlist!" << endl;
    }
};

int main() {
    Playlist p;

    return 0;
}