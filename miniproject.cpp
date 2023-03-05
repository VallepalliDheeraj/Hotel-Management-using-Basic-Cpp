// Hotel management system for 5 items:

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int quantity;
    int choice;
    // total earnings of hotel
    int total=0;

    //quantities available
    int quantities_rooms=0;
    int quantities_ChickenBiryani=0;
    int quantities_ChickenManchurian=0;
    int quantities_MilkShakes=0;
    int quantities_MuttonBiryani=0;

    //no of quantities sold
    int sold_rooms=0;
    int sold_ChickenBiryani=0;
    int sold_ChickenManchurian=0;
    int sold_MilkShakes=0;
    int sold_MuttonBiryani=0;

    // total price of quantites sold
    int Total_rooms=0;
    int Total_ChickenBiryani=0;
    int Total_ChickenManchurian=0;
    int Total_MilkShakes=0;
    int Total_MuttonBiryani=0;

    cout<<"\t\t\t Quantities We Have in the Hotel DHEERAJ COMFORT";
    cout<<"\n\n  Rooms available in Hotel: ";
    cin>>quantities_rooms;
    cout<<"  ChickenBiryani available in Hotel: ";
    cin>>quantities_ChickenBiryani;
    cout<<"  ChickenManchurian available in Hotel: ";
    cin>>quantities_ChickenManchurian;
    cout<<"  MilkShakes available in Hotel: ";
    cin>>quantities_MilkShakes;
    cout<<"  MuttonBiryani available in Hotel: ";
    cin>>quantities_MuttonBiryani;

    m:
    cout<<"\n\t\t\t Please Select from available in MENU";
    cout<<"\n\n 1)Rooms";
    cout<<"\n 2)ChickenBiryani";
    cout<<"\n 3)ChickenManchurian";
    cout<<"\n 4)MilkShakes";
    cout<<"\n 5)MuttonBiryani";
    // for managemnt regarding regarding sales and collections
    cout<<"\n 6)Regarding Sales and Collection";
    cout<<"\n 7)Exit";

    cout<<"\n\t\t Please Enter the Choice No from MENU: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n Enter the Number of Rooms Required:";
            cin>>quantity;
            // one room price is 2000 rs price
            if(quantities_rooms-sold_rooms>=quantity)
            {
                sold_rooms=sold_rooms+quantity;
                Total_rooms=Total_rooms+quantity*2000;
                cout<<"\t"<<quantity<<" Room/Rooms have been alloted to you";
                break;
            }
            else
            {
                cout<<"\t Only "<<quantities_rooms-sold_rooms<<" Room/Rooms are available";
                break;
            }

        case 2:
            cout<<"\n Enter the number of ChickenBiryani Required:";
            cin>>quantity;
            // one chickenbiryani price is 250 rs price
            if(quantities_ChickenBiryani-sold_ChickenBiryani>=quantity)
            {
                sold_ChickenBiryani=sold_ChickenBiryani+quantity;
                Total_ChickenBiryani=Total_ChickenBiryani+quantity*250;
                cout<<"\t"<<quantity<<" ChickenBiryani have been alloted to you";
                break;
            }
            else
            {
                cout<<"\t Only "<<quantities_ChickenBiryani-sold_ChickenBiryani<<" ChickenBiryani are available";
                break;
            }

        case 3:
            cout<<"\n Enter the number of ChickenManchurian Required:";
            cin>>quantity;
            // one chickenmanchurian price is 200 rs price
            if(quantities_ChickenManchurian-sold_ChickenManchurian>=quantity)
            {
                sold_ChickenManchurian=sold_ChickenManchurian+quantity;
                Total_ChickenManchurian=Total_ChickenManchurian+quantity*200;
                cout<<"\t"<<quantity<<" ChickenManchurian have been alloted to you";
                break;
            }
            else
            {
                cout<<"\t Only "<<quantities_ChickenManchurian-sold_ChickenManchurian<<" ChickenManchurian are available";
                break;
            }

        case 4:
            cout<<"\n Enter the number of Milkshakes Required:";
            cin>>quantity;
            // one milkshake price is 150 rs price
            if(quantities_MilkShakes-sold_MilkShakes>=quantity)
            {
                sold_MilkShakes=sold_MilkShakes+quantity;
                Total_MilkShakes=Total_MilkShakes+quantity*150;
                cout<<"\t"<<quantity<<" Milkshakes have been alloted to you";
                break;
            }
            else
            {
                cout<<"\t Only "<<quantities_MilkShakes-sold_MilkShakes<<" Milkshakes are available";
                break;
            }

        case 5:
            cout<<"\n Enter the number MuttonBiryani Required:";
            cin>>quantity;
            // one muttonbiryani price is 500 rs price
            if(quantities_MuttonBiryani-sold_MuttonBiryani>=quantity)
            {
                sold_MuttonBiryani=sold_MuttonBiryani+quantity;
                Total_MuttonBiryani=Total_MuttonBiryani+quantity*500;
                cout<<"\t"<<quantity<<" MuttonBiryani have been alloted to you";
                break;
            }
            else
            {
                cout<<"\t Only "<<quantities_MuttonBiryani-sold_MuttonBiryani<<" MuttonBiryani are available";
                break;
            }

        case 6:
            {
                cout<<"\n\t\t Details of Sales and Collection: ";
                cout<<"\n Number of Rooms we had: "<<quantities_rooms;
                cout<<"\n Number of Rooms we gave for rent : "<<sold_rooms;
                cout<<"\n Remaing Rooms available: "<<quantities_rooms-sold_rooms;
                cout<<"\n Total Rooms Collection in Hotel:  "<<Total_rooms;

                cout<<"\n";

                cout<<"\n Number of ChickenBiryani we had: "<<quantities_ChickenBiryani;
                cout<<"\n Number of ChickenBiryani we gave for rent : "<<sold_ChickenBiryani;
                cout<<"\n Remaing ChickenBiryani available: "<<quantities_ChickenBiryani-sold_ChickenBiryani;
                cout<<"\n Total ChickenBiryani Collection in Hotel:  "<<Total_ChickenBiryani;

                cout<<"\n";

                cout<<"\n Number of ChickenManchurian we had: "<<quantities_ChickenManchurian;
                cout<<"\n Number of ChickenManchurian we gave for rent : "<<sold_ChickenManchurian;
                cout<<"\n Remaing ChickenManchurian available: "<<quantities_ChickenManchurian-sold_ChickenManchurian;
                cout<<"\n Total ChickenManchurian Collection in Hotel:  "<<Total_ChickenManchurian;

                cout<<"\n";

                cout<<"\n Number of MilkShakes we had: "<<quantities_MilkShakes;
                cout<<"\n Number of MilkShakes we gave for rent : "<<sold_MilkShakes;
                cout<<"\n Remaing MilkShakes available: "<<quantities_MilkShakes-sold_MilkShakes;
                cout<<"\n Total MilkShakes Collection in Hotel:  "<<Total_MilkShakes;

                cout<<"\n";
                
                cout<<"\n Number of MuttonBiryani we had: "<<quantities_MuttonBiryani;
                cout<<"\n Number of MuttonBiryani we gave for rent : "<<sold_MuttonBiryani;
                cout<<"\n Remaing MuttonBiryani available: "<<quantities_MuttonBiryani-sold_MuttonBiryani;
                cout<<"\n Total MuttonBiryani Colleection in Hotel:  "<<Total_MuttonBiryani;
                
                total=Total_rooms+Total_ChickenBiryani+Total_ChickenManchurian+Total_MilkShakes+Total_MuttonBiryani;
                cout<<"\n\t Total Earnings by the DHEERAJ COMFORT: "<<total;

                break;
            }

        case 7:
            {
                // it exits the programm
                exit(0);
                break;
            }

        default:
            {
                cout<<"Please Enter The Valid Choice Number in the MENU";
                break;
            }
    }
    
    // it repeats and sends the pointer to m
    goto m;
    return 0;
}