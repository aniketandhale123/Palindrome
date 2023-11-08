#include<iostream>
using namespace std ;

bool palindrome(string a , int n)
{
    int s =0 ;
    int e =n-1 ;
    
    while (s<e)
    {
    if(a[s]!=a[e])
    {
        return 0  ;
    }
    else 
    {
        s ++ ;
        e -- ;
    }
    }
    return 1;
}

int len(char a[] )
{
    int count =0 ;
    {
        for (int i =0 ; a[i] != 0 ; i++)
        {
            count ++ ;
        }
        return  count ;
    }
}





int main ()
{
    char a [10];
    
    cout<<" enter the string "<<endl;
    cin>>a ;

    int length = len(a);

     palindrome(  a ,length ) ;

     cout<<" checking palindrome or not "<<palindrome(a,length)<<endl;

    


}