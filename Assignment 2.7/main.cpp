//  Assignment 2.7
//  Angela Flores Figueroa
//  CSCI 40 Fall 2022

#include <iostream>
using namespace std;

int main()
{
    // Display a triangle based on users input on base.
    int a;
    cout<<"Please enter an integer for the base of the triangle: "<<endl;
    cin>>a;

    for(int i=a; i>=1; i--){
        for (int k=i; k<a; k++)
            cout<<"  ";
        for (int k=0; k<i; k++) //
            cout<<" *";
        cout<<endl;
    }
    
    int l, w;
    cout<<"Please enter the length and width of a triangle you wish to be displayed: "<<endl;
    cin>>l>>w;
    cout<<endl;
    
    for (int i=0; i<l; i++){
        for ( int j=0; j<w; j++)
            if (i==0 or i==l-1 or j==0 or j==w-1)
                cout <<"* ";
            else
                cout<<"  ";
        cout<<endl;}
        
    cout<<endl;

    return 0;
}
