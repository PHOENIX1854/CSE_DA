#include<iostream>
using namespace std;

class Box{
    double width;

    public:
        friend void printwidth(Box box){
            cout<<"width is "<<box.width<<endl;
        }
        void setwidth(double wid){
            width=wid;
        }
};

int main(){
    Box box;
    box.setwidth(11);
    printwidth(box);

    return 0;

}
