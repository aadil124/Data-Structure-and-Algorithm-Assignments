#include<iostream>
using namespace std;

void numberPattern(int n){
  for(int i=1; i<=n; i++){
    for(int j=1;j<=n-i;j++){
       cout<<" ";
    }
    for(int k=1; k<=i;k++){
        cout<<k<<" ";
    }
    cout<<endl;
  }
}

int main(){
    int n;
    cout<<"Enter rows for print number pattern: ";
    cin>> n;
    numberPattern(n);
    return 0;
}