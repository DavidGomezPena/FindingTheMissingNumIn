//This code is supposed to sort, then find the missing number out of the 20 numbers in the number array.
//Programmer: David Gomez
#include <iostream>
using namespace std;
int main() {
  int ans;
  //This is the array of the numbers
  int number[19] =  {17, 14, 12, 5, 3, 2, 10, 20, 4, 9, 1, 16, 13, 6, 19, 8, 15, 18, 11};
  
  //This is the bubble sort that sorts the numbers in ascending order

  int j,k;
  for (j=0;j<20;j++){
    for (k=j+1;k<19;k++){
      int temp;
      //Checks if the first number is larger than the second number and if it is then is switches the numbers
      if (number[j] > number[k]){
        temp = number[j];
        number[j] = number[k];
        number[k] = temp;
      }
    }
  }
  //Prints out the numbers in ascending order
  for (int i = 0;i < 19;i++){
    cout << number[i] << endl;
   
  }
  //The end of the bubble sort
  //The beginning of checking for the finding the missing number
  for (int i = 0;i< 18;i++){
    if(number[i]+1==number[i+1]){

    }
    else{
      ans = number[i]+1;
    }
  }
  cout << "\nThe missing Number is " << ans;
}
