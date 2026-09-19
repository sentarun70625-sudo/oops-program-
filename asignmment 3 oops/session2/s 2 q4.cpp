// 4.
// Extend your Playlist class to include a member function addSong(songTitle) that adds the song title to an array property called songs. Demonstrate by adding three song titles and displaying the updated songs list.<br><br><em><strong>Hint:</strong> Initialize songs as an empty array inside the constructor.</em>

#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    string songs[10];
    int songCount;

    // Constructor
    Playlist()
    {
        songCount = 0;
    }

    // Add song
    void addSong(string songTitle)
    {
        songs[songCount] = songTitle;
        songCount++;
    }

    // Display songs
    void displaySongs()
    {
        cout << "\nSongs List:" << endl;

        for(int i = 0; i < songCount; i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main()
{
    Playlist playlist1;

    playlist1.name = "My Favorite Songs";
    playlist1.createdOn = "18-09-2026";
    playlist1.isPublic = true;

    playlist1.addSong("Shape of You");
    playlist1.addSong("Perfect");
    playlist1.addSong("Believer");

    cout << "Playlist Name: " << playlist1.name << endl;

    playlist1.displaySongs();

    return 0;
}