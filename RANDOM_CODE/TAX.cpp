#include<bits/stdc++.h>

using namespace std;

enum VehicleType {Heavy_duty,Medium_duty,Light_duty};
class Vehicle{
private:
    VehicleType vehicleType;
    string vehicleNumber;
    public:
    Vehicle(VehicleType vehicleType , string vehicleNumber){
        this->vehicleType  = vehicleType;
        this-> vehicleNumber = vehicleNumber;
    }
    string getVehicleNumber()
    {
        return vehicleNumber;
    }
    string getVehicleType()
    {
        if(vehicleType == 2)
            return "Heavy_duty";
        else if(vehicleType == 1)
            return "Medium-duty";
        else if(vehicleType == 0)
            return "Light_duty";
    }
};

struct TollDetails
{
   string vehicleNumber;
   char* date;
   int taxAmount;
    int ticketNumber;
};
class TollSystem{
private:
    vector<TollDetails> tollInfoList;
    public:
     TollSystem(){};
    void addEntry(TollDetails tollInfo){
        tollInfoList.push_back(tollInfo);
    }
   void searchEntry(string vehicleNumber){
        for(auto tollEntry : tollInfoList)
            {
             if(tollEntry.vehicleNumber == vehicleNumber)
             {
                cout<<"Date: "<<tollEntry.date<<" Ticket Number: "<<tollEntry.ticketNumber<<endl;
            }
        }
        cout<<"Vehicle Number Not Found"<<endl;
    }
    int generateTax()
    {
        int amount =0;
        for(auto tollTax : tollInfoList)
            {
            amount +=tollTax.taxAmount;
        }
        return amount;
    }
    static int getTollTax(string vehicleType){
        if(vehicleType =="Heavy-duty")
            return 800;
        else if (vehicleType == "Medium-duty")
            return 500;
        else if (vehicleType == "Light_duty")
            return 300;
        else
            return 0;
    }
};


int main(){
    int ticketNum=10;
    vector<Vehicle> vehicleList1;
    vector<Vehicle> vehicleList2;
    vector<Vehicle> vehicleList3;

    Vehicle vehicle1(VehicleType::Light_duty,"DM-1783");
    Vehicle vehicle2(VehicleType::Heavy_duty,"DM-1784");
    Vehicle vehicle3(VehicleType::Light_duty,"MM-1785");
    Vehicle vehicle4(VehicleType::Medium_duty,"BM-1786");
    Vehicle vehicle5(VehicleType::Light_duty,"DM-1787");

    Vehicle vehicle6(VehicleType::Medium_duty,"DM-54B-1783");
    Vehicle vehicle7(VehicleType::Heavy_duty,"DM-54B-1784");
    Vehicle vehicle8(VehicleType::Heavy_duty,"DM-54B-1785");
    Vehicle vehicle9(VehicleType::Medium_duty,"DM-54B-1786");
    Vehicle vehicle10(VehicleType::Medium_duty,"DM-54B-1787");

    Vehicle vehicle11(VehicleType::Light_duty,"DM-54C-1783");
    Vehicle vehicle12(VehicleType::Medium_duty,"DM-54C-1784");
    Vehicle vehicle13(VehicleType::Heavy_duty,"DM-54C-1785");
    Vehicle vehicle14(VehicleType::Heavy_duty,"DM-54C-1786");
    Vehicle vehicle15(VehicleType::Medium_duty,"DM-54C-1787");

    vehicleList1.push_back(vehicle1);
    vehicleList1.push_back(vehicle2);
    vehicleList1.push_back(vehicle3);
    vehicleList1.push_back(vehicle4);
    vehicleList1.push_back(vehicle5);

    vehicleList2.push_back(vehicle6);
    vehicleList2.push_back(vehicle7);
    vehicleList2.push_back(vehicle8);
    vehicleList2.push_back(vehicle9);
    vehicleList2.push_back(vehicle10);

    vehicleList3.push_back(vehicle11);
    vehicleList3.push_back(vehicle12);
    vehicleList3.push_back(vehicle13);
    vehicleList3.push_back(vehicle14);
    vehicleList3.push_back(vehicle15);

    TollSystem tollBox1,tollBox2,tollBox3;

    for(auto vehicle: vehicleList2){
         time_t now = time(0);
         char* current_date = ctime(&now);
         TollDetails tollInfo = {.vehicleNumber = vehicle.getVehicleNumber(),.date = current_date, .taxAmount = TollSystem::getTollTax(vehicle.getVehicleType()),.ticketNumber =ticketNum};

         tollBox1.addEntry(tollInfo);
         ticketNum++;
    }
     cout<<"WELCOME TO PADMA BRIDGE"<<endl;
    cout<<"Tax collected by Toll Box1 "<<tollBox1.generateTax()<<endl;

    for(auto vehicle: vehicleList1){
         time_t now = time(0);
         char* current_date = ctime(&now);
         TollDetails tollInfo = {.vehicleNumber = vehicle.getVehicleNumber(),.date = current_date, .taxAmount = TollSystem::getTollTax(vehicle.getVehicleType()),.ticketNumber =ticketNum};

         tollBox2.addEntry(tollInfo);
         ticketNum++;
    }
    cout<<"Tax collected by Toll Box2 "<<tollBox2.generateTax()<<endl;

    for(auto vehicle: vehicleList3){
         time_t now = time(0);
         char* current_date = ctime(&now);
         TollDetails tollInfo = {.vehicleNumber = vehicle.getVehicleNumber(),.date = current_date, .taxAmount = TollSystem::getTollTax(vehicle.getVehicleType()),.ticketNumber =ticketNum};

         tollBox3.addEntry(tollInfo);
         ticketNum++;
    }

    cout<<"Tax collected by Toll Box3 "<<tollBox3.generateTax()<<endl;

    cout<<"Total earnings from all counters "<< tollBox1.generateTax() + tollBox2.generateTax() + tollBox3.generateTax()<<endl;
}
