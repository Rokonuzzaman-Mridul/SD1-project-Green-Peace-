#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int location()
{
    int n;
    printf("1. Adabar\t2. Badda\t3. Bangshal\t4. Bimanbandar\t5. Cantonment\n");
    printf("6. Chowkbazar\t7. Demra\t8. Dhanmondi\t9. Gulshan\t10. Hazaribagh\n");
    printf("11. Jatrabari\t12. kafrul\t13. Kalabagan\t14. Khilgaon\t15. Khilkhet\n");
    //printf("16. Lalbagh\t17. Mirpur\t18. Mohammadpur\t19. Motijheel\t20. Pallabi\n");
    //printf("21. Paltan\t22. Ramna\t23. Rampura\t24. Shahbagh\t25. Shyampur\n");
    //printf("26. Tejgaon\t27. Turag\t28. Uttarkhan\t29. Vatara\t30. Wari\n");
    printf("\nChoose your address: ");
    scanf("%d",&n);
    return n;
}

int count_digit(long long number)
{
    int count = 0;
    while(number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}

void nursery(int n)
{
    string pickup;
    int i,plant,qty1=0,qty2=0,qty3=0,qty4=0,qty5=0;
    int price1=0,price2=0,price3=0,price4=0,price5=0;
    int ch = n;
    char choice;
    char str[50];
    string line;
    switch(ch)
    {
    case 1:
        cout << "1. Sobuj Bangla Nersery\n" << "2. Bangladesh agricultural nursery\n" << "3. Heaven tree, plants and agro\n";
        cout << "\nPress 4 to go back to previous\n";
        cin >> i;
        system("cls");
        switch(i)
        {
        case 1:
        {
            cout << "Available Plants:\n";
            ifstream file("Flower1.txt");
            while(getline(file,line))
            {
                cout << line << endl;
            }
            file.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 120*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 60*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 85*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 90*qty4;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                        cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                        cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                        cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }
            break;
        }
        case 2:
        {
            cout << "Available Plants:\n";
            ifstream file1("Flower2.txt");
            while(getline(file1,line))
            {
                cout << line << endl;
            }
            file1.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 150*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 60*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 100*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 150*qty4;
                        break;
                    case 5:
                        cout << "Enter quantity: ";
                        cin >> qty5;
                        price5 = 90*qty5;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4+price5;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Cosmos\t\t" << qty1 << "\t" << price1 << endl;
                        cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                        cout << "Rose\t\t" << qty3 << "\t" << price3 << endl;
                        cout << "Daisy\t\t" << qty4 << "\t" << price4 << endl;
                        cout << "Tulip\t\t" << qty5 << "\t" << price5 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }
            break;
        }
        case 3:
        {
            cout << "Available Plants:\n";
            ifstream file2("Flower3.txt");
            while(getline(file2,line))
            {
                cout << line << endl;
            }
            file2.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 90*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 150*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 180*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 80*qty4;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Dahlia\t" << qty1 << "\t" << price1 << endl;
                        cout << "Daisy\t\t" << qty2 << "\t" << price2 << endl;
                        cout << "Sunflower\t" << qty3 << "\t" << price3 << endl;
                        cout << "Orchid\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }

        }
        break;
        case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
        }
    case 2:
        cout << "1. Banglar nursery\n2. Ador nursery\n";
        cout << "\nPress 4 to go back previous\n";
        cin >> i;
        system("cls");
        switch(i)
        {
        case 1:
        {
            cout << "Available Plants:\n";
            ifstream file3("Flower4.txt");
            while(getline(file3,line))
            {
                cout << line << endl;
            }
            file3.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 200*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 400*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 30*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 70*qty4;
                        break;
                    case 5:
                        cout << "Enter quantity: ";
                        cin >> qty5;
                        price5 = 150*qty5;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4+price5;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Lemon\t\t" << qty1 << "\t" << price1 << endl;
                        cout << "Coconut\t" << qty2 << "\t" << price2 << endl;
                        cout << "Cucumber\t" << qty3 << "\t" << price3 << endl;
                        cout << "Meri Gold\t" << qty4 << "\t" << price4 << endl;
                        cout << "Rose\t\t" << qty5 << "\t" << price5 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }
        }
        case 2:
        {
            cout << "Available Plants:\n";
            ifstream file4("Flower1.txt");
            while(getline(file4,line))
            {
                cout << line << endl;
            }
            file4.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 120*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 60*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 30*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 70*qty4;
                        break;
                    case 5:
                        cout << "Enter quantity: ";
                        cin >> qty5;
                        price5 = 150*qty5;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                        cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                        cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                        cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }
        }
        case 3:
        {
            cout << "Available Plants:\n";
            ifstream file5("Flower6.txt");
            while(getline(file5,line))
            {
                cout << line << endl;
            }
            file5.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 80*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 60*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 130*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 80*qty4;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "China Rose\t" << qty1 << "\t" << price1 << endl;
                        cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                        cout << "Champa\t\t" << qty3 << "\t" << price3 << endl;
                        cout << "Tulip\t\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }

        }
        case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
        }
    case 3:
    {
        cout << "1. Shobujayon nursery, pots and plants";
        cout << "\nPress 4 to go back to previous\n";
        cin >> i;
        system("cls");
        switch(i)
        {
        case 1:
        {
            cout << "Available Plants:\n";
            ifstream file6("Flower10.txt");
            while(getline(file6,line))
            {
                cout << line << endl;
            }
            file6.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 130*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 100*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 200*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 450*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Sunflower\t" << qty1 << "\t" << price1 << endl;
                            cout << "Rose\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Lemon\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Mango\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
        }
        case 2:
        {
            cout << "Available Plants:\n";
            ifstream file7("Flower1.txt");
            while(getline(file7,line))
            {
                cout << line << endl;
            }
            file7.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 120*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 60*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 85*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 90*qty4;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                        cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                        cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                        cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }
        }
        case 3:
        {
            cout << "Available Plants:\n";
            ifstream file8("Flower1.txt");
            while(getline(file8,line))
            {
                cout << line << endl;
            }
            file8.close();
            cout << "\nDo you want to buy?(y/n): ";
            cin >> choice;
            while(1)
            {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 120*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 60*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 85*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 90*qty4;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                        cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                        cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                        cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }

        }
        case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
        }
        case 4:
            cout << "1. Green Garden";
            cout << "\nPress 4 to go back previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file9("Flower1.txt");
                while(getline(file9,line))
                {
                    cout << line << endl;
                }
                file9.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file10("Flower1.txt");
                while(getline(file10,line))
                {
                    cout << line << endl;
                }
                file10.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file11("Flower1.txt");
                while(getline(file11,line))
                {
                    cout << line << endl;
                }
                file11.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
                n=location();
                printf("%d", n);
                system("cls");
                cout << "Your nearby nurseries are:\n\n";
                nursery(n);
                break;
                break;
            }
        case 5:
            cout << "1. krishibid nursery\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file12("Flower7.txt");
                while(getline(file12,line))
                {
                    cout << line << endl;
                }
                file12.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 100*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 90*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 170*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 200*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Tulip\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Night Queen\t" << qty3 << "\t" << price3 << endl;
                            cout << "Oleander\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file13("Flower1.txt");
                while(getline(file13,line))
                {
                    cout << line << endl;
                }
                file13.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
                cout << "Available Plants:\n";
                ifstream file14("Flower1.txt");
                while(getline(file14,line))
                {
                    cout << line << endl;
                }
                file14.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            break;
        case 6:
            cout << "1. Green palli nursery\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file15("Flower10.txt");
                while(getline(file15,line))
                {
                    cout << line << endl;
                }
                file15.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 130*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 100*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 200*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 450*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Sunflower\t" << qty1 << "\t" << price1 << endl;
                            cout << "Rose\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Lemon\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Mango\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file16("Flower1.txt");
                while(getline(file16,line))
                {
                    cout << line << endl;
                }
                file16.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file17("Flower1.txt");
                while(getline(file17,line))
                {
                    cout << line << endl;
                }
                file17.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
                n=location();
                printf("%d", n);
                system("cls");
                cout << "Your nearby nurseries are:\n\n";
                nursery(n);
                break;
                break;
            }
        case 7:
            cout << "1. Green Garden\n2. Boishakhi Plants house\n3. Alia Nursery\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file18("Flower1.txt");
                while(getline(file18,line))
                {
                    cout << line << endl;
                }
                file18.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file19("Flower8.txt");
                while(getline(file19,line))
                {
                    cout << line << endl;
                }
                file19.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 80*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 120*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 50*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 150*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Champa\t" << qty1 << "\t" << price1 << endl;
                            cout << "Rose\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Mery Gold\t" << qty3 << "\t" << price3 << endl;
                            cout << "Lemon\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file20("Flower3.txt");
                while(getline(file20,line))
                {
                    cout << line << endl;
                }
                file20.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 90*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 150*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 180*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 80*qty4;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Dahlia\t" << qty1 << "\t" << price1 << endl;
                        cout << "Daisy\t\t" << qty2 << "\t" << price2 << endl;
                        cout << "Sunflower\t" << qty3 << "\t" << price3 << endl;
                        cout << "Orchid\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }

            }
            case 4:
                n=location();
                printf("%d", n);
                system("cls");
                cout << "Your nearby nurseries are:\n\n";
                nursery(n);
                break;
            break;
            }
        case 8:
            cout << "1. Plant hub\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file21("Flower9.txt");
                while(getline(file21,line))
                {
                    cout << line << endl;
                }
                file21.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 130*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 80*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 90*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 150*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Orchid\t" << qty1 << "\t" << price1 << endl;
                            cout << "China Rose\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Rose\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file22("Flower1.txt");
                while(getline(file22,line))
                {
                    cout << line << endl;
                }
                file22.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file23("Flower1.txt");
                while(getline(file23,line))
                {
                    cout << line << endl;
                }
                file23.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
            }
        case 9:
            cout << "1. Bhai bhai nursery\n2. Maa er doa nursery\n3. Gulshan Nursery\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file24("Flower10.txt");
                while(getline(file24,line))
                {
                    cout << line << endl;
                }
                file24.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 130*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 100*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 200*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 450*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Sunflower\t" << qty1 << "\t" << price1 << endl;
                            cout << "Rose\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Lemon\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Mango\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file25("Flower1.txt");
                while(getline(file25,line))
                {
                    cout << line << endl;
                }
                file25.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file26("Flower3.txt");
                while(getline(file26,line))
                {
                    cout << line << endl;
                }
                file26.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 90*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 150*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 180*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 80*qty4;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Dahlia\t" << qty1 << "\t" << price1 << endl;
                        cout << "Daisy\t\t" << qty2 << "\t" << price2 << endl;
                        cout << "Sunflower\t" << qty3 << "\t" << price3 << endl;
                        cout << "Orchid\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }

            }
            case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
            }
        case 10:
            cout << "1. Ecopark nursery\n2. Chaya Nursery\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file27("Flower8.txt");
                while(getline(file27,line))
                {
                    cout << line << endl;
                }
                file27.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 80*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 120*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 50*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 150*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Champa\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Rose\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Mery Gold\t" << qty3 << "\t" << price3 << endl;
                            cout << "Lemon\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file28("Flower1.txt");
                while(getline(file28,line))
                {
                    cout << line << endl;
                }
                file28.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file29("Flower1.txt");
                while(getline(file29,line))
                {
                    cout << line << endl;
                }
                file29.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
            }
        case 11:
            cout << "1. Patabahar\n2. shanti Nursery\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file30("Flower1.txt");
                while(getline(file30,line))
                {
                    cout << line << endl;
                }
                file30.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file32("Flower1.txt");
                while(getline(file32,line))
                {
                    cout << line << endl;
                }
                file32.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file31("Flower1.txt");
                while(getline(file31,line))
                {
                    cout << line << endl;
                }
                file31.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
            }
        case 12:
            cout << "1. Nature's pots and plant";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file33("Flower10.txt");
                while(getline(file33,line))
                {
                    cout << line << endl;
                }
                file33.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 130*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 100*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 200*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 450*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Sunflower\t" << qty1 << "\t" << price1 << endl;
                            cout << "Rose\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Lemon\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Mango\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file34("Flower1.txt");
                while(getline(file34,line))
                {
                    cout << line << endl;
                }
                file34.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file35("Flower1.txt");
                while(getline(file35,line))
                {
                    cout << line << endl;
                }
                file35.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
            }
        case 13:
            cout << "1. Shobujayon\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file36("Flower10.txt");
                while(getline(file36,line))
                {
                    cout << line << endl;
                }
                file36.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 130*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 100*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 200*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 450*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Sunflower\t" << qty1 << "\t" << price1 << endl;
                            cout << "Rose\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Lemon\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Mango\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file37("Flower1.txt");
                while(getline(file37,line))
                {
                    cout << line << endl;
                }
                file37.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file38("Flower1.txt");
                while(getline(file38,line))
                {
                    cout << line << endl;
                }
                file38.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
            }
        case 14:
            cout << "1. Ful bilash\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file39("Flower3.txt");
                while(getline(file39,line))
                {
                    cout << line << endl;
                }
                file39.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                if(choice=='y')
                {
                    cout << "Please choose your plants: ";
                    cin >> plant;
                    switch(plant)
                    {
                    case 1:
                        cout << "Enter quantity: ";
                        cin >> qty1;
                        price1 = 90*qty1;
                        break;
                    case 2:
                        cout << "Enter quantity: ";
                        cin >> qty2;
                        price2 = 150*qty2;
                        break;
                    case 3:
                        cout << "Enter quantity: ";
                        cin >> qty3;
                        price3 = 180*qty3;
                        break;
                    case 4:
                        cout << "Enter quantity: ";
                        cin >> qty4;
                        price4 = 80*qty4;
                        break;
                    }
                    cout << "\nDo you want to add another plant?(y/n)";
                    cin >> choice;
                    if(choice=='y')
                    {
                        continue;
                    }
                    else
                    {
                        system("cls");
                        int total = price1+price2+price3+price4;
                        cout << "\tYou have ordered:\n";
                        cout << "\nName\t\tQTY\tPrice\n";
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Dahlia\t" << qty1 << "\t" << price1 << endl;
                        cout << "Daisy\t\t" << qty2 << "\t" << price2 << endl;
                        cout << "Sunflower\t" << qty3 << "\t" << price3 << endl;
                        cout << "Orchid\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
                        cout << "\n\nPlease enter your pickup address: ";
                        cin >> pickup;
                        cout << "\nThanks for order...\nYou will get your product within 3 days...";
                        exit(1);
                    }
                }
                else
                {
                    exit(1);
                }
            }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file40("Flower1.txt");
                while(getline(file40,line))
                {
                    cout << line << endl;
                }
                file40.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file41("Flower1.txt");
                while(getline(file41,line))
                {
                    cout << line << endl;
                }
                file41.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
            }
        case 15:
            cout << "1. Sobuj chaya\n";
            cout << "\nPress 4 to go back to previous\n";
            cin >> i;
            system("cls");
            switch(i)
            {
            case 1:
            {
                cout << "Available Plants:\n";
                ifstream file42("Flower8.txt");
                while(getline(file42,line))
                {
                    cout << line << endl;
                }
                file42.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 80*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 120*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 50*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 150*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Champa\t" << qty1 << "\t" << price1 << endl;
                            cout << "Rose\t\t" << qty2 << "\t" << price2 << endl;
                            cout << "Mery Gold\t" << qty3 << "\t" << price3 << endl;
                            cout << "Lemon\t\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 2:
            {
                cout << "Available Plants:\n";
                ifstream file43("Flower1.txt");
                while(getline(file43,line))
                {
                    cout << line << endl;
                }
                file43.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }
            }
            case 3:
            {
                cout << "Available Plants:\n";
                ifstream file44("Flower1.txt");
                while(getline(file44,line))
                {
                    cout << line << endl;
                }
                file44.close();
                cout << "\nDo you want to buy?(y/n): ";
                cin >> choice;
                while(1)
                {
                    if(choice=='y')
                    {
                        cout << "Please choose your plants: ";
                        cin >> plant;
                        switch(plant)
                        {
                        case 1:
                            cout << "Enter quantity: ";
                            cin >> qty1;
                            price1 = 120*qty1;
                            break;
                        case 2:
                            cout << "Enter quantity: ";
                            cin >> qty2;
                            price2 = 60*qty2;
                            break;
                        case 3:
                            cout << "Enter quantity: ";
                            cin >> qty3;
                            price3 = 85*qty3;
                            break;
                        case 4:
                            cout << "Enter quantity: ";
                            cin >> qty4;
                            price4 = 90*qty4;
                            break;
                        }
                        cout << "\nDo you want to add another plant?(y/n)";
                        cin >> choice;
                        if(choice=='y')
                        {
                            continue;
                        }
                        else
                        {
                            system("cls");
                            int total = price1+price2+price3+price4;
                            cout << "\tYou have ordered:\n";
                            cout << "\nName\t\tQTY\tPrice\n";
                            cout << "____________________________________________";
                            cout << "\n";
                            cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                            cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                            cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                            cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                            cout << "____________________________________________"<< endl;
                            cout << "Total:\t\t\t" << total << endl;
                            cout << "\n\nPlease enter your pickup address: ";
                            cin >> pickup;
                            cout << "\nThanks for order...\nYou will get your product within 3 days...";
                            exit(1);
                        }
                    }
                    else
                    {
                        exit(1);
                    }
                }

            }
            case 4:
            n=location();
            printf("%d", n);
            system("cls");
            cout << "Your nearby nurseries are:\n\n";
            nursery(n);
            break;
            break;
            }

        }
    }
}

int main()
{
    char name[20];
    long long num;
    int n;
    printf("\n");
    printf("-------------------------------Green Peace----------------------------------\n");
    printf("\n\n");
    printf("\t\t\t1. Name: ");
    fgets(name, 20, stdin);
label:
    printf("\t\t\t2. Contact no.: (+880)");
    scanf("%lld",&num);
    if(count_digit(num)!=10)
    {
        cout << "\t\t\tPlease enter 10 digits!!!" << endl;
        goto label;
    }
    cout << "\n\n\t\t\tAvailable locations:\n\n";
    n=location();
    printf("%d", n);
    system("cls");
    cout << "Your nearby nurseries are:\n\n";
    nursery(n);
}
