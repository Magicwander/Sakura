/*
Title : Variables , Data types and basic operators 
Difficulty : Basic
Time spent : will be tracked and updated at the end
Concepts covered :
- Basic data types (int float double char bool)
- variables declaration and initialisation 
- type conversions
- arithmetic operators 
- comparison operators 
- logical operators 

Problem statement 01
Temperature conversion and analysis system 
create a program that : 
1 takes temperature readings in celsius
2 convert them to Fahrenheit and kelvin 
3 analyzes if the temperature is suitable for :
    - water freezing (0 C)
    - water boiling (100 C)
    - Room temperature (20 - 25 C)
4 determines if it's a valid temperature reading (>-273.15 C)

*/


#include <iostream>
#include <iomanip>

int main (){
// declaring the variables 
double celsius , faranheit , kelivin;
bool isvalidtemp , isroomtemp, canwaterfreeze , canwaterboil ;

// constants
const double Absolute_zero = -273.15;
const double Room_Temp_Min = 20.0;
const double Room_Temp_Mx = 25.0;
const double water_freezing = 0.0;
const double water_boiling = 100.0;

// get input 

std::cout << "Enter temperature in celsius : ";
std::cin >> celsius;

// analyze temperature conditions
isvalidtemp = (celsius > Absolute_zero);
isroomtemp = (celsius >= Room_Temp_Min && celsius <= Room_Temp_Mx);
canwaterfreeze = (celsius <= water_freezing);
canwaterboil = (celsius >= water_boiling);

// output results with proper formating 

std::cout << std::fixed << std::setprecision(2);
std::cout << "\nTemperature Conversion Results:";
std::cout << "\n------------------------------";
std::cout << "\nCelsius : " << celsius << " C";
std::cout << "\nFaranheit : " << faranheit << " F";
std::cout << "\nKelvin : " << Kelvin << " K";

std::cout << "\nTemperature Analysis : ";
std::cout << "\nn-----------------";
std::cout << "\nValid temperature reading : " << (isvalidtemp ? "Yes" : "No");


if(isvalidtemp){
    std::cout << "\nRoom temperature : " << (isroomtemp ? "Yes" : "No");
    std::cout << "\nWater can freeze : " << (canwaterfreeze ? "Yes" : "No");
    std::cout << "\nWater can boil : " << (canwaterboil ?  "Yes" : "No");

}

else {
    std::cout << "The temperature given is not an valid temperature must be more than the abosolute temp";
}

    return 0;
}


/*
Problem statement 2 
Bsic data types and the declarions and introdution to type modifiers , to type sizes and constants
*/

#include<iosteam>
using namespace std;

int main (){
 // Sections 1 : Basic Data types 
    // integer types 
    int age = 25;
    short small_num = 32767;
    long large_num = 2147483647;

    // floating point types
    float price = 99.99f; // single precision
    double pi = 3.14159265359; // double precision

    // character type 
    char grade = 'A'; // single character 

    // boolean type 

    bool is_active = true; // true / false

    // section 02 
    unsigned int positive_only = 4294967295; // no negative numbers
    signed int with_sign = -42;

    // section 3 : Constants
    const int MAX_SCORE = 120;

    // section 4 : type sizes 


    std::cout << "Size of data types in bytes : " << "\n" ;
    std::cout << "int : " << sizeof(int) << "\n";
    std::cout << "Short : " << sizeof(short) << "\n";
    std::cout << "long : " << sizeof(long) << "\n";
    std::cout << "float : " << sizeof(float) << "\n";
    std::cout << "double " << sizeof(double) << "\n";
    std::cout << "char : " << sizeof(char) << "\n";
    std::cout << "bool : " << sizeof(bool) << "\n";

    return 0;
}



/*
problem 3 : student grade calculator 
create a program that :
1 declares variable for :
    - student name (string or char array : here string used )
    - three test scores for each student
    - final average (float)
2 take user input for all values 
3 calculates the average 
4 determines letter grade (A : >= 90 ; B: >= 80 ; C: >= 70 ; D: >= 60; F: < 60)
5 prints a summary with all information 


*/

#include <iostream>
#include <stream>


int main(){
// declare variables 
string student_name ;
float a, b, c;
float avg ;

// get input 
std::cout << " Enter the student's name : ";
std::cin >> student_name;
std::cout << "Enter the marks a , b , c for example one by one : ";
sd::cin >> a >> b >> c;

// calculating the average using the 3 input marks 
 avg = (a + b + c )/3;

 // determining the letter grade 
 is_A = (avg >= 90);
 is_B = ( avg < 90  && avg >= 80);
 is_C = ( avg < 80  && avg >= 70);
 is_D = (avg < 70 && avg >= 60);
 is_F = (avg < 60);

 // gettign the letter grade to a char variable for easy use 
 char A ;

 if (is_A){
    A = 'A';
 }
 else if (is_B){
    A = 'B';
 }
 else if (is_C){
    A = 'C';
 }
 else if (is_D){
    A = 'D';
 }
 else {
    A = 'F';
 }

 // or use another else if (is_F) { A = 'F'} else { string lettergrade = "Didn't submit the marks correclt "}

// printing the summary 
std::cout << "The final average is  : " << avg ;
std::cout  << "The letter grade is " << A;

    return 0;
}

/*Problem 5 : Financial Calculator 
create a program that :
1 decralre variable for :
    - initial investmenet (double as data type)
    - intrest rate (float)
    - investment duration in years (int)

2 takes user input for all values 
3 calculates compount intrest using A = P(1+ r)^ t
4 handles decimals correcly 
5 print the intial and final amounts 
*/

#include <iostream>

int main (){
    // declaring variables
    double initial_inv ;
    float rate;
    int time;


    // get input 
    std::cout << "Enter the intial investment value : ";
    std::cin >> initial_inv;
    std::cout << "Enter the investment intrest rate :  *in a percentage decimal like 5% is 0.05*";
    std::cin >> rate;
    std::cout << "Enter the duration of the investmenet  : ";
    std::cout << time;

    // calculation of the compound intrest 
    double compound_intrest = initial_inv(1 + rate)^time;

    // Handles the decimals correcly 
    // this is beacuse of the use of double here 

    // prints intial and final amounts
    std::cout << "The intial amounts : " << initial_inv << "\n";
    std::cout << "The final amounts : " << compound_intrest << "\n";

    return 0;
}

/*
In each of the examples 
the temperature example 
the student mark calculator and financial calculator 
uses all the learning points and is within the scope of the coding topic 
main points to identify the use of booleans which is out side also the ternary operator 
is 
we have a variable and if a < 1 then we print a is  less thn 1 
also else  print "No a is not less than 1 " 
Norma method will be 
 


 ```
#include <iostream>
int main (){
    // declaring the variable a for user input 
    int a ;
    std::cout << "Enter a random value for a ";
    std::cin >> a;

    // we got the value for a and now compharison 

    if ( a < 1 ){
    std::cout << "A is less than 1 ";
    }
    else {
    std::cout << "A is more than 1 "
}

    // but the same lines of code can be summed to 
    std::cout (a < 1 ? "A is less than 1 " : "A is more than 1 ");
    in one statment and this is called ternary operator ( conditon ? do  a if yes : or do b is no)
return 0;


 ```


*/




/*



Learning points :
1 Variables store data and must have a type ex 
        int x {0}; meaning x is a variable assigned number 0 and the data type is integer

2 Different data types can have different ranges and precision
3 type conversions can be implicit or explicit 
4 boolean variables store true / false values
5 operators help perferom calculations and compharisons
6 constants should be used for fixed values 


*/