#include <iostream>
#include <cstdlib>
#include <ctime>

// They say that sometimes, what's hidden is not lost.


class Goal {
public:
    bool isSeekingYou() {
        // Randomly decide if the goal is seeking you
        return rand() % 2 == 0;
    }

    void appear() {
        std::cout << "The goal has appeared, but it may not be seeking you!" << std::endl;
    }
};

class Person {
public:
    void seekGoal(Goal& goal) {
        std::cout << "You are seeking the goal..." << std::endl;
        if (goal.isSeekingYou()) {
            std::cout << "Lucky! The goal is also seeking you. You achieved it!" << std::endl;
        } else {
            std::cout << "Unfortunately, the goal is not seeking you. Keep trying." << std::endl;
        }
    }
};

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed for randomness
    
    Person person;
    Goal goal;
    
    goal.appear();
    person.seekGoal(goal);

    return 0;
}
