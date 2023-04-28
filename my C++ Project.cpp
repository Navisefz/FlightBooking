

using namespace std;

int glob = 0;
int global = 10;

void vline(char ch)
{
    for (int i = 50; i > 0; i--)
    {
        cout << ch;
    }
}
void login();
void registr();
void forgot();
void loginpage()
{
    // HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
    int ch;
    //SetConsoleTextAttribute(hConsole,14);
    system("cls");
    cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
    vline('\xCD');
    cout << "\xBB";
    cout << "\033[1;36m\n\t\t\t\t\xBA\033[1;33m\t\t S Y S T E M   L O G I N\t   \033[1;36m\xBA";
    cout << "\033[1;36m\n\t\t\t\t\xC8";
    vline('\xCD');
    cout << "\xBC";
    //SetConsoleTextAttribute(hConsole,7);
    cout << "\n\n\n\n\t\t\t\t\t\t\033[1;33m1. Log in\n\n\n\n\t\t\t\t\t\t2. Sign up\n\n\n\n\t\t\t\t\t\t3. Forgot Password or Username\n\n\n\n\t\t\t\t\t\t4. Log out\n\n\n\n";
    // SetConsoleTextAttribute(hConsole,14);
    cout << "\033[1;37m\t\t\t\t\t         Enter your choice: \033[1;33m";
    cin >> ch;
    //SetConsoleTextAttribute(hConsole,7);
    switch(ch)
    {

    case 1:
        login();
        break;
    case 2:
        registr();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout << "\033[1;37m\n\t\t\t\t\t\tLogging out";
        Sleep(500);
        cout << ". ";
        Sleep(500);
        cout << ". ";
        Sleep(500);
        cout << ". ";
        Sleep(1000);

        system("cls");
        cout << "\033[1;33m\n\n\n\n\n\n\t\t\t\t\t\tThank you for using\n\n \t\t\t\t\t A L P H A   F L I G H T  B O O K I N G  S Y S T E M! \033[1;31m\3 \3\t\t\t\t\t\t\t\t\t\t\t";
        cout << "\033[1;37m\n\n\t\t\tThe best and most affordable flight booking company in the world. . .\n\n\n\n\n\n\n\n\n";
        exit(0);
        break;

    default:
        cout << "\033[1;37m\n\n\n\n\t\t\t\t\t\tInvalid choice! Please try again!";

        cin.get();

        Sleep(1000);
        cout << ". ";
        Sleep(500);
        cout << ". ";
        Sleep(500);
        cout << ". ";
        Sleep(500);

        system("cls");

    return loginpage();

    }
}
void registr()
{
    string reguser,regpass,regpassc,Fname,add,cn;

    system("cls");

    cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
    vline('\xCD');
    cout << "\xBB";
    cout << "\n\t\t\t\t\xBA\t\t   \033[1;33mS I G N   U P\033[1;36m\t\t   \xBA";
    cout << "\033[1;36m\n\t\t\t\t\xC8";
    vline('\xCD');
    cout << "\xBC";
    cout << "\033[1;36m\n\n\n\n\t\t\t\t\t\tUser Name: \033[1;33m";
    cin.ignore();
    getline(cin,reguser);
    cout << "\033[1;36m\n\n\t\t\t\t\t\tPassword: \033[1;33m";
    cin.ignore();
    getline(cin,regpass);
    cout << "\033[1;36m\n\n\t\t\t\t\t\tConfirm password: \033[1;33m";
    cin.ignore();
    getline(cin,regpassc);

    if(regpass != regpassc)
        {
            cout << "\033[1;37m\n\n\t\t\t\t\tPassword do not match. Please try again";
            cout << "\033[1;37m\n\n\n\n\t\t\t\t\t\t    loading";

            Sleep(500);
            cout << ". ";
            Sleep(500);
            cout << ". ";
            Sleep(500);
            cout << ". ";
            Sleep(500);

            system("cls");
            return registr();
        }
        cout << "\033[1;36m\n\n\t\t\t\t\t\tName: \033[1;33m";
        cin.ignore();
        getline(cin,Fname);
        cout << "\033[1;36m\n\n\t\t\t\t\t\tAddress: \033[1;33m";
        cin.ignore();
        getline(cin,add);
        cout << "\033[1;36m\n\n\t\t\t\t\t\tContact Number: \033[1;33m";
        cin.ignore();
        getline(cin,cn);

        ofstream reg("database.txt",ios::app);
        reg << reguser <<' '<< regpass <<endl;

        cout << "\033[1;37m\n\n\t\t\t\t\t\t    loading";
        Sleep(500);
        cout << ". ";
        Sleep(500);
        cout << ". ";
        Sleep(500);
        cout << ". ";
        Sleep(500);
        cout << "\033[1;33m\n\n\n\n\t\t\t\tR E G I S T R A T I O N   S U C C E S S F U L L \033[1;31m";
        Sleep(500);
        cout << ". ";
        Sleep(500);
        cout << ". ";
        Sleep(500);
        cout << ". ";
        Sleep(500);

        system("cls");
        return loginpage();
}
void login()
{
    int exist;
    string user, pass, u, p;

    system("cls");
    cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
    vline('\xCD');
    cout << "\xBB";
    cout << "\n\t\t\t\t\xBA\t\t    \033[1;33mL O G   I N\t\t           \033[1;36m\xBA";
    cout << "\033[1;36m\n\t\t\t\t\xC8";
    vline('\xCD');
    cout << "\xBC";
    cout << "\033[1;36m\n\n\n\n\t\t\t\t\t\tUsername: \033[1;33m";
    cin.ignore();
    getline(cin,user);
    cout << "\033[1;36m\n\n\t\t\t\t\t\tPassword: \033[1;33m";
    cin.ignore();
    getline(cin,pass);

    ifstream input("database.txt");

    while(input >> u >>p)
    {
        if(u == user && p == pass)
        {
            exist = 1;
        }
    }
    input.close();

    if(exist == 1)
     {
         system("cls");
         cout <<"\033[1;36m\n\n\n\n\t\t\t\tW E L C O M E    A L P H A   T R A V E L E R S\033[1;37m";
         cout <<"\n\n\n\t\t\t\tEnjoy our affordable flight rates just for you!  \033[1;31m\3 \3\n\n\n\t\t";
     }
     else
     {
        cout <<"\033[1;37\n\n\n\n\t\t\t\t\tThe username or password does not match. Please try again";
        cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\t    loading";

        Sleep(2500);
        cout <<". ";
        Sleep(2500);
        cout <<". ";
        Sleep(2500);
        cout <<". ";
        Sleep(2500);

        system("cls");
        return loginpage();
     }
}
void forgot()
{
    int choice;

    system("cls");
    cout <<"\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
    vline('\xCD');
    cout <<"\xBB";
    cout <<"\n\t\t\t\t\xBA\t     \033[1;33mF O R G O T   P A S S W O R D\t\033[1;36m   \xBA";
    cout <<"\033[1;36m\n\t\t\t\t\xC8";
    vline('\xCD');
    cout <<"\xBC";
    cout <<"\033[1;33m\n\n\n\n\t\t\t\t\t\t1. Search account by user name\n";
    cout <<"\n\n\t\t\t\t\t\t2. Search account by password\n";
    cout <<"\n\n\t\t\t\t\t\t3. Main Menu\n\n\n";
    cout <<"\033[1;37m\n\n\t\t\t\t\t\tEnter your choice: \033[1;33m";
    cin >>choice;

    switch(choice)
    {
        case 1:
            {
                int ex=0;
                string searchuser,su,sp;
                cout <<"\033[1;36m\n\n\t\t\t\t\t\tEnter you remembered: \033[1;33m";
                cin >>searchuser;

                ifstream searchu("database.txt");
                while(searchu>>su>>sp)
                    {
                        if(su==searchuser)
                        {
                            ex=1;
                            break;
                }
                }
                searchu.close();
                if(ex==1)
                    {
                system("cls");
                cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\tloading ";
                cout <<". ";

                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);

                cout <<"\033[1;33m\n\n\t\t\t\t\t\tHurray!  Account found!\n";
                cout <<"\n\n\t\t\t\t\t\tYour password is: \033[1;36m" <<sp;
                cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\tloading";

                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);
                cin.get();

                system("cls");
                return loginpage();
                }
                else
                    {
                        system("cls");
                cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\tloading";
                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);

                cout <<"\033[1;37m\n\n\t\t\t\t\t\tSorry not found";
                cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\tloading";

                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);

                system("cls");
                return loginpage();
                cin.get();
                }
                break;
            }
        case 2:
            {
                int exi=0;
                string searchpass,su2,sp2;
                cout <<"\033[1;36m\n\n\t\t\t\t\t\tEnter you remembered password: \033[1;37m";
                cin >>searchpass;

                ifstream searchp("database.txt");
                while(searchp>>su2>>sp2)
                {
                    if(sp2==searchpass)
                    {
                        exi==1;
                        break;
                    }
                }
                searchp.close();
                    if(exi==1)
                    {
                        cout <<"\033[1;33m\n\n\t\t\t\t\t\tHurray!  Account found!\n";
                        cout <<"\033[1;37m\n\n\t\t\t\t\t\tYour username is: \033[1;36m" <<su2;
                        cout <<"\033[1;37m\n\n\t\t\t\t\t\tYour password is: \033[1;36m" <<sp2;
                        cin.get();
                        cin.get();
                    }
                    else
                    {
                        cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\tloading";
                        Sleep(500);
                        cout <<". ";
                        Sleep(500);
                        cout <<". ";
                        Sleep(500);
                        cout <<". ";
                        Sleep(500);

                        cout <<"\033[1;37m\n\n\t\t\t\t\t\tSorry not found";
                        cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\tloading";
                        Sleep(500);




































































                        cout <<". ";
                        Sleep(500);
                        cout <<". ";
                        Sleep(500);
                        cout <<". ";
                        Sleep(500);
                        system("cls");

                        loginpage();
                        cin.get();
                    }
                    break;
            }

        case 3:
            {
                cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\t    loading";
                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);
                cout <<". ";
                Sleep(500);

                system("cls");
                return loginpage();
                break;
            }
        default:
            cout <<"\033[1;37m\n\n\t\t\t\t\t\tInvalid choice!\n\n\n\t\t\t\t\t\tpress any key to try again..";
            cin.get();
            cin.get();
            cout <<"\033[1;37m\n\n\n\n\t\t\t\t\t\t    loading";

            Sleep(500);
            cout <<". ";
            Sleep(500);
            cout <<". ";
            Sleep(500);
            cout <<". ";
            Sleep(500);
            system("cls");
            return forgot();
    }
}

