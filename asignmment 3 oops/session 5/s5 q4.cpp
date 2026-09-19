#include <iostream>
using namespace std;

class MusicPlayer {
public:
    virtual void play(string song) {
        cout << "Playing: " << song << endl;
    }
};

class SpotifyPlayer : public MusicPlayer {
public:
    void play(string song) override {
        cout << "Streaming on Spotify: " << song << endl;
    }
};

int main() {
    MusicPlayer* player = new SpotifyPlayer();

    player->play("Blinding Lights");

    delete player;

    return 0;
}