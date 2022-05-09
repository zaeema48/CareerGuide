#include<iostream>

using namespace std;

void leftRecursion(string grammar){
string alpha="", beta=""; 
int i;
for( i=4; i<grammar.length(); i++){
    if(grammar[i]=='|'){
    i++;
    break; 
    }

    alpha = alpha + grammar[i];
}
    for(; i<grammar.length(); i++){
        beta = beta + grammar[i];
    }
    cout<<"After removing left recursion: "<<endl;
    cout<<grammar[0]<<"-> "<<beta<<grammar[0]<<"'"<<endl;
    cout<<grammar[0]<<"'-> "<<"@|"<<alpha<<grammar[0]<<"'"<<endl;
}


int main(){
    string grammar;
    
    // A->Aa|B  TO CHECK WHTHER THE GIVEN GRAMMAR IS LEFT RECURSIVE OR NOT
    // A->BA'
    // A'->E|aA'
    cout<<"Enter the grammar"<<endl;
   getline(cin, grammar);
  if(grammar[3]!=grammar[0]){
      cout<<"Its not left recursive grammar"<<endl;
  }
    else{
        leftRecursion(grammar);
    }
    
    return 0; 
}