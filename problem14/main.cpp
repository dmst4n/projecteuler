

bool isCollatz(int number, int chain){
    if(number < 1){
        return false;
    }
    if(number == 1){
        return true;
    }
    if(number%2==0){
        chain++;
        return isCollatz(number/2,chain);
    }
    else{
        chain++;
        return isCollatz(3*number+1,chain);
    }
}
