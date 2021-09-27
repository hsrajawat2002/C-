void prime(int n){
    int count=0;
    for (int i = 2; i < n; i++)
    {
        int a;
        a= n%i;
        if (a==0)
        {
            count++;
        } 
    }
    if (count==0)
    {
        cout<<"PRIME"<<endl;
    }
    else
    {
        cout<<"NA"<<endl;
    } }