int n=1,flag;
    while(1)
    { 
    flag=0;
        for(int i=1;i<=20;i++)
        {
            if(n%i==0){
            flag++;
            }
            else{
            break;
            }
        }
        if(flag==20){
            
            break;
        
        }
        
        n++;
        
    }
    cout<<n;
