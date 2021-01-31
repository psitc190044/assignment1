#include <iostream>

using namespace std;

int main()

{
    double totalCost, balance, change, moneyAvailable;
    const double vat = 0.12;
    int  uniqueId, quantity;
    string customerName, product;

    int costPrice[3] ={1000, 500, 20};

    cout << "Hello! You are welcome to Edemy's shop!" << endl;

    cout<<endl;

    cout<< "Two services are rendered in this company"<<endl;

    cout<<endl;

    cout<<"Purchasing an item and making inquiries"<<endl;

    cout<<endl;


    cout<<"These are the items available and the cost of each of the items respectfully"<<endl;

    cout<<"A. Printer = $1000.00"<<endl;
    cout<<"B. Table = $20.00"<<endl;
     cout<<"C. Phone = $500.00"<<endl;

     cout<<endl;
     cout<<endl;

    cout<<"Please enter your name"<<endl;
    cin>>customerName;

    cout<<endl;

    cout<<"Please enter your unique ID"<<endl;
    cin>>uniqueId;

    cout<<endl;

    cout<<"Please enter what you want to buy?"<<endl;
    cin>>product;

     cout<<endl;

    cout<<"Please input how many you want to buy"<<endl;
    cin>>quantity;

     cout<<endl;

     if(product == "printer"){

     totalCost = (costPrice[0] * quantity)* vat;

     cout<<"The total cost of your purchase is $"<<totalCost<<endl;

     cout<<endl;

     }else if(product == "phone" ){

      totalCost = (costPrice[1] * quantity)* vat;

      cout<<"The total cost of your purchase is $"<<totalCost<<endl;

      cout<<endl;

     }else if(product == "table"){

      totalCost = (costPrice[2] * quantity)* vat;

      cout<<"The total cost of your purchase is $"<<totalCost<<endl;

     }

     cout<<"Please enter the required payment for your purchases"<<endl;
     cin>>moneyAvailable;

     cout<<endl;


     while (moneyAvailable<totalCost){
          balance = moneyAvailable - totalCost;

        cout<<"You have a balance of = $"<<balance<<" remaining"<<endl;

        cout<<endl;

        cout<<"Your money is insufficient to make the purchase you need "<<endl;

        cout<<endl;

        cout<<" Please enter the required payment for your purchase"<<endl;

        cin>>moneyAvailable;


     }
     cout<<endl;

     if(moneyAvailable>totalCost){

         change = moneyAvailable-totalCost;

         cout<<"Your have a change of $ "<<change<<endl;

     }else{

     cout<<"Thank you for choosing to shop with us"<<endl;

     }

     cout<<endl;


     cout<<" || *RECEIPT* || "<<endl;

     cout<<" Name of the customer : "<<customerName<<endl;
     cout<<" The unique ID : "<<uniqueId<<endl;
     cout<<" Item bought : "<<product<<endl;
     cout<<" VAT amount : "<<vat<<endl;
     cout<<"Total cost : "<<totalCost<<endl;
     cout<<"Total amount paid: "<<moneyAvailable<<endl;
     cout<<"Balance : $"<<balance<<endl;
     cout<<"Change : $"<<change<<endl;

     cout<<endl;

     cout<<"Thank you for transacting with us"<<endl;



    return 0;
}
