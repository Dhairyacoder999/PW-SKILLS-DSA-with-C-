// WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream> 
using namespace std ; 
int main(){
    double radius ; 
    double height ; 
    cout << "Enter the value of radius" << endl ; 
    cin >> radius ; 
    cout << "Enter the value of height " << endl ; 
    cin >> height ; 
    const float pi = 22/7 ; 
    double volume = pi*radius*radius*height ; 
    cout << "The volume of the given cylandar is : " << volume ; 
 
    return 0 ; 

}