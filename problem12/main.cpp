#include <iostream>
#include <vector>

using namespace std;

vector<long long int> getPrimes(int n){
    vector<long long int> result;
    result.push_back(2);
    long long int count = 3;
    while(result.size() < n){
        for(int i = 0; i < result.size(); i++){
            if(count%result[i]==0){

                break;
            }
            if(i+1 == result.size()){
                result.push_back(count);
                i++;
                cout << count << endl;
            }
        }
        count++;
    }   
    return result;
}

int checkDivisors(int number, int divisor){
    if(number%divisor!=0){
        return 0;
    }
    return 1 + checkDivisors(number/divisor,divisor);
}



int main(){
    
    vector<long long int> primes;
    primes = getPrimes(8);
    long long int result = 1;
    for(int i = 0; i < primes.size(); i++){
        result = result*primes[i];

    }
    for(int i = 10000; i>0; i++){
        bool isResult = true;
        long int tmp = (i * (i-1))/2;
        int divisors = 1;
        int numDivisors = 0;
        for(int j = 0; j < primes.size(); j++){
            numDivisors = checkDivisors(tmp,primes[j]);        
            divisors = divisors * (numDivisors + 1);
        }
        if(divisors > 500){
            cout << i << endl;
            result = tmp;
            break;
        }
    }
    



    return 0;
}

