#include <iostream>

using namespace std;
int main()
{
    char data [2][3][6] = {" 1 ", " 4 ", " 1 ", " 5 ", " 2 ", " 3 "};
    int i,j;
    cout<<"\n";
    cout<<"==========================\n";
    cout<<"MEMBUAT ARRAY 3D\n";
    cout<<"==========================\n";
   
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {cout<<data[i][j];}
    cout<<"\n";
    }
return 0;
}