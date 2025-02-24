#include <iostream>
using namespace std;

int main (){

    int language,option,balance,plan;
    
    cout << "भाषा चुनें / Choose Language / ભાષા પસંદ કरो:" << endl;
    cout << "1. English" << endl;
    cout << "2. हिंदी" << endl;
    cout << "3. ગુજરાતી" << endl;
    cout << "Enter your choice (1 to 3): ";
    cin >> language;

    switch(language){
        case 1:
            cout << endl << "You have selected English." << endl;
            cout << "1. Check Balance " << endl;
            cout << "2. Recharge " << endl;
            cout << "3. End Call " << endl;
            cout << "Enter any choice : ";
            cin >> option;
                switch(option){
                    case 1:
                    cout << endl << "Check Balance : " << endl;
                    cout << "1. $99 " << endl;
                    cout << "2. $999 " << endl;
                    cout << "3. $9999 " << endl;
                    cout << "Enter any choice : ";
                    cin >> balance;
                    cout << "Your balance is $" ;
                    if(balance == 1){
                        cout << "99" << endl;
                    }
                    else if(balance == 2){
                        cout << "999" << endl;
                    }
                    else{
                        cout << "9999" ;
                    } 
                    break;

                    case 2:
                    cout << endl << "Recharge Plan :" << endl;
                    cout << "1. 3 month plan " << endl;
                    cout << "2. 1 year plan " << endl;
                    cout << "Enter any choice : ";
                    cin >> plan;
                    cout << "Recharge successful for ";
                    if(plan == 1){
                        cout << "3 months" << endl;
                    }
                    else{
                        cout << "1 year" << endl;
                    }
                    break;
                    
                    case 3:
                    cout << endl << "End call " << endl;
                    break;

                    default:
                    cout << "Invalid choice !" << endl;
                }
            break;
        case 2:
            cout << "आपने हिंदी भाषा का पसंद किया है।" << endl;
            cout << "1. बैलेंस चेक करें" << endl;
            cout << "2. रिचार्ज करें" << endl;
            cout << "3. कॉल समाप्त करें" << endl;
            cout << "अपना विकल्प दर्ज करें: ";
            cin >> option;
                switch(option){
                    case 1:
                    cout << endl << "बैलेंस चेक करें : " << endl;
                    cout << "1. ₹99 " << endl;
                    cout << "2. ₹999 " << endl;
                    cout << "3. ₹9999 " << endl;
                    cout << "अपना विकल्प दर्ज करें: ";
                    cin >> balance;
                    cout << "आपका बैलेंस ₹" ;
                    if(balance == 1){
                        cout << "99" << endl;
                    }
                    else if(balance == 2){
                        cout << "999" << endl;
                    }
                    else{
                        cout << "9999" ;
                    } 
                    break;

                    case 2:
                    cout << endl << "रिचार्ज प्लान :" << endl;
                    cout << "1. 3 महीने का प्लान " << endl;
                    cout << "2. 1 साल का प्लान " << endl;
                    cout << "अपना विकल्प दर्ज करें: ";
                    cin >> plan;
                    cout << "रिचार्ज सफल हुआ ";
                    if(plan == 1){
                        cout << "3 महीने के लिए" << endl;
                    }
                    else{
                        cout << "1 साल के लिए" << endl;
                    }
                    break;
                    
                    case 3:
                    cout << endl << "कॉल समाप्त करें " << endl;
                    break;

                    default:
                    cout << "अवैध विकल्प !" << endl;
                    break;
                }
            break;
        case 3:
            cout << "તમે ગુજરાતી ભાષાનું પસંદ કર્યું છે." << endl;
            cout << "1. બેલેન્સ ચેક કરો" << endl;
            cout << "2. રીચાર્જ કરો" << endl;
            cout << "3. કૉલ સમાપ્ત કરો" << endl;
            cout << "તમારો વિકલ્પ દાખલ કરો: ";
            cin >> option;
                switch(option){
                    case 1:
                    cout << endl << "બેલેન્સ ચેક કરો : " << endl;
                    cout << "1. ₹99 " << endl;
                    cout << "2. ₹999 " << endl;
                    cout << "3. ₹9999 " << endl;
                    cout << "તમારો વિકલ્પ દાખલ કરો: ";
                    cin >> balance;
                    cout << "તમારો બેલેન્સ ₹" ;
                    if(balance == 1){
                        cout << "99" << endl;
                    }
                    else if(balance == 2){
                        cout << "999" << endl;
                    }
                    else{
                        cout << "9999" ;
                    } 
                    break;

                    case 2:
                    cout << endl << "રીચાર્જ પ્લાન :" << endl;
                    cout << "1. 3 મહિનાનો પ્લાન " << endl;
                    cout << "2. 1 વર્ષનો પ્લાન " << endl;
                    cout << "તમારો વિકલ્પ દાખલ કરો: ";
                    cin >> plan;
                    cout << "રીચાર્જ સફળ થયો ";
                    if(plan == 1){
                        cout << "3 મહિના માટે" << endl;
                    }
                    else{
                        cout << "1 વર્ષ માટે" << endl;
                    }
                    break;
                    
                    case 3:
                    cout << endl << "કૉલ સમાપ્ત કરો " << endl;
                    break;
                }
            break;
        default:
            cout << "ples enter only 1,2,3 numbers..." << endl;
    }
}