// C++ program to convert binary number to Decimal


#include <iostream>
#include<cmath>
using namespace std;


// this function receives a number in binary form 
// and returns the corresponding value in decimal form


int binaryToDecimal(int num){
    
    int temp= num;
    
    // position variable to keep track of the position of the bits
    // from right to left, position increases from 0, 1, 2,...,n
    int position=0;
    
    // result variable stores the sum after every bit is multiplied
    // by the 2 raised to the power of the position of the corresponding bit
    int result=0;
    
    while(temp>0){
        
        // this will give the rightmost digit
        // e.g. 36748%10 will give 8.
        int rightMostBit = temp%10;
        
        
        result += rightMostBit * pow(2, position);
        
        // increment position as we travel from right to left
        position++;
        
        // this will remove the rightmost digit
        // e.g. 36748/10 = 3674
        temp= temp/10;
    }
    
    // return the calculated result
    return result;
}


// main function where the code is tested
int main()
{
    int num;
    cout<<"Enter the Binary Number.\n";
    cin>>num;
    
    
    int temp= binaryToDecimal(num);
    
    cout<<"The Decimal form of the given binary number is : "<< temp;


    return 0;
}
