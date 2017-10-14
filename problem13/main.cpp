#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    ifstream inputNumber;
    inputNumber.open("input.txt");
    vector<string> numbers;
    string line;


    if(inputNumber.is_open()){
         while(inputNumber.good()){
            getline(inputNumber,line);
            cout << line << endl;
            numbers.push_back(line);
        } 
        inputNumber.close();
    }
    numbers.pop_back();
    
    long long int result = 0;
    for(int i = 50; i-10 >= 0; i--){
        for(int j = 0; j < numbers.size(); j++){
            long int inNum = stol(numbers[j].substr(i-10,10));
            if(i== 50){
            cout << inNum << endl;
            }
            result = result + inNum;     
        }
    
        result = floor(result/10);
    }
    cout << result << endl;
    return 0;
}
