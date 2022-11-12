#include <iostream>
#include <fstream>
#include <string>
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

void nursery(int n)
{
    int i;
    int ch = n;
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
    printf("\t\t\t2. Contact no.: ");
    scanf("%lld",&num);
    n=location();
    printf("%d", n);
    system("cls");
    cout << "Your nearby nurseries are:\n";
    nursery(n);
}
