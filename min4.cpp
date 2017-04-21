#include <iostream>
#include <cstdlib>
using namespace std;


int smallest_of_two(int num1, int num2);//Define function and variables.
int smallest_of_three(int num1, int num2, int num3);//Define function and variables.
int smallest_of_four(int num1, int num2, int num3, int num4);//Define function and variables

int main(int argc, char *argv[]) {
    if (argc !=5) {
        cerr << "Usage: " << argv[0]<< " num1 num2 num3 num4" <<endl;
        cerr << " Prints smallest of the four numbers" <<endl;
        exit(1);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);
    cout << smallest_of_four(a,b,c,d) << endl;
    return 0;
}

int smallest_of_two(int num1, int num2){
    if (num1<num2)
    return num1;//Return num1 if it's smaller.
    return num2;//Return num2 if it's smaller.
}

int smallest_of_three(int num1, int num2,int num3){
    return smallest_of_two(num1,smallest_of_two(num2,num3));//Return the smallest of the three.
}

int smallest_of_four(int num1, int num2, int num3, int num4){
    return smallest_of_two(num1,smallest_of_three(num4,num2,num3));//Return the smaller one of  num1 and the smallest one of num 2,3,4.
}



   