class d_booking
{
    protected:
        int pnr;
        char f_d[20],toja[20],tojd[30],price[30];
        long int doj;

        int choice,src,dest;

    public:
        void d_pnr()
        {
            glob++;
            pnr=glob;
        }

        int j_detail()
        {
            cout <<"\033[1;37m\n\n\n\t\t\t\t\tEnter Date of Travel(MMDDYY): \033[1;36m";
            cin >>doj;

            system("cls");
            cout <<"\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
            vline('\xCD');
            cout <<"\xBB";
            cout <<"\n\t\t\t\t\xBA\t\033[1;33m   A V A I L A B L E   P L A C E S\033[1;36m\t   \xBA"<<endl;
            cout <<"\033[1;36m\t\t\t\t\xC8";
            vline('\xCD');
            cout <<"\xBC";
            cout <<"\033[1;33m\n\n\n\t\t1. Manila\t\t2. Cebu\t\t3. Davao\t\t4. Palawan"<<endl<<endl;
            cout <<"\033[1;37m\n\n\t\t\t\t\tEnter Source: \033[1;36m";
            cin >>src;
            cout <<"\033[1;37m\n\n\t\t\t\t\tEnter Destination: \033[1;36m";
            cin >>dest;
            cout <<"\033[1;37m\n\n\t\t\t\tPlease be patient.   searching flights ";
            cout <<".";

            Sleep(1000);
            cout <<".";
            Sleep(1000);
            cout <<".";
            Sleep(1000);

            if((src==1&&dest==2)||(src==2&&dest==1))
            {
                system("cls");
                cout <<"\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
                vline('\xCD');
                cout << "\xBB";
                cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
                cout << "\033[1;36m\t\t\t\t\xC8";
                vline('\xCD');
                cout << "\xBC";
                cout<<"\033[1;37m\n\n\t\t\t\t\t\tManila  -   Cebu"<<endl<<endl<<endl;
                cout<<"\033[1;33m\tAirline\t\t\t\tDeparture\t\tArrival\t\tPrice\t\tCategory"<<endl<<endl;
                cout<<"\033[1;32m\t1.Cebu Pacific\t\t\t08:00 AM\t\t11:05 AM\tPHP1400\t\tRefundable"<<endl<<endl;
                cout<<"\t2.PAL Express\t\t\t09:00 AM\t\t12:05 PM\tPHP1500\t\tRefundable"<<endl<<endl;
                cout<<"\t3.Philippine AirAsia\t\t19:00 PM\t\t22:05 PM\tPHP1057\t\tRefundable"<<endl<<endl;
                cout<<"\t4.Cebgo\t\t\t\t20:00 PM\t\t22:15 PM\tPHP1500\t\tRefundable"<<endl<<endl;
                cout<<"\t5.Philippine Airlines\t\t21:00 PM\t\t23:20 PM\tPHP1050\t\tRefundable\033[1;37m"<<endl<<endl;
            }

            else if((src==1&&dest==3) ||(src==3&&dest==1))
            {
                system("cls");
                cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
                vline('\xCD');
                cout << "\xBB";
                cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
                cout << "\033[1;36m\t\t\t\t\xC8";
                vline('\xCD');
                cout << "\xBC";
                cout<<"\033[1;37m\n\n\t\t\t\t\t\tManila  -  Davao"<<endl<<endl<<endl;
                cout<<"\033[1;33m\tAirline\t\t\t\tDeparture\t\tArrival\t\tPrice\t\tCategory"<<endl<<endl;
                cout<<"\033[1;32m\t1.Cebu Pacific\t\t\t08:30 AM\t\t11:00 AM\tPHP1521\t\tRefundable"<<endl<<endl;
                cout<<"\t2.PAL Express\t\t\t09:30 AM\t\t12:00 PM\tPHP1151\t\tRefundable"<<endl<<endl;
                cout<<"\t3.Philippine AirAsia\t\t15:00 PM\t\t18:05\t\tPHP1600\t\tRefundable"<<endl<<endl;
                cout<<"\t4.Cebgo\t\t\t\t19:00 PM\t\t21:25 PM\tPHP1550\t\tRefundable"<<endl<<endl;
                cout<<"\t5.Philippine Airlines\t\t20:00 PM\t\t23:20 PM\tPHP1257\t\tRefundable\033[1;37m"<<endl<<endl;
            }

            else if((src==1&&dest==4) ||(src==4&&dest==1))
            {
                system("cls");
                cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
                vline('\xCD');
                cout << "\xBB";
                cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
                cout << "\033[1;36m\t\t\t\t\xC8";
                vline('\xCD');
                cout << "\xBC";
                cout<<"\033[1;32m\n\t\t\t\t\t\tManila  -  Palawan"<<endl<<endl<<endl;
                cout<<"\033[1;33m\tAirline\t\t\t\tDeparture\t\tArrival\t\tPrice\t\tCategory"<<endl<<endl;
                cout<<"\033[1;32m\t1.Cebu Pacific\t\t\t07:30 AM\t\t10:00 AM\tPHP3559\t\tRefundable"<<endl<<endl;
                cout<<"\t2.PAL Express\t\t\t08:00 AM\t\t11:35 AM\tPHP1359\t\tRefundable"<<endl<<endl;
                cout<<"\t3.Philippine AirAsia\t\t11:00 AM\t\t14:05 PM\tPHP4590\t\tRefundable"<<endl<<endl;
                cout<<"\t4.Cebgo\t\t\t\t21:10 PM\t\t23:15 PM\tPHP3500\t\tRefundable"<<endl<<endl;
                cout<<"\t5.Philippine Airlines\t\t22:00 PM\t\t24:20 PM\tPHP1957\t\tRefundable\033[1;37m"<<endl<<endl;
            }
            else if((src==2&&dest==3) ||(src==3&&dest==2))
            {
                system("cls");
                cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
                vline('\xCD');
                cout << "\xBB";
                cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
                cout << "\033[1;36m\t\t\t\t\xC8";
                vline('\xCD');
                cout << "\xBC";
                cout<<"\033[1;37m\n\n\t\t\t\t\t\tCebu  -   Davao"<<endl<<endl<<endl;
                cout<<"\033[1;33m\tAirline\t\t\t\tDeparture\t\tArrival\t\tPrice\t\tCategory"<<endl<<endl;
                cout<<"\033[1;32m\t1.Cebu Pacific\t\t\t08:30 AM\t\t10:45 AM\tPHP1350\t\tRefundable"<<endl<<endl;
                cout<<"\t2.PAL Express\t\t\t10:00 AM\t\t13:05 PM\tPHP1500\t\tRefundable"<<endl<<endl;
                cout<<"\t3.Philippine AirAsia\t\t14:00 PM\t\t17:05 PM\tPHP1600\t\tRefundable"<<endl<<endl;
                cout<<"\t4.Cebgo\t\t\t\t21:00 PM\t\t23:15 PM\tPHP2500\t\tRefundable"<<endl<<endl;
                cout<<"\t5.Philippine Airlines\t\t22:00 PM\t\t24:20 PM\tPHP2057\t\tRefundable\033[1;37m"<<endl<<endl;
            }
            else if((src==2&&dest==4) ||(src==4&&dest==2))
            {
                system("cls");
                cout <<"\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
                vline('\xCD');
                cout <<"\xBB";
                cout <<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
                cout <<"\033[1;36m\t\t\t\t\xC8";
                vline('\xCD');
                cout <<"\xBC";
                cout <<"\033[1;37m\n\n\t\t\t\t\t\tCebu  -   Palawan"<<endl<<endl<<endl;
                cout <<"\033[1;33m\tAirline\t\t\t\tDeparture\t\tArrival\t\tPrice\t\tCategory"<<endl<<endl;
                cout <<"\033[1;32m\t1.Cebu Pacific\t\t\t08:30 AM\t\t11:00 AM\tPHP2890\t\tRefundable"<<endl<<endl;
                cout <<"\t2.PAL Express\t\t\t11:00 AM\t\t13:05 PM\tPHP2500\t\tRefundable"<<endl<<endl;
                cout <<"\t3.Philippine AirAsia\t\t13:00 PM\t\t16:00 PM\tPHP2700\t\tRefundable"<<endl<<endl;
                cout <<"\t4.Cebgo\t\t\t\t21:20 PM\t\t23:45 PM\tPHP3500\t\tRefundable"<<endl<<endl;
                cout <<"\t5.Philippine Airlines\t\t22:15 PM\t\t24:15 PM\tPHP2057\t\tRefundable\033[1;37m"<<endl<<endl;
            }
            else if((src==3&&dest==4) ||(src==4&&dest==3))
            {
                system("cls");
                cout <<"\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
                vline('\xCD');
                cout <<"\xBB";
                cout <<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
                cout <<"\033[1;36m\t\t\t\t\xC8";
                vline('\xCD');
                cout <<"\xBC";
                cout <<"\033[1;37m\n\n\t\t\t\t\t\tDavao  -   Palawan"<<endl<<endl<<endl;
                cout <<"\033[1;33m\tAirline\t\t\t\tDeparture\t\tArrival\t\tPrice\t\tCategory"<<endl<<endl;
                cout <<"\033[1;32m\t1.Cebu Pacific\t\t\t08:00 AM\t\t11:05 AM\tPHP2900\t\tRefundable"<<endl<<endl;
                cout <<"\t2.PAL Express\t\t\t14:00 PM\t\t17:05 PM\tPHP2500\t\tRefundable"<<endl<<endl;
                cout <<"\t3.Philippine AirAsia\t\t19:00 PM\t\t22:05 PM\tPHP2600\t\tRefundable"<<endl<<endl;
                cout <<"\t4.Cebgo\t\t\t\t21:50 PM\t\t23:20 PM\tPHP2550\t\tRefundable"<<endl<<endl;
                cout <<"\t5.Philippine Airlines\t\t22:30 PM\t\t24:45 PM\tPHP3050\t\tRefundable\033[1;37m"<<endl<<endl;
            }
            else if(src==dest)
            {
                cout <<"\033[1;37m\n\t\t\t\tSource and Destination cant be the same. Please try again!\n\t\t\t "<<endl;
                return j_detail();
            }
            else
            {
                cout <<"\n\t\t\t\t\tWrong input you entered! Please try again!\n\t\t\t\t\t";
                return j_detail();
            }
        }
int select_flights()
{

       cout <<endl<<endl;
       cout <<" \033[1;37m\n\n\t\t\t\t\tPlease choose an Airline: \033[1;33m";
       cin >>choice;
       switch(choice)
       {
       case 1:
        system("cls");
        if((src==1&&dest==2)||(src==2&&dest==1))
         {


            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebu Pacific"<<endl;
            strcpy(f_d,"Cebu Pacific");
            cout <<"Departure Time:08:00 AM"<<endl;
            cout <<"Arrival Time:11:05 AM"<<endl;
            strcpy(tojd,"8:00 AM");
            strcpy(toja,"11:05 AM");
            cout <<"Price: 1 400 PHP"<<endl;
            strcpy(price,"1 400 PHP");
         }


             if((src==1&&dest==3)||(src==3&&dest==1))
         {


            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebu Pacific"<<endl;
            strcpy(f_d,"Cebu Pacific");
            cout <<"Departure Time:08:30 AM"<<endl;
            cout <<"Arrival Time:11:00 AM"<<endl;
            strcpy(tojd,"8:30 AM");
            strcpy(toja,"11:00 AM");
            cout <<"Price: 1 521 PHP"<<endl;
            strcpy(price,"1 521 PHP");
         }
              if((src==1&&dest==4)||(src==4&&dest==1))
         {


            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebu Pacific"<<endl;
            strcpy(f_d,"Cebu Pacific");
            cout <<"Departure Time:08:30 AM"<<endl;
            cout <<"Arrival Time:11:00 AM"<<endl;
            strcpy(tojd,"7:30 AM");
            strcpy(toja,"11:00 AM");
            cout <<"Price: 3 559 PHP"<<endl;
            strcpy(price,"3 559 PHP");
         }
           if((src==2&&dest==3)||(src==3&&dest==2))
         {


            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebu Pacific"<<endl;
            strcpy(f_d,"Cebu Pacific");
            cout <<"Departure Time:08:30 AM "<<endl;
            cout <<"Arrival Time:10:45 AM"<<endl;
            strcpy(tojd,"8:30 AM");
            strcpy(toja,"10:45 AM");
            cout <<"Price: 1 350 PHP"<<endl;
            strcpy(price,"1 350 PHP");
         }
          if((src==2&&dest==4)||(src==4&&dest==2))
         {


            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebu Pacific"<<endl;
            strcpy(f_d,"Cebu Pacific");
            cout <<"Departure Time:08:30 AM"<<endl;
            cout <<"Arrival Time:11:00 AM"<<endl;
            strcpy(tojd,"8:30 AM");
            strcpy(toja,"11:00 AM");
            cout <<"Price: 2 890 PHP"<<endl;
            strcpy(price,"2 890 PHP");
         }
         if((src==3&&dest==4)||(src==4&&dest==3))
         {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebu Pacific"<<endl;
            strcpy(f_d,"Cebu Pacific");
            cout <<"Departure Time:08:00 AM"<<endl;
            cout <<"Arrival Time:11:05 AM"<<endl;
            strcpy(tojd,"8:00 AM");
            strcpy(toja,"11:05 AM");
            cout <<"Price: 2 900 PHP"<<endl;
            strcpy(price,"2 900 PHP");
         }
         cin.ignore();
         break;
       case 2:
           system("cls");
        if((src==1&&dest==2)||(src==2&&dest==1))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"PAL Express"<<endl;
            strcpy(f_d,"PAL Express");
            cout <<"Departure Time:09:00 AM"<<endl;
            cout <<"Arrival Time: 12:05 PM"<<endl;
            strcpy(tojd,"09:00 AM");
            strcpy(toja,"12:05 PM");
            cout <<"Price: 1 500 PHP"<<endl;
            strcpy(price,"1 500 PHP");
        }
        if((src==1&&dest==3)||(src==3&&dest==1))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"PAL Express"<<endl;
            strcpy(f_d,"PAL Express");
            cout <<"Departure Time: 09:30 AM"<<endl;
            cout <<"Arrival Time: 12:00 PM"<<endl;
            strcpy(tojd,"14:00 PM");
            strcpy(toja,"17:05 PM");
            cout <<"Price: 1 151 PHP"<<endl;
            strcpy(price,"1 151 PHP");
        }
        if((src==1&&dest==4)||(src==4&&dest==1))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"PAL Express"<<endl;
            strcpy(f_d,"PAL Express");
            cout <<"Departure Time: 08:00 AM"<<endl;
            cout <<"Arrival Time: 11:45 AM"<<endl;
            strcpy(tojd,"08:00 AM");
            strcpy(toja,"11:45 AM");
            cout <<"Price: 1 359 PHP"<<endl;
            strcpy(price,"1 359 PHP");
        }
        if((src==2&&dest==3)||(src==3&&dest==2))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"PAL Express"<<endl;
            strcpy(f_d,"PAL Express");
            cout <<"Departure Time: 10:00 AM"<<endl;
            cout <<"Arrival Time: 13:05 PM"<<endl;
            strcpy(tojd,"14:00 PM");
            strcpy(toja,"17:05 PM");
            cout <<"Price: 1 500 PHP"<<endl;
            strcpy(price,"1 500 PHP");
        }
        if((src==2&&dest==4)||(src==2&&dest==4))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"PAL Express"<<endl;
            strcpy(f_d,"PAL Express");
            cout <<"Departure Time: 10:00 AM"<<endl;
            cout <<"Arrival Time: 13:05 PM"<<endl;
            strcpy(tojd,"10:00 AM");
            strcpy(toja,"13:05 PM");
            cout <<"Price: 2 500 PHP"<<endl;
            strcpy(price,"2 500 PHP");
        }
        if((src==3&&dest==4)||(src==4&&dest==3))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"PAL Express"<<endl;
            strcpy(f_d,"PAL Express");
            cout <<"Departure Time: 14:00 PM"<<endl;
            cout <<"Arrival Time: 17:05 PM"<<endl;
            strcpy(tojd,"14:00 PM");
            strcpy(toja,"17:05 PM");
            cout <<"Price: 2 500 PHP"<<endl;
            strcpy(price,"2 500 PHP");
        }
        cin.ignore();
        break;
    case 3:
        system("cls");
        if((src==1&&dest==2)||(src==2&&dest==1))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Philippine AirAsia"<<endl;
            strcpy(f_d,"Philippine AirAsia");
            cout <<"Departure Time: 19:00 PM"<<endl;
            cout <<"Arrival Time: 22:05 PM"<<endl;
            strcpy(tojd,"19:00 PM");
            strcpy(toja,"22:05 PM");
            cout <<"Price: 1 057 PHP"<<endl;
            strcpy(price,"1 057 PHP");
        }
        if((src==1&&dest==3)||(src==3&&dest==1))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Philippine AirAsia"<<endl;
            strcpy(f_d,"Philippine AirAsia");
            cout <<"Departure Time: 15:00 PM"<<endl;
            cout <<"Arrival Time: 18:05 PM"<<endl;
            strcpy(tojd,"15:00 PM");
            strcpy(toja,"18:05 PM");
            cout <<"Price: 1 600 PHP"<<endl;
            strcpy(price,"1 600 PHP");
        }
        if((src==1&&dest==4)||(src==4&&dest==1))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Philippine AirAsia"<<endl;
            strcpy(f_d,"Philippine AirAsia");
            cout <<"Departure Time:11:00 AM"<<endl;
            cout <<"Arrival Time: 14:05 PM"<<endl;
            strcpy(tojd,"11:00 AM");
            strcpy(toja,"14:05 PM");
            cout <<"Price: 4 590 PHP"<<endl;
            strcpy(price,"4 590 PHP");
        }
        if((src==2&&dest==3)||(src==3&&dest==2))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Philippine AirAsia"<<endl;
            strcpy(f_d,"Philippine AirAsia");
            cout <<"Departure Time:14:00 PM"<<endl;
            cout <<"Arrival Time: 17:05 PM"<<endl;
            strcpy(tojd,"14:00 PM");
            strcpy(toja,"17:05 PM");
            cout <<"Price: 1 600 PHP"<<endl;
            strcpy(price,"1 600 PHP");
        }
        if((src==2&&dest==4)||(src==4&&dest==2))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Philippine AirAsia"<<endl;
            strcpy(f_d,"Philippine AirAsia");
            cout <<"Departure Time:13:00 PM"<<endl;
            cout <<"Arrival Time: 16:00 PM"<<endl;
            strcpy(tojd,"13:00 PM");
            strcpy(toja,"16:00 PM");
            cout <<"Price: 2 700 PHP"<<endl;
            strcpy(price,"2 700 PHP");
        }
        if((src==3&&dest==4)||(src==4&&dest==3))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Philippine AirAsia"<<endl;
            strcpy(f_d,"Philippine AirAsia");
            cout <<"Departure Time:19:00 PM"<<endl;
            cout <<"Arrival Time: 22:05 PM"<<endl;
            strcpy(tojd,"19:00 PM");
            strcpy(toja,"22:05 PM");
            cout <<"Price: 2 600 PHP"<<endl;
            strcpy(price,"2 600 PHP");
}

            cin.ignore();
        break;
   case 4:
       system("cls");
       if((src==1&&dest==2)||(src==2&&dest==1))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebgo"<<endl;
            strcpy(f_d,"Cebgo");
            cout <<"Departure Time: 20:00 PM"<<endl;
            cout <<"Arrival Time: 22:15 PM"<<endl;
            strcpy(tojd,"20:00 PM");
            strcpy(toja,"22:15 PM");
            cout <<"Price: 1 500 PHP"<<endl;
            strcpy(price,"1 500 PHP");
        }
        if((src==1&&dest==3)||(src==3&&dest==1))
            {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebgo"<<endl;
            strcpy(f_d,"Cebgo");
            cout <<"Departure Time: 19:00 PM"<<endl;
            cout <<"Arrival Time: 21:25 PM"<<endl;
            strcpy(tojd,"19:00 PM");
            strcpy(toja,"22:25 PM");
            cout <<"Price: 1 550 PHP"<<endl;
            strcpy(price,"1 550 PHP");
        }
        if((src==1&&dest==4)||(src==4&&dest==1))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebgo"<<endl;
            strcpy(f_d,"Cebgo");
            cout <<"Departure Time: 21:10 PM"<<endl;
            cout <<"Arrival Time: 23:15 PM"<<endl;
            strcpy(tojd,"21:10 PM");
            strcpy(toja,"23:15 PM");
            cout <<"Price: 3 500 PHP"<<endl;
            strcpy(price,"3 500 PHP");
        }
        if((src==2&&dest==3)||(src==3&&dest==2))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebgo"<<endl;
            strcpy(f_d,"Cebgo");
            cout <<"Departure Time: 21:10 PM"<<endl;
            cout <<"Arrival Time: 23:15 PM"<<endl;
            strcpy(tojd,"21:20 PM");
            strcpy(toja,"23:45 PM");
            cout <<"Price:2 500 PHP"<<endl;
            strcpy(price,"2 500 PHP");
        }
        if((src==2&&dest==4)||(src==4&&dest==2))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout <<"Cebgo"<<endl;
            strcpy(f_d,"Cebgo");
            cout <<"Departure Time: 21:20 PM"<<endl;
            cout <<"Arrival Time: 23:45 PM"<<endl;
            strcpy(tojd,"21:20 PM");
            strcpy(toja,"23:45 PM");
            cout <<"Price: 3 500 PHP"<<endl;
            strcpy(price,"3 500 PHP");
        }
        if((src==3&&dest==4)||(src==4&&dest==3))
        {
            cout <<"\033[1;36m\nFlight Selected:"<<endl;
            cout<<"Cebgo"<<endl;
            strcpy(f_d,"Cebgo");
            cout<<"Departure Time: 21:20 PM"<<endl;
            cout<<"Arrival Time: 23:45 PM"<<endl;
            strcpy(tojd,"21:50 PM");
            strcpy(toja,"23:20 PM");
            cout<<"Price: 2 550 PHP"<<endl;
            strcpy(price,"2 550 PHP");
        }
        cin.ignore();
    break;

        case 5:
            cout<<"\033[1;36m\nFlight Selected:"<<endl;
            cout<<"Philippine Airlines"<<endl;
            strcpy(f_d,"Philippine Airlines");
            cout<<"Departure Time: 19:00"<<endl;
            cout<<"Arrival Time: 22:05"<<endl;
            strcpy(tojd,"19:00");
            strcpy(toja,"22:05");
            cout<<"Price: 1 600 PHP"<<endl;
            strcpy(price,"1 600 PHP");

            break;

       default:
           cout<<"\033[1;36m\n\t\t\t\t\tWrong input you entered! Please try again!\n\t\t\t\t\t ";
            return select_flights();
       }
}


};
class i_booking
{
    protected:
    int pnri;
    char f_i[50],tojai[50],tojdi[50],pricei[50];
    long int doji;
    int choicei,srci,desti;
    public:
        void i_pnr()
    {
        glob++;
        pnri=glob;

    }

