#include <iostream>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    void setTitle(string t) {
        title = t;
    }

    string getTitle() {
        return title;
    }

    void setArtist(string a) {
        artist = a;
    }

    string getArtist() {
        return artist;
    }
};

int main() {
    Song s;

    s.setTitle("Blinding Lights");
    s.setArtist("The Weeknd");

    cout << "Title: " << s.getTitle() << endl;
    cout << "Artist: " << s.getArtist() << endl;

    s.setTitle("Starboy");

    cout << "Updated Title: " << s.getTitle() << endl;

    return 0;
}