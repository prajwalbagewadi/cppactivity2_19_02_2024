/*
Activity 02: Design Machine level module
 
name:Prajwal N.Bagewadi
class:SY.BCA(Sci)
roll No:05

*/

#include<iostream>
#include<bitset>
#include<fstream>
#include<string>
using namespace std;
class worker{
  public:
  ifstream iput;
  ofstream oput;
  bitset<8> binary_data;
  string data;
  // create reading object for binary file
  void accept(string filename){
    iput.open(filename,ios::in);
    //create new file
  }
  void process_binary(){
    // condition to chech not end of file
    while(!iput.eof()){
      // get entire binary string into a single var
      getline(iput,data);      
      // calculate length of the string
      cout<<data.length();
      // initalize the iterator and size for the string
      int i=0,size=data.length();
      // condition to check that the iterator has not reached string char end
      while(i<=size){
        // create and store a substring of i to 8 chars
        string buf=data.substr(i,8);
        bitset<8> store;
        char c;
        // type cast string to bitset format
        store=(bitset<8>)buf;
        cout<<"store_"<<store<<endl;
        // type cast bitset to char format
        c=(char)store.to_ulong();
        cout<<c;
        //increament by length of +8
        i+=8;
      }
    }
    iput.close();
  }
};
int main(){
  worker obj;
  obj.accept("res.txt");
  obj.process_binary();
  //obj.store_binary();
  return 0;
}
