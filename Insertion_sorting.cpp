#include<iostream.h>
void main() {
                                       //insertion sort
  int number,sorted_column,unsorted_column,temporary_variable;
  //Input size of array
  cout << "\t ENTER HOW MANY NUMBER\n";
  cin >> number;
  
  int array[number];
  //Input array numbers from user
  for ( sorted_column=0  ;  sorted_column<number  ;  sorted_column++)
  {
    cin>>array[sorted_column];
  }
  
  //We assume that 1st element is already sorted
  
  for ( sorted_column=1  ;  sorted_column<number  ;  sorted_column++)
  {
    temporary_variable=array[sorted_column];
    
      for ( unsorted_column=sorted_column-1  ;  unsorted_column>=0 && array[unsorted_column]>temporary_variable  ;  unsorted_column--)
      {
        array[unsorted_column+1]  =  array[unsorted_column];
      }
    
    array[unsorted_column+1]  =  temporary_variable;
  }
  
  //Printing array
  for ( sorted_column=0  ;  sorted_column<number  ;  sorted_column++)
  {
    cout << "\t" << array[sorted_column];
  }
 
  //Closing main function
}
