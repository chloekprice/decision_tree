#include <iostream>
#include <cctype>
#include <string>
using namespace std;

char DecisionChoice(char& pathDecision);
string OptionToPlayAgain(string& playAgain);
void FinalSquidward(string userName);
void InvalidAnswer();
void FinalPlankton(string userName);
string PossiblySandy(char pathDecision, string userName, string& iceCreamFlavor, string& playAgain);
string ValidateIceCream(string& iceCreamFlavor);
void FinalSandy1(string userName);
void FinalPearl(string userName);
void FinalSandy2(string userName);
void FinalSpongebob(string userName);
void NextQuestionArrow();

int main() {
    string userInput;
    string userName;
    string playAgain = "yes";
    char pathDecision = 'c';
    string iceCreamFlavor = "vanilla";

    cout << "Please enter your name." << endl;
    cin >> userName;
    cout << "Are you a Goofy Goober?" << endl;
    cout << "(Enter yes or no.)" << endl;

    cin >> userInput;
    if (userInput == "yes") {
        cout << endl;
        cout << "Let's Begin " << userName << "!" << endl;
    }
    else if (userInput == "no") {
        cout << endl;
        cout << "Goodbye " << userName << "." << endl;
        exit(0);
    }
    else {
        cout << endl;
        cout << "Error: Invalid response. Goodbye" << endl;
        exit(0);
    }

    cout << endl;
    NextQuestionArrow();

    while(playAgain == "yes") {

        cout << "You work for Mr.Krabs and, as the new Krusty Krab 2 is having its Grand Opening, you "
                "are hoping for a promotion. Unfortunately, you are passed up. Do you a) go to Goofy "
                "Goober's Ice Cream Parlor to drown out your depressed feelings with your friend "
                "Patrick or b) blow it off because honestly who cares about some stupid promotion for "
                "a job you don't even care about?" << endl;
        cout << endl;

        DecisionChoice(pathDecision);

        if (pathDecision == 'b') {
            FinalSquidward(userName);

            OptionToPlayAgain(playAgain);
            continue;
        }
        else if (pathDecision != 'a') {
            InvalidAnswer();
        }

        NextQuestionArrow();

        cout << "You just found out that Mr.Krabs has been frozen solid and accused of stealing King "
                "Neptune's crown. Keep in mind that you were just denied a promotion by Mr. Krabs. "
                "Do you a)embark on an adventure to Shell City with your best friend, Patrick, to find "
                "the crown and clear your boss's name; b) steal the Krabby Patty Secret Formula and take "
                "over the Krusty Krab franchise out of revenge while Mr. Krabs is incapable of stopping you?" << endl;

        cout << endl;

        DecisionChoice(pathDecision);

        if (pathDecision == 'b') {
            FinalPlankton(userName);

            OptionToPlayAgain(playAgain);
            continue;
        }
        else if (pathDecision != 'a') {
            InvalidAnswer();
        }

        NextQuestionArrow();

        cout << "As you begin your journey, you are given a bag of winds from Mindy, King Neptune's daughter. "
                "You then travel toward Shell City. Along the way, you stop by the Thug Tug to use the bathroom. "
                "There is some really good soap there--perfect for bubble blowing. Do you a) resist the urge to "
                "make some bubbles because you are on an important mission and have no time for funny business; "
                "b) have a bubble party because it is so fun!" << endl;

        cout << endl;

        DecisionChoice(pathDecision);

        if (pathDecision == 'b') {
            PossiblySandy(pathDecision, userName, iceCreamFlavor, playAgain);
            continue;
        }
        else if (pathDecision != 'a') {
            InvalidAnswer();
        }
        else {
            cout << "You avoided possible conflict and distraction. As a reward you a) stop to get ice cream or b) "
                    "keep going because you have no time for snackies." << endl;

            DecisionChoice(pathDecision);

            if (pathDecision == 'b') {
                FinalSandy1(userName);

                OptionToPlayAgain(playAgain);
                continue;
            }
            else if (pathDecision != 'a') {
                InvalidAnswer();
            }
            else if (pathDecision == 'a') {
                cout << "What ice cream flavor do you get?" << endl;
                cin >> iceCreamFlavor;
                ValidateIceCream(iceCreamFlavor);
            }
        }
        cout << endl;

        cout << "You barely finish your " << rand() << " scoops of " << iceCreamFlavor;
        cout << " ice cream when you are chased by a creature posing as a sweet grandma running an ice cream stand! You are ok, "
                "but shaken about your abilities to continue on this journey. Luckily, Mindy comes to boost your confidence "
                "and gives you magical seaweed mustaches that make you and Patrick men. With newly found confidence "
                "you enter a treacherous trench and sing your way through. Oh no! you just came across a cyclops! He "
                "takes you back to his knick knack shop where he plans to dry you out and turn you into a cheesy tourist "
                "gift. As you and Patrick begin to dry up do you a) sing the Goofy Goober theme song one last sentimental "
                "time or b) die in silence or c) take off your suit since you are a land creature and use your karate to "
                "save you and Patrick?" << endl;

        cout << endl;

        cout << "Do you choose a, b, or c? Please enter your answer." << endl;
        cin >> pathDecision;

        if (pathDecision == 'b') {
            FinalPearl(userName);

            OptionToPlayAgain(playAgain);
            continue;
        }
        else if (pathDecision == 'c') {
            FinalSandy2(userName);

            OptionToPlayAgain(playAgain);
            continue;
        }
        else if (pathDecision == 'a') {
            FinalSpongebob(userName);

            OptionToPlayAgain(playAgain);
            continue;
        }
        else {
            InvalidAnswer();
        }

    }

    return 0;
}

