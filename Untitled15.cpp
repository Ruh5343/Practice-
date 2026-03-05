#include <iostream>
using namespace std;

class Question {
public:
    string q, a, b, c, d;
    char correct;

    void set(string q1, string a1, string b1, string c1, string d1, char ans) {
        q = q1; a = a1; b = b1; c = c1; d = d1; correct = ans;
    }

    bool ask() {
        char user;
        cout << q << "\nA) " << a << "\nB) " << b
             << "\nC) " << c << "\nD) " << d << "\nYour answer: ";
        cin >> user;
        return (toupper(user) == correct);
    }
};

int main() {
    Question q1, q2;
    q1.set("Capital of France?", "Paris", "London", "Rome", "Berlin", 'A');
    q2.set("2 + 2 = ?", "3", "4", "5", "6", 'B');

    int score = 0;
    if (q1.ask()) score++;
    if (q2.ask()) score++;

    cout << "\nScore: " << score << "/2\n";
}
