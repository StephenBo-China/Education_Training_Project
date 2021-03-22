#include <iostream>
using namespace std;
 
int main ()
{
   if (true || false && false){
       cout << "1";
   } else {
       cout << "0";
   }
 
   return 0;
}