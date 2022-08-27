set<int> setInsert(int arr[],int n)
{
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    //Your code here to insert arr into s
    
    return s;
    
}


void setDisplay(set<int>s)
{
    //Your code here to display elements of s
    for(auto a:s){
    cout<<a<<" ";
    }
    cout<<endl;
}


void setErase(set<int>&s,int x)
{
   //write if condition here
   if(s.count(x)){
    cout<<"erased "<<x;
    s.erase(x);
   }
    //write else condition here
    else{
    cout<<"not found";
    }
    
    cout<<endl;
}