     int j_detaili()

    {
        cout<<"\033[1;37m\n\t\t\t\t\tEnter Date of Travel(DDMMYY): \033[1;36m";
        cin>>doji;
        system("cls");
        cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
        cout<<"\n\t\t\t\t\xBA\t\033[1;33m   A V A I L A B L E   P L A C E S\033[1;36m\t   \xBA"<<endl;
        cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
        cout<<"\033[1;33m\n\n\t1. Philippines\t\t2. Korea\t   3. Japan\t\t4. Singapore\t\t5. New York\n\n\n\t\t\t\t";
        cout<<"\033[1;37m\n\n\t\t\t\t\t\tEnter Source: \033[1;36m";
        cin>>srci;
         cout<<"\033[1;37m\n\n\t\t\t\t\t\tEnter Destination: \033[1;36mt";
         cin>>desti;
         cout<<"\033[1;37m\n\n\t\t\t\tPlease be patient.   searching flights ";
         cout<<".";
        Sleep(1000);
         cout<<".";
         Sleep(1000);
          cout<<".";
          Sleep(1000);
         if((srci==1&&desti==2)||(srci==2&&desti==1))

         {
             system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
             cout<<"\033[1;37m\n\n\t\t\t\t\tPhilippines  -   Korea"<<endl<<endl<<endl;
             cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
             cout<<"\033[1;32m\n\n\t1.Philippine Airlines\t\t10:00 AM\t14:05 PM\tPHP54096\tRefundable"<<endl;
              cout<<"\n\t2.Jetstar Asia Airways  \t11:00 AM\t14:05 PM\tPHP65167\tRefundable"<<endl;
               cout<<"\n\t3. Asiana Airlines  \t\t18:00 PM\t22:05 PM\tPHP66848\tRefundable"<<endl;
                cout<<"\n\t4. Qatar Airways  \t\t19:05 PM\t23:15 PM\tPHP61647\tRefundable"<<endl;
                 cout<<"\n\t5. Delta Airlines  \t\t20:40 PM\t23:55 PM\tPHP60918\tRefundable\033[1;37m"<<endl;




         }

         else if((srci==1&&desti==3) ||(srci==3&&desti==1))
         {
            system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
            vline('\xCD');
            cout << "\xBB";
            cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
            cout << "\033[1;36m\t\t\t\t\xC8";
            vline('\xCD');
            cout << "\xBC";
            cout<<"\033[1;37m\n\n\t\t\t\t\t\tPhilippines -   Japan"<<endl<<endl<<endl;
            cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
            cout<<"\033[1;27m\n\n\t1.Philippine Airlines\t\t08:30 AM\t10:35 AM\tPHP46490\tRefundable"<<endl;
            cout<<"\n\t2.Jetstar Asia Airways\t\t09:10 AM\t11:55 AM\tPHP50610\tRefundable"<<endl;
            cout<<"\n\t3. Asiana Airlines  \t\t11:30 AM\t14:35 PM\tPHP51711\tRefundable"<<endl;
            cout<<"\n\t4. Qatar Airways  \t\t13:45 PM\t16:25 PM\tPHP61848\tRefundable"<<endl;
            cout<<"\n\t5. Delta Airlines  \t\t20:45 PM\t23:15 PM\tPHP60848\tRefundable\033[1;37m"<<endl;
         }
         else if((srci==1&&desti==4) ||(srci==4&&desti==1))
         {
            system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
            vline('\xCD');
            cout << "\xBB";
            cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
            cout << "\033[1;36m\t\t\t\t\xC8";
            vline('\xCD');
            cout << "\xBC";
            cout<<"\n\t\t\t\t\tPhilippines -   Singapore"<<endl<<endl<<endl;
            cout<<"\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
            cout<<"\n\n\t1.Philippine Airlines\t\t09:20 AM\t11:25 AM\tPHP28000\tRefundable"<<endl;
            cout<<"\n\t2.Jetstar Asia Airways  \t10:20 AM\t12:00 PM\tPHP28500\tRefundable"<<endl;
            cout<<"\n\t3. Asiana Airlines  \t\t12:00 PM\t15:05 PM\tPHP29000\tRefundable"<<endl;
            cout<<"\n\t4. Qatar Airways  \t\t14:35 PM\t17:15 AM\tPHP62848\tRefundable"<<endl;
            cout<<"\n\t5. Delta Airlines  \t\t20:15 PM\t23:00 PM\tPHP61540\tRefundable"<<endl;
         }

          else if((srci==1&&desti==5) ||(srci==5&&desti==1))
         {
          system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
             cout<<"\033[1;37m\n\n\t\t\t\t\tPhilippines -   New York"<<endl<<endl<<endl;
             cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
             cout<<"\033[1;32m\n\n\t1.Philippine Airlines\t\t09:10 AM\t11:00 AM\tPHP33680\tRefundable"<<endl;
              cout<<"\n\t2.Jetstar Asia Airways\t\t10:30 AM\t12:40 PM\tPHP39847\tRefundable"<<endl;
               cout<<"\n\t3. Asiana Airlines\t\t12:10 PM\t15:15 PM\tPHP39717\tRefundable"<<endl;
                cout<<"\n\t4. Qatar Airways\t\t15:15 PM\t18:55 PM\tPHP56835\tRefundable"<<endl;
                 cout<<"\n\t5. Delta Airlines\t\t20:30 PM\t23:35 PM\tPHP57845\tRefundable\033[1;37m"<<endl;
         }
          else if((srci==2&&desti==3) ||(srci==3&&desti==2))
         {
          system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
             cout<<"\033[1;37m\n\n\t\t\t\t\tKorea  -   Japan"<<endl<<endl<<endl;
             cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
             cout<<"\033[1;32m\n\n\t1.Philippine Airlines\t\t09:15 AM\t13:15 PM\tPHP52000\tRefundable"<<endl;
              cout<<"\n\t2.Jetstar Asia Airways\t\t10:20 AM\t13:25 PM\tPHP53500\tRefundable"<<endl;
               cout<<"\n\t3. Asiana Airlines\t\t12:30 PM\t15:15 PM\tPHP54000\tRefundable"<<endl;
                cout<<"\n\t4. Qatar Airways\t\t13:30 PM\t16:45 PM\tPHP65128\tRefundable"<<endl;
                 cout<<"\n\t5. Delta Airlines\t\t20:25 PM\t23:10 PM\tPHP66560\tRefundable\033[1;37m"<<endl;

         }
          else if((srci==2&&desti==4) ||(srci==4&&desti==2))
         {
            system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
             cout<<"\033[1;37m\n\n\t\t\t\t\tKorea  -   Singapore"<<endl<<endl<<endl;
             cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
             cout<<"\033[1;32m\n\n\t1.Philippine Airlines\t\t08:20 AM\t11:00 PM\tPHP55050\tRefundable"<<endl;
              cout<<"\n\t2.Jetstar Asia Airways\t\t11:00 AM\t14:30 PM\tPHP60500\tRefundable"<<endl;
               cout<<"\n\t3. Asiana Airlines\t\t14:20 PM\t17:05 PM\tPHP58000\tRefundable"<<endl;
               cout<<"\n\t4. Qatar Airways\t\t17:05 PM\t20:15 PM\tPHP55748\tRefundable"<<endl;
                 cout<<"\n\t5. Delta Airlines\t\t21:40 PM\t23:55 PM\tPHP76848\tRefundable\033[1;37m"<<endl;


         }
         else if((srci==2&&desti==5) ||(srci==5&&desti==2))
         {
           system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
             cout<<"\033[1;37m\n\n\t\t\t\t\tKorea  -   New York"<<endl<<endl<<endl;
             cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
             cout<<"\033[1;32m\n\n\t1.Philippine Airlines\t\t07:30 AM\t10:00 AM\tPHP45500\tRefundable"<<endl;
              cout<<"\n\t2.Jetstar Asia Airways\t\t10:00 AM\t13:15 PM\tPHP55500\tRefundable"<<endl;
               cout<<"\n\t3. Asiana Airlines\t\t13:00 PM\t16:05 PM\tPHP56000\tRefundable"<<endl;
               cout<<"\n\t4. Qatar Airways\t\t19:05 PM\t23:15 PM\tPHP60048\tRefundable"<<endl;
                 cout<<"\n\t5. Delta Airlines\t\t20:40 PM\t23:55PM\t\tPHP50050\tRefundable\033[1;37m"<<endl;
         }
         else if((srci==3&&desti==4) ||(srci==4&&desti==3))
         {
           system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
             cout<<"\033[1;37n\n\t\t\t\t\tJapan  -   Singapore"<<endl<<endl<<endl;
             cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
             cout<<"\033[1;32m\n\n\t1.Philippine Airlines\t\t07:00 AM\t10:05 AM\tPHP25000\tRefundable"<<endl;
              cout<<"\n\t2.Jetstar Asia Airways\t\t09:00 AM\t12:05 PM\tPHP25500\tRefundable"<<endl;
               cout<<"\n\t3. Asiana Airlines\t\t18:00 PM\t22:05 PM\tPHP26000\tRefundable"<<endl;
               cout<<"\n\t4. Qatar Airways\t\t19:05 PM\t23:15 PM\tPHP66848\tRefundable"<<endl;
                 cout<<"\n\t5. Delta Airlines\t\t20:40 PM\t23:55 PM\tPHP66848\tRefundable\033[1;37m"<<endl;
         }
         else if((srci==3&&desti==5) ||(srci==5&&desti==3))
         {
           system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
             cout<<"\033[1;37m\n\n\t\t\t\t\tJapan  -   New York"<<endl<<endl<<endl;
             cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
             cout<<"\033[1;32m\n\n\t1.Philippine Airlines\t\t08:00 AM\t11:05 AM\tPHP35000\tRefundable"<<endl;
              cout<<"\n\t2.Jetstar Asia Airways\t\t10:00 AM\t12:05 PM\tPHP35500\tRefundable"<<endl;
               cout<<"\n\t3. Asiana Airlines\t\t12:00 PM\t15:05 PM\tPHP36000\tRefundable"<<endl;
               cout<<"\n\t4. Qatar Airways\t\t15:05 PM\t18:15 PM\tPHP66848\tRefundable"<<endl;
                 cout<<"\n\t5. Delta Airlines\t\t20:40 PM\t23:55 PM\tPHP66848\tRefundable\033[1;37m"<<endl;

         }
         else if((srci==4&&desti==5) ||(srci==5&&desti==4))
         {
           system("cls");
            cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m\t      F L I G H T S   F O U N D\033[1;36m \t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');
cout << "\xBC";
             cout<<"\033[1;37m\n\n\t\t\t\t\tSingapore  -   New York"<<endl<<endl<<endl;
             cout<<"\033[1;33m\n\t\tAirline\t\t\tDeparture\tArrival\t\tPrice\t\tCategory"<<endl;
             cout<<"\033[1;32m\n\n\t1.Philippine Airlines\t\t09:00 AM\t12:05 PM\tPHP55000\tRefundable"<<endl;
              cout<<"\n\t2.Jetstar Asia Airways\t\t10:30 AM\t13:05 PM\tPHP45500\tRefundable"<<endl;
               cout<<"\n\t3. Asiana Airlines\t\t12:00 PM\t15:05 PM\tPHP66000\tRefundable"<<endl;
               cout<<"\n\t4. Qatar Airways\t\t15:05 PM\t18:15 PM\tPHP66848\tRefundable"<<endl;
                 cout<<"\n\t5. Delta Airlines\t\t20:40 PM\t23:55 PM\tPHP66848\tRefundable\033[1;37m"<<endl;
         }
        else if(srci==desti)
        {
            cout<<"\033[1;37m\n\n\t\t\t\tSource and Destination cant be the same. Please try again!. . "<<endl;
            return j_detaili();
        }
        else
        {
            cout<<"\033[1;37m\t\t\t\tWrong input you entered! Please try again!. . "<<endl;
             return j_detaili();
        }
    }
  int select_flightsi()
   {
       cout<<" \033[1;37m\n\n\t\t\t\t\tPlease choose an Airline: \033[1;33m";
       cin>>choicei;
       switch(choicei)
       {
       case 1:system("cls");
       if((srci==1&&desti==2)||(srci==2&&desti==1))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time:10:00AM"<<endl;
            strcpy(tojdi,"10:00AM");
            cout<<"\t\t\t\tArrival Time:14:05AM"<<endl;

            strcpy(tojai,"14:05AM");
             cout<<"\t\t\t\tPrice: 54 096 PHP"<<endl;
               strcpy(pricei,"54 096 PHP");

         }
          if((srci==1&&desti==3)||(srci==3&&desti==1))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 08:30 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 10:35 AM"<<endl;
            strcpy(tojdi,"08:30 AM");
            strcpy(tojai,"10:35 AM");
             cout<<"\t\t\t\tPrice: 46 490 PHP"<<endl;
               strcpy(pricei,"46 490 PHP");
         }
         if((srci==1&&desti==4)||(srci==4&&desti==1))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 09:20 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 11:25 AM"<<endl;
            strcpy(tojdi,"09:20 AM");
            strcpy(tojai,"11:25 AM");
             cout<<"\t\t\t\tPrice: 28 000 PHP"<<endl;
               strcpy(pricei,"28 000 PHP");
         }
         if((srci==1&&desti==5)||(srci==5&&desti==1))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 09:10 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 11:00 AM"<<endl;
            strcpy(tojdi,"09:10 AM");
            strcpy(tojai,"11:00 AM");
             cout<<"\t\t\t\tPrice: 33 680 PHP"<<endl;
               strcpy(pricei,"33 680 PHP");
         }
          if((srci==2&&desti==3)||(srci==3&&desti==2))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 09:15 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 13:15 PM"<<endl;
            strcpy(tojdi,"09:13 AM");
            strcpy(tojai,"13:15 PM");
             cout<<"\t\t\t\tPrice: 52 000 PHP"<<endl;
               strcpy(pricei,"52 000 PHP");
         }
         if((srci==2&&desti==4)||(srci==4&&desti==2))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 08:20 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 11:00 AM"<<endl;
            strcpy(tojdi,"08:20 AM");
            strcpy(tojai,"11:00 PM");
             cout<<"\t\t\t\tPrice: 55 050 PHP"<<endl;
               strcpy(pricei,"55 050 PHP");
         }
          if((srci==2&&desti==5)||(srci==5&&desti==2))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 07:30 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 10:00 AM"<<endl;
            strcpy(tojdi,"07:30 AM");
            strcpy(tojai,"10:00 AM");
             cout<<"\t\t\t\tPrice: 45 500 PHP"<<endl;
               strcpy(pricei,"45 500 PHP");
         }
         if((srci==3&&desti==4)||(srci==4&&desti==3))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 07:00 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 10:05 AM"<<endl;
            strcpy(tojdi,"07:00 AM");
            strcpy(tojai,"10:05 AM");
             cout<<"\t\t\t\tPrice: 25 000 PHP"<<endl;
               strcpy(pricei,"25 000 PHP");
         }
        if((srci==3&&desti==5)||(srci==5&&desti==3))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 08:00 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 11:05 AM"<<endl;
            strcpy(tojdi,"08:00 AM");
            strcpy(tojai,"11:05 AM");
             cout<<"\t\t\t\tPrice: 35 000 PHP"<<endl;
               strcpy(pricei,"35 000 PHP");
         }
         if((srci==4&&desti==5)||(srci==5&&desti==4))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tPhilippine Airlines"<<endl;
            strcpy(f_i,"Philippine Airlines");
            cout<<"\t\t\t\tDeparture Time: 09:00 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 12:05 PM"<<endl;
            strcpy(tojdi,"09:00 AM");
            strcpy(tojai,"12:05 PM");
             cout<<"\t\t\t\tPrice: 55 000 PHP"<<endl;
               strcpy(pricei,"55 000 PHP");
         }
         cin.ignore();
            break;
       case 2:system("cls");
       if((srci==1&&desti==2)||(srci==2&&desti==1))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time: 11:00 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 14:05 PM"<<endl;
            strcpy(tojdi,"11:00 AM");
            strcpy(tojai,"14:05 PM");
             cout<<"\t\t\t\tPrice: 65 167 PHP"<<endl;
               strcpy(pricei,"65 167 PHP");
         }
          if((srci==1&&desti==3)||(srci==3&&desti==1))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time: 09:10 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 11:55 AM"<<endl;
            strcpy(tojdi,"09:19 AM");
            strcpy(tojai,"11:55 AM");
             cout<<"\t\t\t\tPrice: 50 610 PHP"<<endl;
               strcpy(pricei,"50 610 PHP");
         }
          if((srci==1&&desti==4)||(srci==4&&desti==1))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time: 10:20 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 12:00 PM"<<endl;
            strcpy(tojdi,"10:20 AM");
            strcpy(tojai,"12:00 PM");
             cout<<"\t\t\t\tPrice:28 500 PHP"<<endl;
               strcpy(pricei,"28 500 PHP");
         }
         if((srci==1&&desti==5)||(srci==5&&desti==1))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time:12:10 PM"<<endl;
            cout<<"\t\t\t\tArrival Time:15:15 PM"<<endl;
            strcpy(tojdi,"12:10 PM");
            strcpy(tojai,"15:15 PM");
             cout<<"\t\t\t\tPrice:39 847 PHP"<<endl;
               strcpy(pricei,"39 847 PHP");
         }
         if((srci==2&&desti==3)||(srci==3&&desti==2))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time:10:20 AM"<<endl;
            cout<<"\t\t\t\tArrival Time:13:25 PM"<<endl;
            strcpy(tojdi,"10:20 PM");
            strcpy(tojai,"13:25 PM");
             cout<<"\t\t\t\tPrice:53 500 PHP"<<endl;
               strcpy(pricei,"53 500 PHP");
         }
    if((srci==2&&desti==4)||(srci==4&&desti==2))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time:11:00 AM"<<endl;
            cout<<"\t\t\t\tArrival Time:14:30 PM"<<endl;
            strcpy(tojdi,"11:00 AM");
            strcpy(tojai,"14:30 PM");
             cout<<"\t\t\t\tPrice:60 500 PHP"<<endl;
               strcpy(pricei,"60 500 PHP");
         }
         if((srci==2&&desti==5)||(srci==5&&desti==2))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time:10:00 AM"<<endl;
            cout<<"\t\t\t\tArrival Time:13:15 PM"<<endl;
            strcpy(tojdi,"10:00 AM");
            strcpy(tojai,"13:15 PM");
             cout<<"\t\t\t\tPrice:55 500 PHP"<<endl;
               strcpy(pricei,"55 500 PHP");
         }
         if((srci==3&&desti==4)||(srci==4&&desti==3))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time:09:00 AM"<<endl;
            cout<<"\t\t\t\tArrival Time:12:05 PM"<<endl;
            strcpy(tojdi,"09:00 AM");
            strcpy(tojai,"12:05 PM");
             cout<<"\t\t\t\tPrice:25 500 PHP"<<endl;
               strcpy(pricei,"25 500 PHP");
         }

            if((srci==4&&desti==5)||(srci==5&&desti==4))

         {
           cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tJetstar Asia Airways"<<endl;
            strcpy(f_i,"Jetstar Asia Airways");
            cout<<"\t\t\t\tDeparture Time:10:30 AM"<<endl;
            cout<<"\t\t\t\tArrival Time:13:05 PM"<<endl;
            strcpy(tojdi,"10:30 AM");
            strcpy(tojai,"13:05 PM");
             cout<<"\t\t\t\tPrice:45 500 PHP"<<endl;
               strcpy(pricei,"45 500 PHP");
         }
         cin.ignore();
            break;
       case 3:system("cls");
       if((srci==1&&desti==2)||(srci==2&&desti==1))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tAsiana Airlines"<<endl;
            strcpy(f_i,"Asiana Airlines");
            cout<<"\t\t\t\tDeparture Time: 18:00 PM"<<endl;
            cout<<"\t\t\t\tArrival Time: 22:05 PM"<<endl;
            strcpy(tojdi,"19:00 PM");
            strcpy(tojai,"22:05 PM");
            cout<<"\t\t\t\tPrice:66 848 PHP"<<endl;
               strcpy(pricei,"668 48 PHP");
         }
         if((srci==1&&desti==3)||(srci==3&&desti==1))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tAsiana Airlines"<<endl;
            strcpy(f_i,"Asiana Airlines");
            cout<<"\t\t\t\tDeparture Time: 11:30 PM"<<endl;
            cout<<"\t\t\t\tArrival Time: 14:25 PM"<<endl;
            strcpy(tojdi,"19:00 PM");
            strcpy(tojai,"22:05 PM");
            cout<<"\t\t\t\tPrice:66 848 PHP"<<endl;
               strcpy(pricei,"668 48 PHP");
         }
          if((srci==1&&desti==4)||(srci==4&&desti==1))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tAsiana Airlines"<<endl;
            strcpy(f_i,"Asiana Airlines");
            cout<<"\t\t\t\tDeparture Time: 12:00 PM"<<endl;
            cout<<"\t\t\t\tArrival Time: 15:05 PM"<<endl;
            strcpy(tojdi,"12:00 PM");
            strcpy(tojai,"15:05 PM");
            cout<<"\t\t\t\tPrice:29 000 PHP"<<endl;
               strcpy(pricei,"29 000 PHP");
         }
         if((srci==1&&desti==5)||(srci==5&&desti==1))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tAsiana Airlines"<<endl;
            strcpy(f_i,"Asiana Airlines");
            cout<<"\t\t\t\tDeparture Time: 12:10 PM"<<endl;
            cout<<"\t\t\t\tArrival Time: 15:15 PM"<<endl;
            strcpy(tojdi,"12:10 PM");
            strcpy(tojai,"15:15 PM");
            cout<<"\t\t\t\tPrice:39 717 PHP"<<endl;
               strcpy(pricei,"39 717 PHP");
         }
         if((srci==2&&desti==3)||(srci==3&&desti==2))

         {
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tAsiana Airlines"<<endl;
            strcpy(f_i,"Asiana Airlines");
            cout<<"\t\t\t\tDeparture Time: 12:30 PM"<<endl;
            cout<<"\t\t\t\tArrival Time: 15:15 PM"<<endl;
            strcpy(tojdi,"12:30 PM");
            strcpy(tojai,"15:15 PM");
            cout<<"\t\t\t\tPrice:54 000 PHP"<<endl;
               strcpy(pricei,"54 000 PHP");
         }

         cin.ignore();
            break;
    case 4:system("cls");
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tQatar Airways"<<endl;
            strcpy(f_i,"Qatar Airways");
            cout<<"\t\t\t\tDeparture Time: 19:05 PM"<<endl;
            cout<<"\t\t\t\tArrival Time: 23:15 PM"<<endl;
            strcpy(tojdi,"19:05 PM");
            strcpy(tojai,"23:15 PM");
            cout<<"\t\t\t\tPrice:45 500 PHP"<<endl;
               strcpy(pricei,"45 500 PHP");
            break;
        case 5:system("cls");
            cout<<"\n\t\t\t\tFlight Selected:"<<endl;
            cout<<"\t\t\t\tDelta Airlines"<<endl;
            strcpy(f_i,"Delta Airlines");
            cout<<"\t\t\t\tDeparture Time: 20:30 AM"<<endl;
            cout<<"\t\t\t\tArrival Time: 23:45 AM"<<endl;
            strcpy(tojdi,"20:39 AM");
            strcpy(tojai,"23:45 AM");
            cout<<"\t\t\t\tPrice:60 918 PHP"<<endl;
               strcpy(pricei,"60 918 PHP");
            break;
       default:
           cout<<"\n\t\t\t\t\ttWrong input you entered! Please try again!.\n\t\t\t\t\t ";
            return select_flightsi();
       }
   }

};

