#include <iostream>
#include <string>
using namespace std;

class MediaItem {
protected:
    string title;
    int durationMinutes;
public:
    MediaItem(string t, int duration) {
        title = t;
        durationMinutes = duration;
    }
    virtual void play() = 0;
    void displayMetadata() {
        cout << "Title: " << title << " | Duration: " << durationMinutes << " mins\n";
    }
    virtual ~MediaItem() {
        cout << "Media item '" << title << "' destroyed.\n";
    }
};
class Movie : public MediaItem {
    string director;
public:
    Movie(string t, int duration, string dir) : MediaItem(t, duration) {
        director = dir;
    }
    void play() override {
        cout << "Streaming Movie: '" << title << "' directed by " << director << ".\n";
    }
};
class Song : public MediaItem {
    string artist;
public:
    Song(string t, int duration, string art) : MediaItem(t, duration) {
        artist = art;
    }
    void play() override {
        cout << "Playing Audio Track: '" << title << "' by " << artist << ".\n";
    }
};
int main() {
    MediaItem* item1 = new Movie("Inception", 148, "Christopher Nolan");
    MediaItem* item2 = new Song("Bohemian Rhapsody", 6, "Queen");
    cout << "    Media Catalog Item 1    \n";
    item1->displayMetadata();
    item1->play();
    cout << "\n    Media Catalog Item 2    \n";
    item2->displayMetadata();
    item2->play();
    cout << "\n    Cleaning Up Resources    \n";
    delete item1;
    delete item2;
    return 0;
}