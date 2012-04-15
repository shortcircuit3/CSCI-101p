//
//  ass3.cpp
//  
//
//  Created by Alex Miles on 4/15/12.
//  Copyright (c) 2012 Alex Miles Design. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    
    vector<int> grades;
    int number;
    int total = 0;
    int grade = 0;
    float avg = 0;
    
    
    cout << "Input your grades:" << endl;
    
	
	while(grades.size() < 10) { //the check condition
        
        cin >> number;
        
        grades.push_back(number);

	}
    
    
    cout << "grades: " << endl;
    
    
    
    // Loop through all numbers in vector and add grade to total
    for (int i = 0; i < grades.size() ; i++ ) {
        
        grade = grades[i];
        
        cout << grade << " ";
        
        total = total + grade; // Add grade to total
        
    }
    
    cout << endl;
    
    cout << "----------------------------------" << endl;
    
    cout << "total: " << total << endl;
    
    cout << "----------------------------------" << endl;
    
    
    
    avg = total / grades.size(); // Average all numbers
    
    cout << "average: " << avg << endl;
    
    
    

    cin.get();
	
}




