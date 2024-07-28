#include <iostream>
using namespace std ;

    class shop {
        int itemid[100];
        int itemprice[100];
        int counter ; 

        public: 
        void initcounter(void) {
            counter = 0; // intially garbage value , only used to assign counter = 0;
          }
        void displayprice(void);
        void setprice(void);
    };

    void shop :: setprice(void) {
        cout<<"enter your item id : "<<endl;
        cin>>itemid[counter]; // method to assign values to an array.
//instead of counter we use any cons. we wont be able to update the value if function called too many times .
        cout<<"enter the item price : "<<endl;
        cin>>itemprice[counter];
        counter++;
    }
 
 void shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
       cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
 }

int main () {
    
shop kirana;
kirana.initcounter();
for (int i = 0; i < 5; i++)
{
    kirana.setprice();
}

kirana.displayprice();

return 0 ;
}