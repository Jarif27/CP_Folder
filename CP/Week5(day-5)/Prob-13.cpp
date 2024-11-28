#include<iostream>
using namespace std;
 
int main()
{
    int notes[10];
 
    cout<<"Enter ten banknotes of several notes values: ";
    for(int i=0; i<10; i++)
    {
        cin>>notes[i];
    }
 
    for(int i=1; i<10; i++)
      {
          int key = notes[i];
          int j = i-1;
 
          while(notes[j]<key && j>=0)
          {
              notes[j+1] = notes[j];
              j--;
          }
          notes[j+1] = key;
      }
      cout<<endl;
 
      int sum = 0;
 
      cout<<"Sorted banknotes in descending order: ";
      for(int i=0; i<10; i++)
      {
          cout<<notes[i]<<" ";
          sum = sum + notes[i];
      }
      cout<<endl;
      cout<<"Total amount: "<<sum<<" taka"<<endl;
 
      int target;
      cout<<"Enter an amount less than total: ";
      cin>>target;
 
      if(target >= sum)
      {
          cout<<"Amount must be less that total.";
          return 0;
      }
 
      int count = 0;
      cout<<"Banknotes needed: ";
      for(int i=0; i<10; i++)
      {
          if(notes[i] <= target)
          {
              target = target - notes[i];
              count++;
              cout<<notes[i]<<" ";
          }
      }
      cout<<endl;
      cout<<"Total number of banknotes: "<<count<<endl;
 
      return 0;
}

