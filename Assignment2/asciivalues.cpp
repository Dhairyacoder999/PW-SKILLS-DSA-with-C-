// WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std ;
int main(){
    char character_1 ; 
    char character_2 ; 
    cout << "Enter the value of character 1 " << endl ; 
    cin >> character_1 ; 
    cout << "Enter the value of character 2 " << endl  ; 
    cin >> character_2 ; 
    int difference = int(character_1) - int(character_2); 
    cout << "the integral difference between enterend ascii values are : " << difference; 


    return 0 ; 
} 
