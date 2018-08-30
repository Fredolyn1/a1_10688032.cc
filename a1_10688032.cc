#include <iostream>
#include <cmath>
using namespace std;

int main ()
{

    int i;
    cout << "Enter number:"; 
    cin >> i;
	for (int a = 2; a <= i; ++i){	

    if ((i %2==0) || (i%3==0)) {
        cout << i << "is not prime" << endl;
break;
    
     }else{
         cout << i << "is prime" << endl;



}
}
return 0;
}
