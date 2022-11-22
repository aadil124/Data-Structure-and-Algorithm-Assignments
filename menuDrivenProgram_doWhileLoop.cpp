#include<iostream>

using namespace std;

int main (){
   int choice;
   char ch;

 do {
   cout << "Menu Driven Program" << endl;
   cout << "1. For Coffee" << endl << "2. For Tea"<<endl;
   cout << "Enter your choice" <<endl;
   cin  >> choice;

   if (choice == 1){
      cout << "Enjoy Coffee";
   } else if (choice == 2)
   {
     cout << "Enjoy Tea";
   } else 
   {
      cout << "Pls Enter Correct Choice";
   }
   cout << endl;
   cout << "Do you want enter choice again ?" << endl;
   cin >> ch;
 } while (ch == 'y');

 


    return 0;
}