class passenger:public d_booking,public i_booking
{
 protected:
     char f_name[50],l_name[50],email[50],gender;
     int age ;
     long long int c_no;
 public:
    void p_detail(int x)
    {
        if(x==1)
        {
            j_detail();
            select_flights();
        }
        else{

           j_detaili();
            select_flightsi();
        }
        system("cls");
        cout<<"\n\n\t\t\t\t\t Passenger Details"<<endl<<endl;
        cout<<"\n\t\t\t\t\tFirst name: ";

       cin.getline(f_name,50);
        cout<<"\n\t\t\t\t\tLast name: ";
        cin.getline(l_name,50);


    }
    int gender_check()
    {

        cout<<"\033[1;33m\n\t\t\t\t\tGender(M/F): ";
        cin>>gender;
    switch(gender)
    {
    case 'M':
    case 'm':

        break;
    case 'F':
    case 'f':

        break;
    default:
        cout<<"\033[1;37m\n\t\t\t\t\tUnspecified Gender"<<endl;

            return gender_check();
    }

    }
    void more_details()
    {

        cout<<"\n\t\t\t\t\tAge: ";
        cin>>age;

        cout<<"\n\t\t\t\t\tEmail ID: ";
        cin>>email;

        cout<<"\n\t\t\t\t\tContact no.: ";
        cin>>c_no;
        system("cls");
    cout<<"\n\n\t\t\t\t\tP A S S E N G E R   D E T A I L S \n\n\n\n";
  cout<<"\t\t\t\t\tName: "<<f_name<< "  "<<l_name<<endl<<endl;
      cout<<"\t\t\t\t\tGender: "<<gender<<endl<<endl;
    cout<<"\t\t\t\t\tAge: "<<age<<endl<<endl;
    cout<<"\t\t\t\t\tEmail ID: "<<email<<endl<<endl;
    cout<<"\t\t\t\t\tContact No.: "<<c_no<<endl<<endl;

    }
    int get_pnr()
    {
        return pnr;

    }
      int get_pnri()
    {
        return pnri;

    }
   void disp()
   {

       system("cls");

       cout<<"\n\t\t\t\t\tY O U R   T I C K E T "<<endl<<endl<<endl;
        cout<<"\t\t\t\t\tName: "<<l_name<<","<<f_name<<endl<<endl;
       cout<<"\t\t\t\t\tPNR: "<<pnr<<endl<<endl;
       cout<<"\t\t\t\t\tFlight: "<<f_d <<endl<<endl;
       cout<<"\t\t\t\t\tDate Of Travel: "<<doj<<endl<<endl;
       cout<<"\t\t\t\t\tDeparture Time: "<<tojd<<endl<<endl;
       cout<<"\t\t\t\t\tArrival Time: "<<toja<<endl<<endl;
        cout<<"\t\t\t\t\tAmount payed: "<<price<<endl<<endl;

   }
     void dispi()
   {

        system("cls");

       cout<<"\n\t\t\t\t\tY O U R   T I C K E T "<<endl<<endl<<endl;
       cout<<"\t\t\t\t\tName: "<<f_name<<","<<l_name<<endl<<endl;
       cout<<"\t\t\t\t\tDate of Travel: "<<doji<<endl<<endl;
       cout<<"\t\t\t\t\tDeparture Time: "<<tojdi<<endl<<endl;
       cout<<"\t\t\t\t\tArrival Time: "<<tojai<<endl<<endl;
        cout<<"\t\t\t\t\tAmount paid: "<<pricei<<endl<<endl;

   }


};
class payment:public d_booking,public i_booking
{

