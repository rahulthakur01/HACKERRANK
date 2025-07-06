#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string catAndmouse(int x, int y, int z){
    int difCatA = abs(z - x);
    int difCatB = abs(z - y);

    if(difCatA == difCatB){
        return " Mouse C ";
    }else if(difCatA < difCatB){
        return "Cat A";
    }else{
        return "Cat B";
    }

}

int main(){
    int x = 4, y = 2, z = 3;
    
   string result = catAndmouse(x,y,z);

   cout<< result << endl;

    return 0;
}