#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "====================================\n";
    cout << "     BRIDGERTON FAN QUIZ\n";
    cout << "====================================\n\n";

    cout << "1. What is the name of the Bridgerton family's eldest daughter?\n";
    cout << "1. Daphne\n2. Eloise\n3. Francesca\n4. Hyacinth\n";
    cin >> answer;

    if (answer == 1) {
        cout << "Correct! 💎\n\n";
        score++;
    } else {
        cout << "Incorrect! The answer is Daphne.\n\n";
    }

    cout << "2. Who is known as Lady Whistledown?\n";
    cout << "1. Kate Sharma\n2. Penelope Featherington\n3. Lady Danbury\n4. Eloise Bridgerton\n";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct! 🪶\n\n";
        score++;
    } else {
        cout << "Incorrect! The answer is Penelope Featherington.\n\n";
    }

    cout << "3. Which Bridgerton sibling loves books and intellectual debates?\n";
    cout << "1. Colin\n2. Benedict\n3. Eloise\n4. Anthony\n";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct! 📚\n\n";
        score++;
    } else {
        cout << "Incorrect! The answer is Eloise.\n\n";
    }

    cout << "4. What is Anthony Bridgerton's title?\n";
    cout << "1. Duke of Hastings\n2. Viscount\n3. Earl\n4. Baron\n";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct! 🎩\n\n";
        score++;
    } else {
        cout << "Incorrect! Anthony is the Viscount Bridgerton.\n\n";
    }

    cout << "5. Who does Daphne marry?\n";
    cout << "1. Colin Bridgerton\n2. Anthony Bridgerton\n3. Simon Basset\n4. Lord Debling\n";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct! 💕\n\n";
        score++;
    } else {
        cout << "Incorrect! The answer is Simon Basset.\n\n";
    }

    cout << "====================================\n";
    cout << "Your score: " << score << "/5\n";

    if (score == 5)
        cout << "You are the diamond of the season! 💎\n";
    else if (score >= 3)
        cout << "Lady Whistledown would approve! 🪶\n";
    else
        cout << "Perhaps another turn around the ton is needed! 🎻\n";

    cout << "====================================\n";

    return 0;
}