    protected:
        long long int choice1,bank,card,date,cvv,user_id;
        char password[10];

    public:
        void pay_detail()
        {
            system("cls");
            cout<<"\n\n\t\t\t\t\tP A Y M E N T   M E T H O D\n\n"<<endl;
            cout<<"\n\t\t\t1. Debit Card\t\t2.Credit Card\t\t3. Net Banking\n\t\t\t"<<endl;
            cout<<"\n\n\t\t\t\t\tPlease enter your choice(1-3): ";
            cin>>choice1;
            switch(choice1)
            {

                case 1:
                    cout<<"\n\n\t\t\t\t\tEnter Card No: ";
                    cin>>card;
                     cout<<"\n\n\t\t\t\t\tEnter Expiry date: ";
                    cin>>date;
                    cout<<"\n\n\t\t\t\t\tEnter CVV No: ";
                    cin>>cvv;

                     cout<<"\033[1;37m\n\n\t\t\t\tYour payment is being processed! Please wait";
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(2000);
                     cout<<"\033[1;33m\n\n\t\t\t\tT R A N S A C T I O N   S U C C E S S F U L!\n\t\t\t\t\t"<<endl;
                     Sleep(2000);
                     cout<<"\033[1;37m\t\t\t\t\tcreating your ticket";
                     Sleep(500);
                     cout<<".";
                    Sleep(500);
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);

                     cin.ignore();
                     break;
                case 2:
                    cout<<"\033[1;37m\n\n\t\t\t\t\tEnter Card No: \033[1;36m";
                    cin>>card;
                     cout<<"\033[1;37m\n\n\t\t\t\t\tEnter Expiry date: \033[1;36m";
                    cin>>date;
                    cout<<"\033[1;37m\n\n\t\t\t\t\tEnter CVV No: \033[1;36m";
                    cin>>cvv;
                    cout<<"\033[1;37m\n\n\t\t\t\tYour payment is being processed! Please wait";
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(2000);

                     cout<<"\033[1;33m\n\n\t\t\t\tT R A N S A C T I O N   S U C C E S S F U L!\n\t\t\t\t\t"<<endl;
                     Sleep(2000);
                     cout<<"\033[1;37m\n\n\t\t\t\t\tcreating your ticket";
                     Sleep(1500);
                     cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
                     cin.ignore();
                     break;

                case 3:
                    system("cls");
                    cout << "\033[1;36m\n\n\n\n\n\t\t\t\t\xC9";
                    vline('\xCD');
                    cout << "\xBB";
                    cout<<"\n\t\t\t\t\xBA\033[1;33m\t      B A N K S   A V A I L A B L E\033[1;36m \t   \xBA"<<endl;
                    cout << "\033[1;36m\t\t\t\t\xC8";
                    vline('\xCD');
                    cout << "\xBC";
                         cout <<"\033[1;33m\n\n\n\n\t\t\t1.BPI\t\t\t2.Metrobank\t\t3.BDO ";
                         cout <<"\033[1;37m\n\n\n\t\t\t\t\t\tSelect a Bank: \033[1;33m";
                         cin>>bank;
                         cout<<"\033[1;37m\n\t\t\t\t\tYou have selected:  \033[1;36mbank "<<bank<<endl<<endl;
                         cout<<"\033[1;37m\n\t\t\t\t\t\tEnter user ID: \033[1;36m";
                         cin>>user_id;
                         cout<<"\033[1;37m\n\t\t\t\t\t\tEnter password: \033[1;36m";
                         cin>>password;
                        cout<<"\033[1;37m\n\n\t\t\t\tYour payment is being processed! Please wait";
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(2000);
                     cout<<"\033[1;33m\n\n\t\t\t\tT R A N S A C T I O N   S U C C E S S F U L!\n\t\t\t\t\t"<<endl;
                     Sleep(2000);
                     cout<<"\033[1;37m\n\n\t\t\t\t\tcreating your ticket";
                     Sleep(1500);
                     cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);

