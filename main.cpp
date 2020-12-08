#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       plant
//  action 1:   the plant grows
plant.grow();
//  action 2:   the plant withers
plant.wither();
//  action 3:   the plant dies
plant.die();
//  2)
//  Noun:       pot
//  action 1:   the pot holds water
pot.holdWater();
//  action 2:   the pot heats food
pot.heatFood();
//  action 3:   the pot pours liquid
pot.pourWater();
//  3)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog runs
dog.run();
//  action 3:   the dog sits
dog.sit();
//  4)
//  Noun:       cat
//  action 1:   the cat meows
cat.meow();
//  action 2:   the cat purrs
cat.purr();
//  action 3:   the cat plays
cat.play();
//  5)
//  Noun:       window
//  action 1:   the window frosts
window.frost();
//  action 2:   the window opens
window.open();
//  action 3:   the window closes
window.close();
//  6)
//  Noun:       tv
//  action 1:   the tv powers on
tv.powerOn();
//  action 2:   the tv shows cartoons 
tv.showCartoon();
//  action 3:   the tv powers off
tv.powerOff();
//  7)
//  Noun:       vcr
//  action 1:   the vcr plays movies
vcr.playMovie();
//  action 2:   the vcr rewinds tape
vcr.rewindTape();
//  action 3:   the vcr pauses tape
vcr.pauseTape();
//  8)
//  Noun:       guitar amplifier
//  action 1:   the guitar amplifier outputs sound
guitarAmplifier.outputSound();
//  action 2:   the guitar amplifier increases gain
guitarAmplifier.increaseGain();
//  action 3:   the guitar amplifier powers off
guitarAmplifier.powerOff();
//  9)
//  Noun:       bird
//  action 1:   the bird flies
bird.fly();
//  action 2:   the bird makes a nest
bird.makeNest();
//  action 3:   the bird lays eggs
bird.layEgg();
//  10)
//  Noun:       calculator
//  action 1:   the calculator adds
calculator.add();
//  action 2:   the calculator subtracts
calculator.subtract();
//  action 3:   the calculator multiplies
calculator.multiply();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
