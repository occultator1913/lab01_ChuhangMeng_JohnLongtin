#include <iostream>
using namespace std;

int main() {
    int rows=1;//Initialize rows
    int columns=1;//Initialize columns
    int i = 0;
    int j = 0;
while(rows>0&&columns>0){   
    cout<<"Enter number of rows and columns:"<<endl;//print out this line every time while loop's executed.
    cin>>rows>>columns;//Input values for rows and columns.
    while(i<rows){//Execute when i is smaller than rows.
       for(j=0;j<columns;j++){//loop for the exact many times as value of columns indicates.
           cout<<"X.";//Print out X. 
       }
       cout<<endl;
       i++;
    }
}
return 0;//Terminate the code.
}
