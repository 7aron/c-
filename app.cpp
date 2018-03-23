//
// main.cpp
// app
//
// Created by Taron Nersisyan on 3/21/18.
// Copyright © 2018 Taron Nersisyan. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // std::string name;
    // std::cout « "What is your name? ";
    // getline (std::cin, name);
    // std::cout « "Hello, " « name « "!\n";
    
    int i, count=0;
    float num[10], sum=0.0, average;
    
    
    
    
    for(i = 0; i < 10; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin>> num[i];
        sum += num[i];
        
    }
    
    average = sum / 10;
    cout << "Average = " << average << endl;
    
    for (i = 0; i < 10; i++) {
        if (num[i] > average) {
            count++;
        }
        
    }
    
    cout << "Number of integers greater than average: " << count << endl;
    
    
    
}
