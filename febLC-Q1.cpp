#include <iostream>
using namespace std;

int main()
{
  int T,N;
  cin>>T;
  while(T)
  {
      cin>>N;
      int arr[N],sum=0,flag=0;
      for(int i=0; i<N; i++) 
      {
        cin>>arr[i];
        if(arr[i]==0)
        {
            flag=1;
            sum+=1100;
        }
        if(arr[i] && flag)
        {
            sum+=100;
        }
      }
      cout<<sum<<endl;
      T--;
    }
}
