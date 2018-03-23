//
//  main.cpp
//  main
//
//  Created by Taron Nersisyan on 3/23/18.
//  Copyright © 2018 Taron Nersisyan. All rights reserved.
//


#include <iostream>
using namespace std;
int findNextPrime(int n);
bool isPrime(int n);
int findNextPerfect(int n);
bool isPerfect(int n);
int main()

{
    int input,j=1,sum=0;
    
    cout << "Please enter a prime number: ";
    cin >> input;
    
    cout << "\nThe next prime number after " << input << " is " << findNextPrime(input) << ". \n";
    
    while(j<input){
        if(input%j==0)
            sum=sum+j;
        j++;
    }
    
    if(sum==input)
        cout << j << " is a perfect number.\n";
    else
        cout << j << " is not a perfect number.\n";
    
    
    return 0;
}


int findNextPrime(int n)
{
    int nextPrime = n;
    bool found = false;
    
   
    while (!found)
    {
        nextPrime++;
        if (isPrime(nextPrime))
            found = true;
    }
    
    return nextPrime;
}


bool isPrime(int n)
{
 
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            return false;
    }
    
    return true;
    
}
