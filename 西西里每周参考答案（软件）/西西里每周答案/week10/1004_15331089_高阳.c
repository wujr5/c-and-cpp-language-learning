int sumDigits(unsigned int n){
    int e = 0;
    while(n != 0){
        e += n % 10;
        n = n / 10;
    }
    return e;
}                                 
