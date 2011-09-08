#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;

void partOne(){ //subloop for part one of the project
    cout << "Hello World!" << endl << "Here I Come!"; //Outputs to the screen
    } 

void partTwo(){ //subloop for part two of the project
    cout << "One,  Two,   Three,  Four,    Five\n"; //1-5 in English
    cout << "Un,   Deux,  Trois,  Quatre,  Cinq\n"; //1-5 in French
    cout << "Uno,  Dos,   Tres,   Quattro, Cinco\n"; //1-5 in Spanish
    }

void partThree(){ //subloop for part three of the project
    cout << "////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
    cout << "=\t\tNames And Places\t\t=\n"; //Header for the chart
    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\////////////////////\n\n";
    cout << "Name\t\tHometown\t\tMajor\n"; //Three catagories for the chart
    cout << "====\t\t========\t\t=====\n"; //Initial line-up for columns
    cout << "Byron\t\tWestlake\t\tComp. Engineering\n"; //Byron's Traits
    cout << "Anthony\tWestlake\t\tComp. Engineering\n"; //Anthony's Traits
    cout << "Jenna\t\tNorthHill\t\tComp. Science\n";  //Jenna's Traits
    cout << "Jeff\t\t\tAkron\t\t\tElectrical Engineering\n";  //Jeff's Traits
    cout << "Pete\t\t\tAkron\t\t\tPhysics\n";  //Pete's Traits
    }

void partFour(){ //Subloop for part four of the project (4 lines stored as str)
    string lineOne = "Roses Are Red";
    string lineTwo = "Violets Are Blue";
    string lineThree = "Some Poems Rhyme";
    string lineFour = "But Not This One";
    cout << lineOne << endl; cout << lineTwo << endl; cout << lineThree << endl;
    cout << lineFour;
    }

void partFive(){ //subloop for part five of project
    string personOne = "Byron"; //Init names as str
    string personTwo = "Jeffrey";
    string personThree = "Zachery";
    string personFour = "Jenna";
    string personFive = "Roger";
    //Init all numbers, Scores as int, Ave as doubles.
    int p1ClassScore = 100, p1LabScore = 100; double p1Ave =   (p1ClassScore +
                                                                p1LabScore)/2;
    int p2ClassScore = 75,   p2LabScore = 90;   double p2Ave = (p2ClassScore +
                                                                p2LabScore)/2;
    int p3ClassScore = 86,   p3LabScore = 83;   double p3Ave = (p3ClassScore +
                                                                p3LabScore)/2;
    int p4ClassScore = 62,   p4LabScore = 71;   double p4Ave = (p4ClassScore +
                                                                p4LabScore)/2;
    int p5ClassScore = 78,   p5LabScore = 29;   double p5Ave = (p5ClassScore +
                                                                p5LabScore)/2;
    //Draw up of the table to compare scores / averages
    cout << "Name\t\tClass Score\t\tLab Score\t\tAverage Score\n";
    cout << "====\t\t========\t\t=======\t\t===========\n";
    cout << personOne    << "\t\t" << p1ClassScore << "\t\t\t\t\t" << p1LabScore
                                                 << "\t\t\t\t" << p1Ave << endl;
    cout << personTwo    << "\t\t" << p2ClassScore << "\t\t\t\t\t" << p2LabScore
                                                 << "\t\t\t\t" << p2Ave << endl;
    cout << personThree << "\t"    << p3ClassScore << "\t\t\t\t\t" << p3LabScore
                                                 << "\t\t\t\t" << p3Ave << endl;
    cout << personFour  << "\t\t"  << p4ClassScore << "\t\t\t\t\t" << p4LabScore
                                                 << "\t\t\t\t" << p4Ave << endl;
    cout << personFive  << "\t\t" << p5ClassScore << "\t\t\t\t\t" << p5LabScore
                                                 << "\t\t\t\t" << p5Ave << endl;
    }

void BONUS(){
    cout << "I haven't done the bonus yet. It will go here eventually.";
    }

void userSaysNoPartOne(){ //Subloop is user says no to first section
    cout << "What, this project isn't good enough? We'll see about that..."
            "Let's try again!\n" << "Would you like to proceed to part one of "
            "the project now? (y/n)\n";
    char userInput;
    cin >> userInput; //Ask user if he wants to proceed (y/n)
    if (userInput = 'y'){ //If yes, then goto first section
        partOne();
        }
    else{  //If no, too bad go there anyways
        cout << "Yeah right you thought you were getting out of that? No way! "
                "Let's do it anyways!";
        partOne();
    }}

