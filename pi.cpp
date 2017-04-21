#include <iostream>
using  namespace std;

int main() {
    int n;//Define type of n.
    double pi = 0.0;//Initialize pi.
    int i;//Define type of i
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);//Set the precision to 3 digits.
    cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;//print out this line.
    cin>>n;//Input value n.
    n=n+1;
    while(n>0){
        for(i = 0; i< n; i++){
            if(i%2==0){
               pi = pi + (1.0/double(2.0*i+1.0));//Refresh the value of pi based on the formula given.
            }

            else{
               pi = pi - (1.0/double(2.0*i+1.0));
            }
        }

        pi=pi*4.0;//formula 
    
    if(n==1){
        cout<<"The approximate value of pi using "<< n <<" term is: "<<pi<<endl;//print out this line if n is 1.
    }
    else{
        cout<<"The approximate value of pi using "<< n <<" terms is: "<<pi<<endl;//print out this line if n is any number but 1.
    }
    pi=0.0;//Reinitialize pi.
    
    cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
    cin>> n;//Input n.
    n=n+1;
}

    return 0;//Terminate the code.
}   
