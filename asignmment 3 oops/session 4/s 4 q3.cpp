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

class Podcaster : public SocialMediaUser {
    string podcastName;

public:
    Podcaster(string user, int f, string podcast) {
        username = user;
        followers = f;
        podcastName = podcast;
    }

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster p("Manan", 3000, "Tech Talks");

    p.displayProfile();
    p.publishEpisode("Episode 1");

    return 0;
}