char DecisionChoice(char& pathDecision) {
    cout << "Do you choose a or b? Please enter your answer." << endl;
    cin >> pathDecision;

    return pathDecision;
}
string OptionToPlayAgain(string& playAgain) {
    cout << endl;
    cout << "Would you like to play again and see if you are truly a Goofy Goober? (Enter yes or no.)" << endl;
    cin >> playAgain;

    if (playAgain == "yes") {
        cout << "Ok let's play again!" << endl;
        cout << endl;
        return playAgain;
    }
    else {
        cout << "Ok, Goodbye." << endl;
        exit (0);
    }
}
void FinalSquidward(string userName) {
    cout << "C'mon " << userName << ", you are totally Squidward! Do you have any"
                                    "sense of loyalty or pride in the Krusty Krab? The end." << endl;
}
void InvalidAnswer() {
    cout << "Invalid answer. Goodbye." << endl;
    exit(0);
}
void FinalPlankton(string userName) {
    cout << "Sike, " << userName << "!";
    cout << "We knew it was you Plankton all along! This was a test and you failed! The end." << endl;
}
string PossiblySandy(char pathDecision, string userName, string& iceCreamFlavor, string& playAgain) {
    cout << "You barely escape the Bubble Blowing Baby Hunt by the skin of your teeth. "
            "As a reward you a) stop to get ice cream or b) keep going because you have "
            "no time for snackies." << endl;

    DecisionChoice(pathDecision);

    if (pathDecision == 'b') {
        FinalSandy1(userName);

        OptionToPlayAgain(playAgain);
        return playAgain;
    }
    else if(pathDecision == 'a') {
        cout << "What ice cream flavor do you get?" << endl;
        cin >> iceCreamFlavor;

        ValidateIceCream(iceCreamFlavor);

        return iceCreamFlavor;
    }
    else {
        cout << "Invalid answer. Goodbye." << endl;
        exit(0);
    }
}
string ValidateIceCream(string& iceCreamFlavor) {
    int i = 0;

    while (i < 3) {
        if (iceCreamFlavor == "strawberry") {
            i = 1;
            return iceCreamFlavor;
        }
        else if (iceCreamFlavor == "chocolate") {
            i = 2;
            return iceCreamFlavor;
        }
        else if (iceCreamFlavor == "vanilla") {
            i = 3;
            return iceCreamFlavor;
        }
        else {
            i = 4;
            cout << "Sorry they are out of that kind of ice cream. Please enter another." << endl;

            cin >> iceCreamFlavor;
        }
    }
    return iceCreamFlavor;
}
void FinalSandy1(string userName) {
    cout << "By limiting your distractions, you make it to Shell City in no time. You "
            "remember the bag of winds that Mindy gave you and safely return to Bikini "
            "Bottom with King Netune's crown. " << userName << ", you are most certainly Sandy Cheeks!" << endl;
}
void FinalPearl(string userName) {
    cout << userName << " you are Pearl! You tried your best to save your dad, Mr. Krabs, but in the end your ";
    cout << "efforts were not enough. You wouldn't dare leave this world singing such an embarrassing song. "
            "The end." << endl;
}
void FinalSandy2(string userName) {
    cout << "Good thing you are a land creature, " << userName << "(AKA Sandy Cheeks)! That was really close but in ";
    cout << "the end you were able to rescue you and Patrick and get the crown and return to Bikini Bottom with ease. "
            "The end." << endl;
}
void FinalSpongebob(string userName) {
    cout << "Your and Patrick's tears come together and form a heart that short circuits the lamp that is drying you "
            "out-- allowing you to escape. But wait! you realize that you had been at Shell City this entire time "
            "(it is a gift shop). You grab King Neptune's crown. Unfortunately, you accidentally let the bag of winds "
            "loose. Don't worry, though, because you meet David Hasselhoff who helps you return to Bikini Bottom with "
            "the crown. You, " << userName << ", are Spongebob Sqaurepants and you have saved Mr. Krabs and the Krusty ";
    cout << "Krab! Now let's celebrate with a pop rock rentition of \"I'm a Goofy Goober\". The end." << endl;
}
void NextQuestionArrow(){
    int arrowBaseHeight = 4;
    int arrowBaseWidth = 2;
    int arrowHeadWidth = 3;

    for (int i = 0; i < arrowBaseHeight; ++i) {
        for (int j = 0; j < arrowBaseWidth; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int k = 1; k <= arrowHeadWidth; ++k) {
        for (int m = 0; m <= (arrowHeadWidth - k) ; ++m) {
            cout << "*";
        }
        cout << endl;
    }
}
