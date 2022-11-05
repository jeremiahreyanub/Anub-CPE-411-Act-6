//Jeremiah Rey Anub
// BSCPE 4A

#inc /*First In First Out*/

#include <iostream>
using namespace std;


int main() {
    
  int action;
  int time=0;
  int sum=0;
  
  
  cout<<"Please enter total number of action: ";
  cin>>action;
  
  int burst_time[action];

  cout<<"Please enter the burst time action: ";
  
  for (int i=0; i<process; i++){
    cin>>burst_time[i];
    sum = sum + burst_time[i];
  }

  cout<<"Time\t\t\t\tAction"<<endl;
  
  int count = 1;
  while (time <= sum){
        
        
    cout<<time<<"\t\t\t\t\t";
    if (count <= action){
        cout<<"P"<<count<<endl;
    }
    time = time + burst_time[count-1];
    count++;
  }


}
