#include<iostream>

using namespace std;

class Box{
  
      
    public:
       // constructor
         double width,length,height;
      
       Box (double w, double h, double l){
         width = w;
         height = h;
         length = l;
       
       }
       
       void print(){

       cout<<"width"<<width<<endl;
       cout<<"height"<<height<<endl;
       cout<<"lenght"<<length<<endl;
    }
    
     void insertdetails(double l, double w, double h){
          width = w;
          length = l;
          height = h;
     
     }

      friend void callbyvalue(Box b);
      friend void callbyreference(Box &b);
      friend void usingptr(Box *b) ; 
 
};

void callbyvalue(Box b){
   b.insertdetails(44.5,68.9,70.4);
    b.print();
    cout<<endl;
      cout<<&b.width<<endl;
   cout<<&b.length<<endl;
   cout<<&b.height<<endl;

}

int main(){
   Box box(12.5,88.9,56.7);
   box.print();
   cout<<&box.width<<endl;
   cout<<&box.length<<endl;
   cout<<&box.height<<endl;
   cout<<endl;
   callbyvalue(box);
   cout<<endl;
   box.print();
     cout<<&box.width<<endl;
   cout<<&box.length<<endl;
   cout<<&box.height<<endl;
}
      