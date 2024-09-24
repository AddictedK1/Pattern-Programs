#include<iostream>
using namespace std;

void BoxPattern()  {
    int r;  // number of rows
    cout<<"enter row : ";
    cin>>r;

    for(int i=0; i<r; i++)  {
        for(int j=0; j<r; j++)  {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()  {
    
    BoxPattern();
    return 0;
}
