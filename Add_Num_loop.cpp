#include<iostream>
using namespace std;

int main (){
    
    cout << "*****Addition of fisrt 10 numbers*****" << endl;

    // simple for loop for printing 1 to 10 numbers
    // for ( int i = 0 ; i <= 10 ; ++i){
    //  cout << i << endl;
    // }


    // addition of first 10 numbers
    int sum = 0;
    for( int i = 1 ; i<=10 ; ++i){
        sum = sum + i; 
    }
    cout << "The sum of fisrt 10 number is: " << sum ;
    return 0;
}