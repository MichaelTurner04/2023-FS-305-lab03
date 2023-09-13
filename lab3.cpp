
// Programmer: Michael Turner
// Student ID: 18229090
// Section: 305
// Date: 206
// File: lab3.cpp
// Purpose: Calculatar that adds current time + time 

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
unsigned int hours;
unsigned int minutes;
unsigned int seconds;
unsigned int n;
string meridiem;
cout << "Enter current time in HH:MM:SS format: ";
scanf("%02u:%02u:%02u", &hours,&minutes,&seconds);// Get current time
cout << "Enter the number of seconds to add (N): ";
cin >> n; //get time to add
seconds += n;
while (seconds > 60){
if (seconds >= 60){
seconds -= 60;  //program to add seconds to current time
minutes++;
}
if (minutes >= 60){
minutes -= 60;
hours++;
}
if (hours > 24){
hours -= 24;
}
}
hours %= 12;
if (hours > 12){ //program to find the meridiem
meridiem = "AM"; 
}
else{
meridiem = "PM";
}
cout << setfill('0'); //Fills blanks with 0 for time formatting
cout << "Updated time: " << setw(2)<<  hours << ":" << setw(2)<< minutes << ":" << setw(2) << seconds << meridiem << endl;
return 0;
}
