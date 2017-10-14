#include <iostream> 
#include <cmath>

using namespace std;

int main(){
    int a_max = ceil( 500./sqrt(2));
    int b_min = 500-a_max;
    int b_max = ceil((1000-2*a_max/2)); 

    for(int a = 1;a  < a_max; a++){
        for(int b = b_min; b < b_max;b++){
            if((a*b)%1000 == 0 && a + b - (a*b)/1000 == 500){
               int c = 1000 - a - b;
               cout << a * b * c << endl; 
               break;
            }else if(a+b - (a*b)/1000 > 500 ){
                break;
            }               

        }
    }

    return 0;
}
