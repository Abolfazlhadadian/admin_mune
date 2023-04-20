#include <iostream>
#include <string>

using namespace std;

void ad(string username, string password);
void leader();
void user_menu();

int main() // صفحه ورودی
{
    cout << "Please select a number ;)" << endl;
    cout << "1.Sing in" << endl;
    cout << "2.Sing up" << endl;
    cout << "3.Exit " << endl;
    cout << ">> ";

    string username, password;

    int x;

    while (x != 3)
    {
        cin >> x;
        cin.get();
        switch (x)
        {
        case 1: // صفحه ثبت نام
            system("cls");
            cout << "User_name:";
            getline(cin, username);
            // cin.get();
            // cin.get();

            cout << "password:";
            getline(cin, password);
            // cin.get();
            // cin.get();
            ad(username, password);
            system("cls");
            cout << "Welcome"
                 << " " << username << ";" << endl;
            user_menu();
            break;

        case 2:
            system("cls");
            cout << "loading...";
            cin.get();
            system("cls");
            main();
            break;

        case 3:
            exit(0);
            break;

        default:
            cout << "Enter the number again:(";
            break;
        }
    }

    return 0;
}

void user_menu()
{
    cout << "1- Enter the details of previous semester courses and their grades"
         << "\n2 - Revising course specifications"
         << "\n3 - Modifying personal information"
         << "\n4 - Changing the login password"
         << "\n5 - Show the units that can be obtained"
         << "\n6 - Unit selection"
         << "\n7 - Remove the unit"
         << "\n8 - Receiving the weekly program"
         << "\n0 - Return"
         << "\n>> ";

    int n;
    cin >> n;
    switch (n)
    {
    case 0:
        system("cls");
        main();
        break;

    default:
        system("cls");
        cout << "It will be completed soon"
                "\nPress any key to continue . . .";
        cin.get();
        cin.get();
        system("cls");
        main();

        break;
    }
}

void ad(string username, string password)
{
    string Admin = "admin";
    string admin = "admin";
    if (username == Admin || username == admin)
    {
        system("cls");
        cout << "Welcome Admin" << endl;
        leader();
    }
    if (password == Admin || password == admin)
    {
        system("cls");
        cout << "Welcome Admin" << endl;
        leader();
    }
}

void leader()
{
    cout << "1- enter the lesson"
         << "\n2 - Lesson correction"
         << "\n3 - Delete lesson"
         << "\n4 - Show user profiles"
         << "\n5 - Blocking the user"
         << "\n6 - Fixing user blocking"
         << "\n7 - Report"
         << "\n0 - Return"
         << "\n>> ";

    int n;
    cin >> n;
    switch (n)
    {
    case 0:
        system("cls");
        main();
        break;

    default:
        system("cls");
        cout << "It will be completed soon"
                "\nPress any key to continue . . .";
        cin.get();
        cin.get();
        system("cls");
        main();
        break;
    }
}