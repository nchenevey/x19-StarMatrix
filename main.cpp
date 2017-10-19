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


cout<<"Please enter the desired number of rows: ";
cin>>rowsInput;

while(rowsInput <= 0)
{
    cout<<"Please enter a row size greater than 0: ";
    cin>>rowsInput;
}



cout<<"Please enter the desired number of columns: ";
cin>>colsInput;

while(colsInput <= 0)
{
    cout<<"Please enter a column size greater than 0: ";
    cin>>colsInput;
}


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

return 0;
}
