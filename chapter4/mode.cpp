#include "std_lib_facilities.h"

int main()
{
    int i = 0;
    vector<double> n(0);
    int max = 0;
    int numero_max = 0;

    cout << "type the list of numbers :\n";
    while (cin >> i)
    {
        n.push_back(i);
    }

    sort(n);
   

    for (int i = 0; i < n.size(); i++)
    {
     
     cout<<n[i]<<" ";
     /*if(n[i] == n[i+1])
     {

     } */  
    }

    for (int i = 1; i < n.size(); i++)
    {
        int contador = 0;
        while (n[i-1]==n[i])
        {
            ++contador;
            if(contador > max)
            {
                max = contador;
                numero_max = n[i];
            }
            ++i;
            if(i == n.size())
            {
                break;
            }
        }
        
    }
    cout<<"the most repeated number is : "<<numero_max<<"\n";
    
    
    
  

    keep_window_open("|");
    return 0;


}