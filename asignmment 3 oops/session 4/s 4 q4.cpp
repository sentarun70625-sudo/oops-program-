#include <iostream>
using namespace std;

class SocialMediaUser {
protected:
    string username;
    int followers;

public:
    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class YouTuber : public SocialMediaUser {
protected:
    string channelName;

public:
    YouTuber(string user, int f, string channel) {
        username = user;
        followers = f;
        channelName = channel;
    }

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to "
             << channelName << endl;
    }
};

class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(string user, int f, string channel)
        : YouTuber(user, f, channel) {
    }

    void streamGame(string gameName) {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main() {
    GamingYouTuber g("Manan", 10000, "Manan Gaming");

    g.displayProfile();
    g.uploadVideo("GTA 5");
    g.streamGame("Minecraft");

    return 0;
}