                     cin.ignore();
                     break;
                default:
                    cout<<"\033[1;37m\n\t\t\t\t\tWrong input. Please try again\n\t\t\t\t\t";
                    return pay_detail();

            }
        }

};

void createfile( passenger p)
{
    ofstream fin("domestic.txt",ios::binary|ios::app);

    fin.write((char*)&p,sizeof(p));
    fin.close();


}
void cancelticket(int x)
{
    passenger p;
    int f=0;
    ifstream fout("domestic.txt",ios::binary|ios::app);
    ofstream fin("domestic1.txt",ios::binary|ios::app);
    fout.read((char*)&p,sizeof(p));
    while(fout)
    {
        if(p.get_pnr()!= x)
            fin.write((char*)&p,sizeof(p));
        else
        {

    cout<<"\n\n\n\n\t\t\t\tcanceling your ticket";
    Sleep(1500);
                     cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
    p.disp();
    cout<<"\n\n\n\t\t\t\t- Your ticket is being canceled!-\n\n\t\t\t\t\t";
    cout<<"\n\t\t\t\tAmount refunded:  1000 PHP\n\t\t\t\t\t";
    f++;


}
  fout.read((char*)&p,sizeof(p));
  }

  if(f==0)
    cout<<"\n\t\t\t\t\tTicket not found\n";
  fout.close();
  fin.close();
  remove("domestic.txt");
   rename("domestic1.txt","domestic.txt");
}
void checkticket(int x)
{
    passenger p;
    int f=0;
    ifstream fout("domestic.txt",ios::binary);
    fout.read((char*)&p,sizeof(p));
    while(fout)
    {

        if(p.get_pnr()==x)
        {

             p.disp();


            f++;

            break;



        }
         fout.read((char*)&p,sizeof(p));


    }

fout.close();
    if(f==0)
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\tchecking your ticket! Please wait";

        cout<<"\n\n\n\t\t\t\t\tTicket not found"<<endl;
        cin.ignore();
    cin.get();
}

