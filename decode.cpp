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
  void accept(string filename){
    iput.open(filename,ios::in);
    //create new file
  }
  void process_binary(){
    while(!iput.eof()){
      getline(iput,data);      
      cout<<data.length();
      int i=0,size=data.length();
      while(i<=size){
        string buf=data.substr(i,8);
        bitset<8> store;
        char c;
        store=(bitset<8>)buf;
        cout<<"store_"<<store<<endl;
        c=(char)store.to_ulong();
        cout<<c;
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