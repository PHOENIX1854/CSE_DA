#include<iostream>
using namespace std;

int main(){
    /*for a right triangle:
    *
    **
    ***          a=5
    ****
    *****
    */
    //code:
    /*
    int a;
    cin>>a;

    int i;
    int j;
    
    for(i=0;i<=a;i++){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"*"<<endl;
    }*/

    /*upside down right angle triangle
    ******
    *****
    ****          a=5
    ***
    **
    *
    */
    //code:
    /*
    int a;
    cin>>a;

    int i;
    int j;

    for(i=a;i>=0;i--){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"*"<<endl;
    }
    */

    /*for a square:
    *******
    *******
    *******         a=5
    *******
    *******
    *******
    */
    //code:
    /*
    int a;
    cin>>a;

    int i;
    int j;

    for(i=0;i<=a;i++){
        for(j=0;j<=a;j++){
            cout<<"*";
        }
        cout<<"*"<<endl;
    }
    */

    /*for a hollow square:
    ****
    *  *
    *  *
    *  *
    ****
    */
    //code:
    /*
    int row;
    int col;
    cin>>row;
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
    */

   int row;
   int col;
   cin>>row>>col;

   for(int i=0;i<=row;i++){
    for(int j=0;j<=col;j++){
        if(j==1){
            
        }
        
    }
   }
}