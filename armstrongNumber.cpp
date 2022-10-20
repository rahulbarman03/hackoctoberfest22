#include <iostream>
using namespace std;

int main() {
    
    int num, originalNum, remainder, result = 0;

    cout<< "enter a 3 dgit number ";

    cin>>num;

    originalNum=num;   //initialising the value 

    while (originalNum>=0) {

        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;//multiplying it the number of the digit the number contains
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
