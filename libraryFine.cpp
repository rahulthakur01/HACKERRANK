#include<iostream>
using namespace std;
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine ;
    if( y1 > y2){
       return 10000;
    }
   else if(d1 > d2 && m1 == m2 && y1 == y2){
        fine = 15 * (d1 - d2);
    }
  else if(m1 > m2 && y1 == y2){
        fine = 500 * (m1 - m2);
    }
    else{
        return 0;
    }
    return fine;
}


int main(){
 int d1 = 9;
 int d2 = 6;
 int m1 = 6;
 int m2 = 6;
 int year1 = 2016;
 int year2 = 2016;
    int result = libraryFine(d1,m1,year1,d2,m2,year2);
    cout<< result << endl;
    return 0;
}
// 9 6 2015
// 6 6 2015