#include <iostream>
using namespace std;
int main() {

  int m, n, prev = 5, count = 0;
  bool check = false; 

  
  cout << "How many people?" << endl;
  cin >> n;
  cout << "Who gets executed?" << endl;
  cin >> m;
  int* people = new int(n);

  int* done = new int(n);
  done = {0};

//Enters all the people into array
  
  for(int i = 1; i <= n; i++){
    people[i - 1] = i;
  }


  for(int i = 0; i < n; i++){

    // Skips the 'dead' people
    if(people[i] != 0){
      count++;

      // Makes sure that count does not get too large by making it meet the 'm' value
if(count % m == 0){
  count = 0;

  people[i] = 0;
  prev = i + 1;
}
      }

if(i == (n - 1)){
  i = -1;
}

   for(int j = 0; j < n; j++){
     if(people[j] == 0)
       check = true;
     else{
       check = false;
       break;
     }
   }
    if(check == true)
      break;
    }

  cout << "The last person standing is: ";
cout << prev << endl;
}