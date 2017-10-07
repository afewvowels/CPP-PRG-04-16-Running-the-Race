//
//  main.cpp
//  PRG-4-16-Running-the-Race
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks for the names of three runners and the time it took each
//  of them to finish a race. The program should display who came in first, second, and
//  third place.
//
//  Input Validation: Only accept positive numbers for the times.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strName0,
           strName1,
           strName2;
    
    float fltTime0,
          fltTime1,
          fltTime2;
    
    //Begin Runner Data Requests
    cout << "Please enter the name of the first runner:\n";
    getline(cin, strName0);
    cout << "Please enter " << strName0 << "'s time:\n";
    cin >> fltTime0;
    while(!cin || fltTime0 < 0.0f || fltTime0 > 300.0f)
    {
        cout << "Please enter a time between 0 minutes and 300 mintues:\n";
        cin.clear();
        cin.ignore();
        cin >> fltTime0;
    }
    
    cout << "Please enter the name of the first runner:\n";
    getline(cin, strName1);
    cout << "Please enter " << strName1 << "'s time:\n";
    cin >> fltTime1;
    while(!cin || fltTime1 < 0.0f || fltTime1 > 300.0f)
    {
        cout << "Please enter a time between 0 minutes and 300 mintues:\n";
        cin.clear();
        cin.ignore();
        cin >> fltTime1;
    }
    
    cout << "Please enter the name of the first runner:\n";
    getline(cin, strName2);
    cout << "Please enter " << strName2 << "'s time:\n";
    cin >> fltTime2;
    while(!cin || fltTime2 < 0.0f || fltTime2 > 300.0f)
    {
        cout << "Please enter a time between 0 minutes and 300 mintues:\n";
        cin.clear();
        cin.ignore();
        cin >> fltTime2;
    }
    //End Runner Data Requests
    
    if(fltTime0 >= fltTime1 && fltTime0 >= fltTime2) //Begin First Case, Runner0 is first
    {
        cout << strName0 << " came in first!\n";
        
        if (fltTime1 >= fltTime2) //Check if Runner1 is faster than Runner2, assign 2nd & 3rd
        {
            cout << strName1 << " came in second!\n"
            << strName2 << " came in third!";
        }
        else //Fall-through to here means Runner2 is faster than Runner1, assign 2nd & 3rd
        {
            cout << strName2 << " came in second!\n"
            << strName1 << " came in third!";
        }
        
        return 0;
    }                                                       //End First Case, Runner0 is first
    else if(fltTime1 >= fltTime0 && fltTime1 >= fltTime2)   //Begin Second Case, Runner1 is first
    {
        cout << strName1 << " came in first!\n";
        
        if (fltTime0 >= fltTime2)
        {
            cout << strName0 << " came in second!\n"
            << strName2 << " came in third!";
        }
        else
        {
            cout << strName2 << " came in second!\n"
            << strName0 << " came in third!";
        }
        
        return 0;
    }                                                        //End Second Case, Runner1 is first
    else                                                     //Begin Third Case, Runner2 is first
    {
        cout << strName2 << " came in first!\n";
        
        if (fltTime0 >= fltTime1)
        {
            cout << strName0 << " came in second!\n"
            << strName1 << " came in third!";
        }
        else
        {
            cout << strName1 << " came in second!\n"
            << strName0 << " came in third!";
        }
        
        return 0;
    }                                                         //End Third Case, Runner2 is first
    
}