void userSaysNoPartTwo(){ //subloop if user says no to second section
    cout << "You honestly have no clue what you're missing...This is a good "
            "part. I'll give you one more chance. (y/n)\n";
    char userInput;
    cin >> userInput; //Get input (y/n)
    if (userInput = 'y'){  //If yes, then go to second section
        partTwo();}
    else{ //If no, too bad go there anyways
        cout << "Too bad! It's too good to miss, we're going there anyways!";
        partTwo();}
    }

void userSaysNoPartThree(){ //Subloop if user says no to thrid section
    cout << "You seem defiant today...Hmm, you must be sad. Maybe a smile will" 
            " cheer you up!\n :-D\n Did that work? (y/n)"; //Get input (y/n)
    char userInput;
    cin >> userInput;
    if (userInput = 'y'){ //If yes, go to section three
        cout << "I knew it! Those things cheer everything up! Good call, me...";
        partThree();}
    else{ //If no, too bad go there anyways
        cout << "Ah well, everyone has ther bad days...Just have to work through "
                "it I guess...Good luck with that!";
        partThree();}
    }

void userSaysNoPartFour(){ //Subloop if user says no to fourth section
    cout << "What is this a joke? You've come so far! You can't stop now! Move "
            "along...";
    partFour(); //No input or option, output a statement and go to section four
    }

void userSaysNoPartFive(){
    cout << "Ok really?! There's only one problem left...There's just no excuse "
            "for that.";
    partFive();}

void userSaysNoBonus(){
    cout << "OH COME ON!! It's the bonus question! You know I wasn't passing"
            "that up! Get real...See you at the end!";
    BONUS();}
                   
int main(void){  //Main loop to control flow of program
    cout << "This is Byron's first project for Computer Science 1\n";
            //Explaining to the user what the project is
    cout << "It's all compiled into one file requiring user input between "
            "sections\n";
    char userInput;
    //Variable to store y/n for user input on moving further in the code.
    cout << "Would you like to proceed to the first portion on of project now? "
            "(y/n)\n";
    cin >> userInput; //Prompting user for input, either y or n (Yes or No)
    if (userInput = 'y'){
        partOne();}
    else{
        userSaysNoPartOne();}
    cout << "Here's the second portion of the project. You remember, the one "
            "where we counted and commented...\nAre you ready to learn some "
            "French and Spanish (I'm hoping you know English already...)\n (y/n)"
            "";
    cin >> userInput; //Getting input from user
    if (userInput = 'y'){
        partTwo();}
    else{
        userSaysNoPartTwo();}
    cout << "Ah, I see you've made it back from the second part of this project, "
            "hope you liked it! At this point I think it's safe to take some sort "
            "of coffee or beverage break. Not food though, no one likes a sticky "
            "keyboard, and they're way too hard to clean.../n It's about time to "
            "venture into the third part of this project. This one was a bit more "
            "fun, we had to line things up and make a list. I know, don't get too "
            "excited yet though. Are you ready to take a look at it? (y/n)";
    cin >> userInput; //Getting input from user
    if (userInput = 'y'){
        partThree();}
    else {
        userSaysNoPartThree();}
    cout << "I'm sure you had a blast looking over that portion of the project, "
            "I'll skip the chatter and take you right into the fourth portion "
            "where we played around with some strings for the first time. That "
            "is, unless you did what I told you not to and got food in that last "
            "break! Better take some time cleaning up the keyboard...Just tell"
            "me when you're ready. (y/n)";
    cin >> userInput;
    if (userInput = 'y'){
        partFour();}
    else{
        userSaysNoPartFour();}
    cout << "WHOA were those strings crazy! Although you'd never know if they "
            "were string variables or not unless you took a look at the source "
            "code...Uh oh, better make sure, we don't want someone cheating! "
            "I'll give you a minute to do that...\nAll done and ready to move "
            "on? (y/n)";
    cin >> userInput;
    if (userInput = 'y'){
        partFive();}
    else{
        userSaysNoPartFive();}
    cout << "Ah I KNOW you didn't think I skipped out on the bonus did you? "
            "I know I know, you're ready to be done...So am I, trust me. BUT, it "
            "wouldn't be a bonus if it was easy! Are you ready to check out the "
            "bonus? (y/n)";
    cin >> userInput;
    if (userInput = 'y'){
        BONUS();}
    else{
        userSaysNoBonus();}
    cout << "I hope you enjoyed, it was a heck of a good time to type!\n"
            "Byron D Moran\nStudent ID: 2201057\n bdm37";
}