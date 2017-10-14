#include <iostream>
#include <vector>
using namespace std;

int NumDigits(int x)  
{
     
            return (x < 10 ? 1 :   
                            (x < 100 ? 2 :   
                                     (x < 1000 ? 3 :   
                                              (x < 10000 ? 4 :   
                                                       (x < 100000 ? 5 :   
                                                                (x < 1000000 ? 6 :   
                                                                         (x < 10000000 ? 7 :  
                                                                                  (x < 100000000 ? 8 :  
                                                                                           (x < 1000000000 ? 9 :  
                                                                                                    10)))))))));  
} 

int main(){

    long int numbers = 2;
    long int f_n1 = 1;
    long int f_n2 = 1;
    int index = 2;
    int digits_f = 1;
    while(digits_f <= numbers){
        long int tmp = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = tmp;
        index++;

        if(NumDigits(f_n1) > NumDigits(f_n2)){
            digits_f++;

        }
    }
    while(digits_f < 1000){
        long int tmp = f_n1 + f_n2;        
        f_n2 = f_n1;
        f_n1 = tmp;
        int digits_fn1 = NumDigits(f_n1);
        int digits_fn2 = NumDigits(f_n2);
       index++; 
        if(digits_fn1 > digits_fn2){
            digits_f++;

            f_n2 = f_n2 / ((digits_fn2-numbers)*10);

            f_n1 = f_n1 / ((digits_fn2-numbers)*10);
//            cout << f_n2 << " +  " << f_n1 << endl; 
        }
    }

    cout << index << endl;

    return 0;
}
        
