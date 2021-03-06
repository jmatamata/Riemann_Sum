//
//  functionReader.hpp
//  Riemann Sum
//
//  Created by Jorge Mata Jr on 2/15/20.
//  Copyright © 2020 Mata Works. All rights reserved.
//

#pragma once

class functionReader
{
    //This data member holds an array of characters that the user inputs as a function.
   char functionBuffer[40];
    
    //This is the last index of the function buffer array. This will be used to change the for loops to use pointers.
    const char* bufferEnd = functionBuffer + 40;
    
    //This is the first index of the function buffer array. This will be used to change the for loops to use pointers.
    const char* bufferStart = functionBuffer - 1;
    
    //This is the value of variable terms in the function.
    int variableTerms = 0;
    
    //This vector stores all the multiples from the function.
    std::vector<long double> functionMultiples;
    
    //This vector stores all the powers from the function.
    std::vector<long double> functionPowers;
    
    //This is the constant of the function.
    long double functionConstant = 0;
    
public:
    
    void reader ();
    
    //This function catches all the multiples in the user inputted function. All numbers after 'x' symbol.
    long double multipleFunctionCatcher ( char* index );
    
    //This function catches all the power numbers that are after the '^' symbol.
    long double powerFunctionCatcher ( char* index );
    
    //This function catches the constant at the end of the user defined function.
    long double constantFunctionCatcher ();
    
    //This checks to see if the constFunctionCatcher should be called or not.
    bool constantChecker ();
    
    //This evaluates the function using an inputed variable.
    long double function ( const long double& variable );
    
    int getVariableTerms();
};
