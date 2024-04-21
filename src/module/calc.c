int calc(double fn,char o,double sn){
    int result;
    if(o=='+')
        result=fn+sn;
    if(o=='-')
        result=fn-sn;
    if(o=='*')
        result=fn*sn;
    if(o=='/'){
        if(sn!=0)
            result=fn/sn;
        else
            error();
    }
    else
        error();
    return 0;
}
