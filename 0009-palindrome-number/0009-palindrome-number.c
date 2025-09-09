bool isPalindrome(int x){
    long int p,rev=0,n;
    n=x;
    while(x>0)
    {
        p=x%10;
        rev=rev*10+p;
        x=x/10;
    }
    if(rev==n)
    return 1;
    else
    return 0;
}