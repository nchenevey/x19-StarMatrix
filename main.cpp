// Author: Nicholas chenevey
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
     vector <vector <char> > starMatrix;
     int rowsInput;
     int colsInput;

     cout<<"Enter rows and columns of stars:"<<endl;
     cin>>rowsInput;
     cin>>colsInput;
     if(rowsInput > 0 && colsInput > 0)
     {
             for(int rows = 0; rows < rowsInput; rows++)
             {
                     starMatrix.resize(rowsInput);
                     for(int cols = 0; cols < colsInput; cols++)
                     {
                             starMatrix[rows].resize(colsInput);
                             starMatrix[rows][cols] = '*';
                             cout<<starMatrix[rows][cols];
                     }
                     cout<<endl;
             }
     }
return 0;
}

