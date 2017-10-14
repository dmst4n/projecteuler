#include <iostream>
#include <vector>

using namespace std;

int main(){   
    int size = 2000000;
    int numbers[size];
    numbers[0]=0;
    numbers[1]=0;
    for(int i = 2; i < size; i++){
       numbers[i] = i;
    }
    for(int i = 2; i < size; i++){
        for(int j = i+i;j < size; j = j+i){
             numbers[j] = 0;
        }
    }
    long int result = 0;
    for(int i = 0; i < size; i++){ 
        result += numbers[i];
    }
    cout << result << endl;
    return 0;
}
