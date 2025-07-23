#include <iostream>
using namespace std;

float convertToGPA(int score) {
    if (score >= 0 && score <= 49)
        return 0.0;
    else if (score <= 54)
        return 1.0;
    else if (score <= 59)
        return 1.5;
    else if (score <= 64)
        return 2.0;
    else if (score <= 69)
        return 2.5;
    else if (score <= 74)
        return 3.0;
    else if (score <= 79)
        return 3.5;
    else if (score <= 100)
        return 4.0;
    else
        return -1.0; // Invalid score
}

int main() {
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;

    float gpa = convertToGPA(score);
    
    if (gpa >= 0)
        cout << "GPA: " << gpa << endl;
    else
        cout << "Invalid score entered." << endl;

    return 0;
