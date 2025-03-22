int reverse(int x){
     long long int p,rev=0,n;
    n=x;
    while(x!=0)
    {
        p=x%10;
        rev=rev*10+p;
        x=x/10;
    }
    if(-pow(2,31)<=rev && rev<=pow(2,31)-1)
    return rev;
    else
    return 0;
}
