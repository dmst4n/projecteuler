#include <iostream>
#include <vector>

using namespace std;

int checkPrimes(int number, vector<int> primes){
    for(int i = 0; i < primes.size(); i++){
        if(number%primes[i]==0){
            return -1;
        }
    }
    return number;
}

int main(){
    long int number = 600851475143;
    int testnumber = 997;
    vector<int> primes;
    primes.push_back(2);
    while(testnumber > 1){
        int tmp = checkPrimes(testnumber, primes);
        if(tmp > 0){
            primes.push_back(tmp);
            testnumber = testnumber / tmp;
        }
    }

    return 0;
}
