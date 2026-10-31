#include <iostream>
#include <string>
using namespace std;
class Notification {
protected:
    string recipient;
public:
    Notification(string rcpt) {
        recipient = rcpt;
    }
    virtual void send(const string& message) = 0;
    void displayRecipientInfo() const {
        cout << "[Dispatch System] Target Recipient: " << recipient << "\n";
    }
    virtual ~Notification() {
        cout << "Notification session closed for: " << recipient << "\n";
    }
};
class EmailNotification : public Notification {
private:
    string subjectLine;
public:
    EmailNotification(string rcpt, string subject) : Notification(rcpt), subjectLine(subject) {}
    void send(const string& message) override {
        cout << "Sending Email...\n";
        cout << "To: " << recipient << " | Subject: " << subjectLine << "\n";
        cout << "Body: " << message << "\n\n";
    }
};
class PushNotification : public Notification {
private:
    string deviceToken;
public:
    PushNotification(string rcpt, string token) : Notification(rcpt), deviceToken(token) {}
    void send(const string& message) override {
        cout << "Pushing Mobile Alert...\n";
        cout << "Device Token: " << deviceToken << " (User: " << recipient << ")\n";
        cout << "Alert Text: " << message << "\n\n";
    }
};
int main() {
    Notification* alert1 = new EmailNotification("alice@university.edu", "CS102 Assignment Due");
    Notification* alert2 = new PushNotification("Bob Smith", "tok_ios_9821xyz");
    alert1->displayRecipientInfo();
    alert1->send("Please submit your OOP polymorphism lab reports by midnight.");
    alert2->displayRecipientInfo();
    alert2->send("Your grade for Quiz 3 has been posted.");
    delete alert1;
    delete alert2;
    return 0;
}