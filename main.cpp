
#include <iostream>

using namespace std;

class sol{
public:
  static int amountBetween(int num){
    int sum = 0;
    if(num <= 0){
      return sum;
    }
    else{
      for(int i = 0; i < num; i++){
	sum += i + 1;
      }
    }
    return sum; 
  }

  static int productFrom(int num){
    int sum = 0;
    if(num <= 0){
      return sum;
    }
    else{
      sum = 1;
      for(int i = 0; i < num; i++){
	sum *= i + 1;
      }
    }
    return sum;
  }



  
};

int main() {

  int userNum;
  cout << "user, give me number plz" << endl;
  cin >> userNum;
  
  cout <<"The sum of 1 through " << userNum << " is " << sol::amountBetween(userNum) << endl;

  cout << endl << endl;
  
  cout << "user, give me number plz" << endl;                                        
  cin >> userNum;
  
  cout <<"The product of 1 through " << userNum << " is " << sol::productFrom(userNum) \
<< endl; 
  
  return 0;
}