void createfilei(passenger p)
{
    ofstream fin("international.txt",ios::binary|ios::app);

    fin.write((char*)&p,sizeof(p));
    fin.close();

}
void cancelticketi(int  x)
{
    passenger p;
    int f=0;
    ifstream fout("international.txt",ios::binary|ios::app);

    ofstream fin("international1.txt",ios::binary|ios::app);

    fout.read((char*)&p,sizeof(p));
    while(fout)
    {
        if(p.get_pnri()!=x)
            fin.write((char*)&p,sizeof(p));
        else
        {


cout<<"\n\n\n\n\t\t\t\t\tcanceling your ticket";
    Sleep(1500);
                     cout<<". ";
                    Sleep(1000);
                    cout<<". ";
                    Sleep(1000);
                    cout<<".";
                    Sleep(1000);
    p.dispi();
    cout<<"\n\n\t\t\t\t- Your ticket is being canceled!n\n\t\t\t\t\t";
    Sleep(1500);
    cout<<"\n\t\t\t\t\tAmount refunded:  10000 PHP\n\t\t\t\t\t";
    f++;


}
  fout.read((char*)&p,sizeof(p));
  }

  if(f==0)
    cout<<"\n\t\t\t\t\tTicket not found\n";
  fout.close();
  fin.close();
  remove("international.txt");
   rename("international1.txt","international.txt");
}
void checkticketi(int  x)
{
    passenger p;
    int f=0;
    ifstream fout("international.txt",ios::binary);
    fout.read((char*)&p,sizeof(p));
    while(fout)
    {
        if(p.get_pnri()== x)
        {
 cout<<"\n\n\n\n\n\n\n\t\t\t\t\tchecking your ticket! Please wait";
                     Sleep(1500);
                     cout<<". ";
                    Sleep(1000);
                    cout<<". ";
                    Sleep(1000);
                    cout<<". ";
                    Sleep(1000);
            p.dispi();

            f++;
            break;
        }
         fout.read((char*)&p,sizeof(p));
    }
    fout.close();
    if(f==0)
         cout<<"\033[1;37m\n\n\n\n\n\n\n\t\t\t\t\tchecking your ticket! Please wait";

        cout<<"\t\t\t\tTicket not found"<<endl;
}

