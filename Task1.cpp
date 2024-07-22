#include <iostream>
#include <string>
using namespace std;

// Function to ask a multiple-choice question and return true if the answer is correct
bool askQuestion(string question, string optionA, string optionB, string optionC, string correctAnswer, int& score) {
    cout << question << endl;
    cout << "A. " << optionA << endl;
    cout << "B. " << optionB << endl;
    cout << "C. " << optionC << endl;
    
    cout << "Enter your answer (A, B, or C): ";
    char userAnswer;
    cin >> userAnswer;
    
    // Convert user's answer to uppercase for case-insensitive comparison
    userAnswer = toupper(userAnswer);
    
    if (userAnswer == toupper(correctAnswer[0])) {
        cout << "Correct!" << endl;
        score++;
        return true;
    } else {
        cout << "Incorrect. The correct answer was " << correctAnswer << "." << endl;
        return false;
    }
}

int main() {
    int score = 0;
    
    // Question 1
    if (askQuestion("What is the capital of India?", "Gujrat", "Delhi", "Mumbai", "B", score)) {
        score++;
    }
    
    // Question 2
    if (askQuestion("What is the largest planet in our solar system?", "Mars", "Jupiter", "Saturn", "B", score)) {
        score++;
    }
    
    // Question 3
    if (askQuestion("National animal of India?", "Tiger", "Lion", "Horse", "A", score)) {
        score++;
    }
    
    // Display final score
    cout << "Quiz completed!" << endl;
    cout << "Your final score is: " << score << " out of 6." << endl;
    
    return 0;
}