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
  void accept(string filename){
    iput.open(filename,ios::in);
    //create new file
    oput.open("res.txt",ios::out);
  }
  void process_binary(){
    while(!iput.eof()){
      const char c=iput.get();
      cout<<c<<"_";
      bitset<8> binary(c);
      cout<<binary<<" ";
      binary_data=binary;
      oput<<binary_data;
    }
    iput.close();
    oput.close();
  }
};
int main(){
  worker obj;
  obj.accept("input.txt");
  obj.process_binary();
  //obj.store_binary();
  return 0;
}
