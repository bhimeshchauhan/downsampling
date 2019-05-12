//
//  main.cpp
//  downsampling
//
//  Created by Bhimesh Chauhan on 5/12/19.
//  Copyright © 2019 Bhimesh Chauhan. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n = 2;
    
    // Passing n to constructMatrix function
    constructMatrix(n);
    
    // Printing the desired unique matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout<<mat[i][j];
        std::cout<<"\n";
    }
    return 0; 
}
