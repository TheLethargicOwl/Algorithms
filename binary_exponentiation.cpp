int power(int x, int y,int p) { 
    int res = 1;
    while (y > 0){
        if (y & 1) 
            res = (res%p*x%p)%p;
        y = y>>1;
        x = (x%p*x%p)%p; 
    } 
    return res%p; 
}
