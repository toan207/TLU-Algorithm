bool hasAlternatingBits(int n) {
    while(n>0){
        int t1=n%2;
        n=(n/2);
        int t2=n%2;
        if(t2==t1){return false;break;}
    }
    return true;
}