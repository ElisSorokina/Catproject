#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <string>
using namespace std;
void printRandomWish(string good_day_wishes[]);
const int NUM_OF_WISHES = 50;

    string getGoodDayWish() {
        string good_day_wishes[50] = {
                "Wishing you a fantastic day!",
                "May your day be filled with joy and happiness.",
                "Have an amazing day, my friend!",
                "Hope your day is as bright as the sun.",
                "Sending you positive vibes for a great day.",
                "Have a wonderful day filled with laughter and love.",
                "May your day be as sweet as you are.",
                "Have a beautiful day, my dear!",
                "Wishing you a day that's better than your dreams.",
                "Have a happy and productive day!",
                "Wishing you a day filled with good things.",
                "May your day be filled with positivity and good energy.",
                "Have a day that's as wonderful as you are.",
                "Sending you good vibes for a successful day.",
                "May your day be as special as you are to me.",
                "Have a day full of blessings and opportunities.",
                "Wishing you a day that's as beautiful as your smile.",
                "May your day be as bright as your spirit.",
                "Have a great day, full of adventures and surprises.",
                "Wishing you a day that's as fabulous as you are.",
                "May your day be filled with love and laughter.",
                "Have a day that's as wonderful as you make the world.",
                "Wishing you a day full of good luck and good fortune.",
                "May your day be as happy as you make me.",
                "Have a day that's as amazing as you are.",
                "Wishing you a day full of success and achievements.",
                "May your day be filled with positivity and good vibes.",
                "Have a day that's as awesome as you are.",
                "Wishing you a day that's as beautiful as your heart.",
                "May your day be filled with joy and peace.",
                "Have a day that's as special as you are to me.",
                "Wishing you a day full of great opportunities.",
                "May your day be filled with positivity and good energy.",
                "Have a day that's as magical as you are.",
                "Wishing you a day that's as bright as your future.",
                "May your day be filled with love and happiness.",
                "Have a day that's as great as you make the world.",
                "Wishing you a day full of blessings and miracles.",
                "May your day be filled with positive surprises.",
                "Have a day that's as awesome as you make my life.",
                "Wishing you a day that's as amazing as you are.",
                "May your day be filled with joy and laughter.",
                "Have a day that's as wonderful as your dreams.",
                "Wishing you a day full of success and achievements.",
                "May your day be filled with positive thoughts and good vibes.",
                "Have a day that's as fantastic as you are.",
                "Wishing you a day that's as beautiful as your soul.",
                "May your day be filled with peace and serenity.",
                "Have a day that's as special as you are to me.",
                "Wishing you a day full of new opportunities.",

        };


        // Seed the random number generator
        srand(time(NULL));

        // Get a random index from the array
        int random_index = rand() % NUM_OF_WISHES ;

        // Return the wish at the random index
        return good_day_wishes[random_index];
    }

int main() {
    // Call the getGoodDayWish() function to get a random good day wish
    string random_wish = getGoodDayWish();

    // Print the random wish
    cout << random_wish << endl;

    return 0;
}




















