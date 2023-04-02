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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: car
//  action 1: move
car.move();
//  action 2: turn
car.turn();
//  action 3: stop
car.stop();
//  2)
//  Noun: dog
//  action 1: bark
dog.bark();
//  action 2: eat
dog.eat();
//  action 3: sleep
dog.sleep();
//  3)
//  Noun: body
//  action 1: dance
body.dance();
//  action 2: run
body.run();
//  action 3: jump
body.jump();
//  4)
//  Noun: sword
//  action 1: cut
sword.cut();
//  action 2: slice
sword.slice();
//  action 3: break
sword.break();
//  5)
//  Noun: phone
//  action 1: call
phone.call();
//  action 2: beep
phone.beep();
//  action 3: text
phone.text();
//  6)
//  Noun: plant
//  action 1: grow
plant.grow();
//  action 2: bloom
plant.bloom();
//  action 3: die
plant.die();
//  7)
//  Noun: guitar
//  action 1: play
guitar.play();
//  action 2: strum
guitar.strum();
//  action 3: practice
guitar.practice();
//  8)
//  Noun: dishwasher
//  action 1: clean
dishwasher.clean();
//  action 2: load
dishwasher.load();
//  action 3: unload
dishwasher.unload();
//  9)
//  Noun: keyboard
//  action 1: type
keyboardUser.type();
//  action 2: enter
keyboardUser.enter();
//  action 3: delete
keyboardUser.delete();
//  10)
//  Noun: glasses
//  action 1: wear
glasses.wear();
//  action 2: clean
glasses.clean();
//  action 3: help
glasses.help();


// 11)
// Noun: chair
// action 1: swivel
chair.swivel();
// action 2: tilt
chair.tilt();
// action 3: roll
chair.roll();

// 12)
// Noun: freezer
// action 1: getCold
freezer.getCold();
// action 2: makeIce
freezer.makeIce();
// action 3: storeFood
freezer.storeFood();

// 13) 
// Noun: dryingMachine
// action 1: dryClothes
dryingMachine.dryClothes();
// action 2: getHot
dryingMachine.getHot();
// action 3: beep
dryingMachine.beep();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
