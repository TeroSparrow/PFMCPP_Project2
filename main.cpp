#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 

 Integer                    int
 Character                  char
 Boolean                    bool
 Floating Point             float
 Double Floating Point      double
 Void                       void  
 Wide Character             wchar_t
 Auto                       auto


 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    int mid = 2500;
    int high = 12000;
    int low = 80;

    bool thisIsHard = true;
    bool thisIsEasy = false;
    bool thisIsDifficult = thisIsHard; //does this work?

    char face = 'f';
    char arm = 'a';
    char leg = 'l';

    float a = 1.0f;
    float b = 2.0f;
    float c = 3.0f;

    double d = 10.0;
    double e = 20.0;
    double f = 30.0;

    auto rate = 15;
    auto pan = 0;
    auto depth = 1;


    ignoreUnused(mid, high, low, thisIsHard, thisIsDifficult, thisIsEasy, face, arm, leg, a, b, c, d, e, f, rate, pan, depth);

}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int playTriad(int root, int third, int fifth)
{
    ignoreUnused(root, third, fifth);
    return {};
}
/*
 2)
 */
void addMeasure (int space = 4)
{
    ignoreUnused(space);
}
/*
 3)
 */
void addQuarterRest (int space = 1)
{
    ignoreUnused(space);
}
/*
 4)
 */
bool groove (bool drums = true, bool bass = true)
{
    ignoreUnused(drums, bass);
    return {};
}
/*
 5)
 */
float takeARide (bool passenger, int vehicleType)
{
    ignoreUnused(passenger, vehicleType);
    return {};
}
/*
 6)
 */
double buyGroceries(bool dietaryRestrictions, int fruits, int vegetables, int dairy, int meat)
{
    ignoreUnused(dietaryRestrictions, fruits, vegetables, dairy, meat);
    return {};
}
/*
 7)
 */
char AB (char A = '1', char B = '2')
{
    ignoreUnused(A, B);
    return {};
}
/*
 8)
 */
float setTimeDivision (int songTime, int fraction)
{
    ignoreUnused(songTime, fraction);
    return {};
}
/*
 9)
 */
int playNote (int noteFreq, int noteLength, int noteVel)
{
ignoreUnused(noteFreq, noteLength, noteVel);
return {};
}
/*
 10)
 */
double gamble (bool winLose, double earnings)
{
    ignoreUnused(winLose, earnings);
    return{};
}
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    int playCMajor = playTriad(1,5,8);

    //2)
    addMeasure();

    //3) 
    
    addQuarterRest();

    //4)
    auto addBassTrack = groove(true, false);

    //5)
    auto takeBus = takeARide (true, 3);

    //6)
    double vegetarianShoppingList = buyGroceries (true, 1, 2, 4, 0);

    //7)
    int takeTwelve = AB();

    //8)
    float tempo = setTimeDivision (225, 25);

    //9)
    double noteG5 = playNote(440, 2, 127);

    //10)
    auto goToCasino = gamble (false, -500);
    
    ignoreUnused(carRented, playCMajor, addBassTrack, takeBus, vegetarianShoppingList, takeTwelve, tempo, noteG5, goToCasino);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
