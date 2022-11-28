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
    printf("16. Lalbagh\t17. Mirpur\t18. Mohammadpur\t19. Motijheel\t20. Pallabi\n");
    printf("21. Paltan\t22. Ramna\t23. Rampura\t24. Shahbagh\t25. Shyampur\n");
    printf("26. Tejgaon\t27. Turag\t28. Uttarkhan\t29. Vatara\t30. Wari\n");
    printf("Choose your address: ");
    scanf("%d",&n);
    return n;
}

int count_digit(long long number) {
   int count = 0;
   while(number != 0) {
      number = number / 10;
      count++;
   }
   return count;
}

void nursery(int n)
{
    int i,plant,qty1=0,qty2=0,qty3=0,qty4=0;
    int price1=0,price2=0,price3=0,price4=0;
    int ch = n;
    char choice;
    char str[50];
    string line;
    switch(ch)
    {
    case 1:
        cout << "1. Sobuj Bangla Nersery\n" << "2. Bangladesh agricultural nursery\n" << "3. Heaven tree, plants and agro\n";
        cin >> i;
        system("cls");
        switch(i)
        {
        case 1:
            cout << "Available Plants:\n";
            ifstream file("Flower1.txt");
            while(getline(file,line))
            {
                cout << line << endl;
            }
            file.close();
            cout << "Do you want to buy?(y/n): ";
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
                    cout << "Do you want to add another plant?(y/n)";
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
                        cout << "____________________________________________";
                        cout << "\n";
                        cout << "Rose\t\t" << qty1 << "\t" << price1 << endl;
                        cout << "Mary Gold\t" << qty2 << "\t" << price2 << endl;
                        cout << "Tulip\t\t" << qty3 << "\t" << price3 << endl;
                        cout << "Sunflower\t" << qty4 << "\t" << price4 << endl;
                        cout << "____________________________________________"<< endl;
                        cout << "Total:\t\t\t" << total << endl;
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
    case 2:
        cout << "1. Banglar nursery\n2. Ador nursery\n";
        break;
    case 3:
        cout << "1. Shobujayon nursery, pots and plants";
        break;
    case 4:
        cout << "1. Green Garden";
        break;
    case 5:
        cout << "1. krishibid nursery";
        break;
    case 6:
        cout << "1. Green palli nursery\n";
        break;
    case 7:
        cout << "1. Green Garden\n";
        break;
    case 8:
        cout << "1. Plant hub\n";
        break;
    case 9:
        cout << "1. Bhai bhai nursery\n2. Maa er doa nursery\n3. Gulshan Nursery\n";
        break;
    case 10:
        cout << "1. Ecopark nursery\n2. Chaya Nursery\n";
        break;
    case 11:
        cout << "1. Patabahar\n2. shanti Nursery\n";
        break;
    case 12:
        cout << "1. Nature's pots and plant";
        break;
    case 13:
        cout << "1. Shobujayon\n";
        break;
    case 14:
        cout << "1. Ful bilash\n";
        break;
    case 15:
        cout << "1. Sobuj chaya\n";
        break;
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
    printf("\t\t\t2. Contact no.: ");
    scanf("%lld",&num);
    if(count_digit(num)!=11)
    {
        cout << "\t\t\tPlease enter 11 digits!!!" << endl;
        goto label;
    }
    n=location();
    printf("%d", n);
    system("cls");
    cout << "Your nearby nurseries are:\n";
    nursery(n);
}
