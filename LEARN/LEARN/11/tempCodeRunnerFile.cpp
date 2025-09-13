int sumofN(int n){
    static int sum=0;
    if(n==1){
        return 1;
    }
    sum+n;
    return sum;
}

