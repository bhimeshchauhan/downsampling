//
//  main.cpp
//  downsampling
//
//  Created by Bhimesh Chauhan on 5/12/19.
//  Copyright © 2019 Bhimesh Chauhan. All rights reserved.
//

#include <iostream>


const int MAX = 100;
int mat[MAX][MAX];

// Fills non-one entries in column j
// Given that there is a "1" at
// position mat[i][j], this function
// fills other entries of column j.
void fillRemaining(int i, int j, int n)
{
    // Initialize value to be filled
    int x = 2;
    
    // Fill all values below i as 2, 3, ...p
    for (int k = i + 1; k < n; k++)
        mat[k][j] = x++;
    
    // Fill all values above i
    // as p + 1, p + 2, .. n
    for (int k = 0; k < i; k++)
        mat[k][j] = x++;
}




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