int main()
{

     //HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
system("COLOR 0A");
    class d_booking d1;
    class i_booking i1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;

    do
    {
        loginpage();

        cout<<"\033[1;37m\t\t\t\t    loading";
Sleep(500);
cout<<". ";
Sleep(500);
cout<<". ";
Sleep(500);
cout<<". ";
Sleep(500);

   system("cls");
cout<<endl;
//SetConsoleTextAttribute(hConsole,14);
 cout << "\033[1;33m  \n\t\t\t\t\t\t     A L P H A \n";
 cout << "\033[1;36m\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
 cout << "\n\t\t\t\t\xBA\033[1;33m      F L I G H T  B O O K I N G  S Y S T E M\033[1;36m \t   \xBA"<<endl;
 cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');\
cout << "\xBC";
 //SetConsoleTextAttribute(hConsole,3414);
 cout<<endl<<endl;
//SetConsoleTextAttribute(hConsole,6);
 cout<<"\033[1;33m\n\n\n\t\t\t\t\t1. Book Flight(1)"<<endl;
  cout<<"\n\n\n\t\t\t\t\t2. Cancel Flight(2)"<<endl;
   cout<<"\n\n\n\t\t\t\t\t3. Check Ticket(3)"<<endl;
    cout<<"\n\n\n\t\t\t\t\t4. Exit(4)"<<endl<<endl;
    //SetConsoleTextAttribute(hConsole,561);
     cout<<"\033[1;37m\n\t\t\t\t\tPlease enter your choice: \033[1;33m";
     cin>>ch;

     switch(ch)
    {
        case 1: system("cls");
        cout << "\033[1;36m\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m      \t\tF L I G H T S\033[1;36m \t\t\t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');\
cout << "\xBC";
             cout<<"\033[1;33m\n\n\n\t\t\t\t1. Economy Flights\t\t2. Business Flights"<<endl;
           cout<<"\033[1;37m\n\n\n\t\t\t\t\tPlease choose your flight(1-2): \033[1;33m";
            cin>>ch1;


        cout<<endl<<endl;

     switch(ch1)
     {
     case 1:
         p1.d_pnr();
         p1.p_detail(1);
         p1.gender_check();
         p1.more_details();
         p2.pay_detail();
         p1.disp();
         createfile(p1);
         break;

     case 2:
         p1.i_pnr();
         p1.p_detail(2);
         p1.gender_check();
         p1.more_details();
        p2.pay_detail();
         p1.dispi();
         createfilei(p1);
         break;
     default:
        cout<<"\n\t\t\t\t\tWrong input entered. Please try again!\n\t\t\t\t\t";
        return main();


     }
     break;

     case 2:
        system("cls");
         cout << "\033[1;36m\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m      \t\tF L I G H T S\033[1;36m \t\t\t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');\
cout << "\xBC";
             cout<<"\033[1;33m\n\n\n\t\t\t\t1. Economy Flights\t\t2. Business Flights"<<endl;
           cout<<"\033[1;37m\n\n\n\t\t\t\t\tPlease choose your flight(1-2): \033[1;33m";
            cin>>ch1;
     if(ch1==1)
     {
         cout<<"\n\t\t\t\t\tPlease Enter your PNR number: ";
         cin>>n;

         cancelticket(n);
     }
     else if(ch1==2)
     {
        cout<<"\n\t\t\t\t\tPlease Enter your PNR number: ";
         cin>>n;

         cancelticketi(n);
     }
     else{

        cout<<"\n\t\t\t\t\tWrong input entered. Please try again!\n\t\t\t\t\t";

        return main();
     }

     break;


     case 3:
         system("cls");
          cout << "\033[1;36m\n\n\n\n\t\t\t\t\xC9";
vline('\xCD');
cout << "\xBB";
             cout<<"\n\t\t\t\t\xBA\033[1;33m      \t\tF L I G H T S\033[1;36m \t\t\t   \xBA"<<endl;
             cout << "\033[1;36m\t\t\t\t\xC8";
vline('\xCD');\
cout << "\xBC";
             cout<<"\033[1;33m\n\n\n\t\t\t\t1. Economy Flights\t\t2. Business Flights"<<endl;
           cout<<"\033[1;37m\n\n\n\t\t\t\t\tPlease choose your flight(1-2): \033[1;33m";
            cin>>ch1;
     if(ch1==1)
     {
         cout<<"\033[1;32m\n\t\t\t\t\tPlease Enter your PNR number: \033[1;36m";
         cin>>n;

        checkticket(n);
     }
     else if(ch1==2)
     {
        cout<<"\033[1;32m\n\t\t\t\t\tPlease Enter your PNR number: \033[1;36m";

         cin>>n;


}



     else{

        cout<<"\033[1;37m\n\t\t\t\t\tWrong input entered. Please try again!\n\t\t\t\t\t";
        return main();
     }
     break;
     case 4:
        system("cls");
        cout<<"\033[1;33m\n\n\n\n\n\n\n\n\t\t\t\tA L P H A   F L I G H T   B O O K I N G   S Y S T E M\n\t\t\t\t\t";
        cout<<"\033[1;37m\n\t\t\t\t\tYour airline of choice!\n\n\n\n";
     return 0;
     break;
     default:
        cout<<"\033[1;37m\n\t\t\t\t\tWrong input entered.. Please try again\n\t\t\t\t\t";

        return main();

    }

    cout<<"\033[1;33m\n\n\n\n\t\t\t\tThank you for using ALPHA Flight Booking System!\n\n\n\n\n\n"<<endl;

    cout<<"\033[1;37m\t\t\t \tDo you want to Book again?(Y/N)\n\t\t\t\t\t";
  cin>>input;

cin.clear();
cout<<"\033[1;37m\t\t\t\t    loading";
Sleep(500);
cout<<". ";
Sleep(500);
cout<<". ";
Sleep(500);
cout<<". ";
Sleep(500);

loginpage();
}while(input=='Y'||input=='y');


    }

