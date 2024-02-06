#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RockPaperScissor {
public:
    void displayMenu() {
        cout << "Welcome to Rock Paper Scissor Game!";
        cout << "1. Rock\n2. Paper\n3. Scissor\n4. Exit";
    }

    void playGame() {
        srand(time(0));
        int userChoice, computerChoice;

        do {
            displayMenu();
            cout << "Enter your choice (1-3): ";
            cin >> userChoice;

            if (userChoice < 1 || userChoice > 4) {
                cout << "Invalid choice. Please select again.";
                continue;
            }

            if (userChoice == 4)
                break;

            computerChoice = (rand() % 3) + 1;
            cout << "Computer chose: " << computerChoice;

            switch (userChoice) {
                case 1:
                    if (computerChoice == 1)
                        cout << "It's a tie!";
                    else if (computerChoice == 2)
                        cout << "You lose! Paper covers Rock.";
                    else
                        cout << "You win! Rock smashes Scissors.";
                    break;

                case 2:
                    if (computerChoice == 1)
                        cout << "You win! Paper covers Rock.";
                    else if (computerChoice == 2)
                        cout << "It's a tie!";
                    else
                        cout << "You lose! Scissors cut Paper.";
                    break;

                case 3:
                    if (computerChoice == 1)
                        cout << "You lose! Rock smashes Scissors.";
                    else if (computerChoice == 2)
                        cout << "You win! Scissors cut Paper.";
                    else
                        cout << "It's a tie!" << endl;
                    break;

                default:
                    cout << "Invalid choice. Please select again.";
            }
        } while (userChoice != 4);

        cout << "Thanks for playing!";
    }
};

int main() {
    RockPaperScissor game;
    game.playGame();

    return 0;
}
