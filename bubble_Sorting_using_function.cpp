#include<iostream.h>
// Declaring function name bubbleSort
void bubbleSort(int);
  
//main body
int main() {
  cout<<"\t ENTER INTEGERS\n";
  int unsort[5],i;
  
  for(i=0;i<=4;i++)
    cin>>unsort[i];
  //Calling of function bubbleSort
  bubbleSort(unsort);
  return 0;
}

//Defining bubbleSort function
void bubbleSort(int unsort[5]) {
  int i,j,x,swap=;
  //including swap bubbleSort becomes efficient algorithm
  
  for(i=0;i<4;i++)
  {
    swap=0;
     for(j=0;j<4;j++)
     {
       if(unsort[j]>unsort[j+1];
          {
           unsort[j]=unsort[j]+unsort[j+1];
           unsort[j+1]=unsort[j]-unsort[j+1];
           unsort[j]=unsort[j]-unsort[j+1];
           swap=1;
          }
     }
     
     for (x=0 ; x<=4 ; x++)
     {
       cout << "\t" << unsort[x];
     }
   if (swap == 0)
    break;
    cout << "\n";
}
}
            
