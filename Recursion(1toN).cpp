#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<"SAHIL"<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  int n = 4;
  func(1,n);
  return 0;

}