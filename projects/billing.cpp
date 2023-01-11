#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
class shopping{
   private:
      int pcode;
      float price,dis;
      string pname;
   public:
     void menu();
     void administrator();
     void buyer();
     void add();
     void edit();
     void rem();
     void list();
    void receipt();
      
};
void shopping::menu(){
      m:
    int choice;
    string email,password;
    cout<<"\t\t\t\t_______________________________________\n";
    cout<<"\t\t\t\t                                \n";
    cout<<"\t\t\t\t     Supermarket Main Menu      \n";
    cout<<"\t\t\t\t                                \n";
   cout<<"\t\t\t\t_______________________________________\n";
   cout<<"\t\t\t\t                                \n";
   cout<<"\t\t\t\t  1) Administrator     |\n";
   cout<<"\t\t\t\t                       |\n";
   cout<<"\t\t\t\t  2) Buyer             |\n";
   cout<<"\t\t\t\t                       |\n";
   cout<<"\t\t\t\t  3) exit              |\n";
   cout<<"\t\t\t\t                       |\n";
   cout<<"\n\t\t\t  Please select!\n";
   cin>>choice;
   switch(choice){
  
    case 1: cout<<"\t\t\t Please Login \n";
         cout<<"\t\t\t Enter Email     \n";
         cin>>email;
         cout<<"\t\t\t Enter Password  \n";
         cin>>password;
         if(email=="a@gmail.com" && password=="1230"){
               administrator();
         }
         else{
            cout<<"Invalid email or password\n";
         }
         break;
    case 2: buyer(); break;
    // it means successful termination of the program
    case 3: exit(0);
     default: cout<<"Select from the given option\n";
   }
   // m is label here
 goto m;
}
void shopping::administrator(){
    m:
    int choice;
    cout<<"\n\n\n\t\t\t Administrator Menu\n";
    cout<<"\n\t\t\t______  1) Add the product ________|";
    cout<<"\n\t\t\t                                   |";
    cout<<"\n\t\t\t______ 2) Modify the product ______|";
    cout<<"\n\t\t\t                                   |";
    cout<<"\n\t\t\t______ 3) Delete the product_______|";
    cout<<"\n\t\t\t                                   |";
    cout<<"\n\t\t\t______ 4) Back to the main menu____|";
    cout<<"\n\n\tPlease enter your choice";
    cin>>choice;
     switch(choice){
    case 1: add();
         break;
    case 2: edit(); break;
    // it means successful termination of the program
    case 3: rem(); break;
     case 4: menu(); break;
     default: cout<<"Select from the given option\n";
   }
  goto m;
}
void shopping::buyer(){
    m:
    int choice;
    cout<<"\t\t\t Buyer \n";
    cout<<"______________n";
    cout<<"\t\t\t 1)Buy Product \n";
    cout<<"                     \n";
    cout<<"\t\t\t 2)Go back     \n";
    cout<<"                     \n";
    cout<<"Enter your choice:\n";
    cin>>choice;
     switch(choice){
    case 1: receipt(); break;
    case 2: menu(); break;
    // it means successful termination of the program
    case 3: rem(); break;
     case 4: menu(); break;
     default: cout<<"Select from the given option\n";
   }
  goto m;
}
void shopping::add(){
    m:
    fstream data;
    int c,token=0;
    float p,d;
    string n;
    cout<<"\n\n\t\t\t Add new product";
    cout<<"\n\n\t Product code of the product";
    cin>>pcode;
    cout<<"\n\n Name of the product";
    cin>>pname;
    cout<<"\n\n\t Price of the product";
    cin>>price;
    cout<<"\n\n\tDiscount on product";
    cin>>dis;
    // it will open the file in reading mode
    data.open("database.txt",ios::in);
    if(!data){
        // app is append and out is write mode
        data.open("database.txt",ios::app|ios::out);
        data<<"  "<<pcode<<"  "<<pname<<"  "<<price<<"  "<<dis<<"\n";
        data.close();
    }
    else{
        data>>c>>n>>p>>d;
        while(!data.eof()){
            if(c==pcode){
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();
    }
    if(token==1){
        goto m;
    }
    else{
        data.open("database.txt",ios::app|ios::out);
        data<<"  "<<pcode<<"  "<<pname<<"  "<<price<<"  "<<dis<<"\n";
        data.close();
    }
    cout<<"\n\n\t\t Record inserted!\n";
}
void shopping::edit(){
    fstream data,data1;
    int pkey,token=0,c;
    float p,d;
    string n;
    cout<<"\n\t\t\t Modify the record";
    cout<<"\n\t\t\tProduct code:";
    cin>>pkey;
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\nFile does not exits!";
    }
    else{
        data1.open("database1.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof()){
            if(pkey==pcode){
                cout<<"\n\t\t Product new code:";
                cin>>c;
                cout<<"\n\t\t Name of the product:";
                cin>>n;
                cout<<"\n\t\t Price:";
                cin>>p;
                cout<<"\n\t\t Discount:";
                cin>>d;
                data1<<"  "<<c<<"  "<<n<<"  "<<p<<"  "<<d<<"\n";
                cout<<"\n\n\t\t Record edited";
            }
            else{
                data1<<"  "<<pcode<<"  "<<pname<<"  "<<price<<"  "<<dis<<"\n";
            }
        }
        data>>pcode>>pname>>price>>dis;
    }
    data.close();
    data1.close();
   remove("database.txt");
  rename("database1.txt","database.txt");
   if(token==0){
    cout<<"\n\n Record not found!";
   }

}

void shopping::rem(){
    fstream data,data1;
    int pkey,token=0;
    cout<<"\n\n\t Delete Product";
    cout<<"\n\n\t Product code";
    cin>>pkey;
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\n\tfile doesnot exist";
    }
    else{
        data1.open("database1.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof()){
            if(pcode==pkey){
                cout<<"\n\n\tProduct deleted successfully";
                token++;
            }
            else{
                data1<<"  "<<pcode<<"  "<<pname<<"  "<<price<<"  "<<dis<<"\n";
            }
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");
        if(token==0){
            cout<<"\n\n\t Record not found";
        }
    }
    }
void shopping::list(){
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\n\n|________________________________________\n";
    cout<<"ProNo.\t\tName\t\tPrice\n";
     cout<<"\n\n|________________________________________\n";
     data>>pcode>>pname>>price>>dis;
     while(!data.eof()){
        cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>dis;
     }
     data.close();
}   
void shopping::receipt(){
    fstream data;
    vector<int> arrc,arrq;
    int c=0,x;
    char choice;
    float amount=0,dis=0,total;
    cout<<"\n\n\t\t\t\t RECIEPT";
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\n Empty database";
    }
    else{
        data.close();
        list();
        cout<<"\n_______________________________\n";
        cout<<"\n                               \n";
        cout<<"\n  Please place the order       \n";
        cout<<"\n                               \n";
       cout<<"\n_______________________________\n";
       do{
        m:
        cout<<"\n\nEnter product code:";
        cin>>x;
        arrc.push_back(x);
         cout<<"\n\nEnter product quantity:";
        cin>>x;
         arrq.push_back(x);
         for(int i=0;i<c;i++){
            if(arrc[i]==arrc[c]){
                cout<<"\n\n Duplicate product code. Please try again";
                goto m;
            }
         }
         c++;
         cout<<"\n\nDo you want to buy another ? If yes then press y else no";
         cin>>choice;
       }
       while(choice=='y');
      cout<<"\n\n\t\t\t_________________RECEIPT__________________\n";
      cout<<"\nProduct No.\t Product Name\tProduct quantity\t Price\tAmount\t Amount with discount";
      for(int i=0;i<c;i++){
        data.open("database.txt",ios::in);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof()){
            if(pcode==arrc[i]){
                amount=price*arrq[i];
                dis=amount-(amount*dis/100);
                total+=dis;
                cout<<"\n"<<pcode<<"\t"<<pname<<"\t"<<arrq[i]<<"\t"<<arrc[i]<<"\t"<<price<<"\t"<<amount<<"\t"<<dis;
            }
             data>>pcode>>pname>>price>>dis;
        }
      }
      data.close();
    }
    cout<<"\n\n_______________________________";
    cout<<"\n Total Amount : "<<total;
} 
int main(){
    shopping s;
    s.menu();
    return 0;
}