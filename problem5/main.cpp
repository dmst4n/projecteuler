#include <iostream>
#include <vector>

using namespace std;

int main(){
    long int result = 1;
    vector<int> numbers;

    for(int i = 1; i <= 20; i++){
        numbers.push_back(i);
    }    
    
    for(int i = 0; i < 20; i++){
       
            cout <<"result: " << result << "%" << numbers[i] << " = " << result%numbers[i] << endl;
            result*=numbers[i];
            for(int j = i+1; j < 20; j++){
                cout <<"numbers: "<< numbers[j] << "%" << numbers[i] << " = " << numbers[j]%numbers[i] << endl;
             
                if(numbers[j]%numbers[i]==0){
                    numbers[j]=numbers[j]/numbers[i];
                }
            }            
       
    }
    cout << result << endl;

    return 0;
}


