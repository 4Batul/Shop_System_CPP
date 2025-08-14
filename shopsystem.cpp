#include <iostream>
#include <vector>
#include <string.h>
#include <iomanip>
#include <algorithm>
using namespace std;
// refer to shop.txt for project details
void enter();
void menu();
// void womens();
void womens();
void WomensClothes();
void WomensPurses();
void WomenShoes();
// void mens();
void mens();
void MensClothes();
void MensShoes();
void cart();

int total;
int choice;



int getValidatedChoice(int min, int max) {
    while (true) {
        cin >> choice;
        if (cin.fail() || choice < min || choice > max) {
            cin.clear(); // clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number between " << min << " and " << max << ": ";
        } else {
            return choice;
        }
    }
}

struct Item
{
    string name;
    int price;
};

vector<Item> Cart;

int main()
{
    enter();
    return 0;
}

void enter()
{
bool running = true;

while (running){
	
    cout << "\nWelcome to SHOPALL!!" << endl;
        cout << "1. Shop\n2. View Cart\n3. Exit\nEnter:\n ";
       
        
   choice = getValidatedChoice(1, 3);
   
    switch (choice)
    {
    case 1:
        menu();
        break;
    case 2:
        cart();
        break;
    case 3:
        running = false;
        cart();
        break;
        
    default:
    
        cout << "Invalid input! Please try again.\n";
        break;
    }   
    
}
}


void menu()
{
    
    while(true){
    	
    cout << "\nWhat do you want to shop? \n 1. Womens \n2. Mens \n3. Back" << endl;
    choice = getValidatedChoice(1, 3);
    switch (choice)
    {
    case 1:
        womens();
        break;
    case 2:
        mens();
        break;
    case 3:
        
        return;
    default:
        cout << "\nPLease Enter the correct digits! " << endl;
        
        break;
    }
	}
}

void womens()
{
	while(true){
		 cout << "1. Clothes \n2. Purses \n3. Shoes \n4. Back" << endl;
    choice = getValidatedChoice(1, 4);
    switch (choice)
    {
    case 1:
        WomensClothes();
        break;
    case 2:
        WomensPurses();
        break;
    case 3:
        WomenShoes();
        break;
    case 4:
        return;
    default:
        cout << "\nPLease Enter the correct digits! " << endl;
        
        break;
    }
	}
   
}

void WomensClothes()
{
    struct Clothesitems
    {
        string name;
        int price;
    };

    Clothesitems item1;
    item1.name = "Shalwar Kameez";
    item1.price = 50;

    Clothesitems item2;
    item2.name = "Pant Shirt";
    item2.price = 100;

    Clothesitems item3;
    item3.name = "Frocks";
    item3.price = 150;

    Clothesitems item4;
    item4.name = "Saari";
    item4.price = 200;

    Clothesitems item5;
    item5.name = "Lehenga";
    item5.price = 300;

    while (true)
    {

        cout << "1. " << item1.name << "      " << item1.price << endl;
        cout << "2. " << item2.name << "      " << item2.price << endl;
        cout << "3. " << item3.name << "      " << item3.price << endl;
        cout << "4. " << item4.name << "      " << item4.price << endl;
        cout << "5. " << item5.name << "      " << item5.price << endl;
        cout << "6. " << "Back" << endl;
		choice= getValidatedChoice(1, 6);
		
        switch (choice)
        {
        case 1:
            total = total + item1.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Shalwar Kameez", 50});
            break;
        case 2:
            total = total + item2.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Pant Shirt", 100});
            break;
        case 3:
            total = total + item3.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Frocks", 150});

            break;
        case 4:
            total = total + item4.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Saari", 200});
            break;
        case 5:
            total = total + item5.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Lehenga", 300});
            break;
        case 6:
            return;
        
        default:
        	 cout << "\nPLease Enter the correct digits! " << endl;
            break;
        }
    }
}

void WomensPurses()
{
    struct Pursesitems
    {
        string name;
        int price;
    };

    Pursesitems item1;
    item1.name = "Handbags";
    item1.price = 100;

    Pursesitems item2;
    item2.name = "Carry on";
    item2.price = 100;

    Pursesitems item3;
    item3.name = "Shoulder Bag";
    item3.price = 150;

    Pursesitems item4;
    item4.name = "Leather Bag";
    item4.price = 200;

    Pursesitems item5;
    item5.name = "Pouch";
    item5.price = 300;

    while (true)
    {

        cout << "1. " << item1.name << setw(20) << item1.price << endl;
        cout << "2. " << item2.name <<setw(20)  << item2.price << endl;
        cout << "3. " << item3.name << setw(20) << item3.price << endl;
        cout << "4. " << item4.name <<setw(20) << item4.price << endl;
        cout << "5. " << item5.name << setw(20) << item5.price << endl;
        cout << "6. " << "== Back ==      " << endl;
      
		choice = getValidatedChoice(1, 6);
        switch (choice)
        {
        case 1:
            total = total + item1.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Hand Bag", 100});
            break;
        case 2:
            total = total + item2.price;
            cout << "\n Total: " << total << "\n";
             Cart.push_back({"Carry On", 100});
            break;
        case 3:
            total = total + item3.price;
            cout << "\n Total: " << total << "\n";
             Cart.push_back({"Shoulder Bag", 150});
            break;
        case 4:
            total = total + item4.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Leather Bag", 200});
            break;
        case 5:
            total = total + item5.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Pouch", 300});
            break;
        case 6:
            return;

        default:
        cout << "Invalid input! Please try again.\n";
         break;
        }
    }
}

void WomenShoes()
{
    struct Shoesitems
    {
        string name;
        int price;
    };

    Shoesitems item1;
    item1.name = "Heels / Pumps";
    item1.price = 100;

    Shoesitems item2;
    item2.name = "Flats";
    item2.price = 100;

    Shoesitems item3;
    item3.name = "Khusse";
    item3.price = 150;

    Shoesitems item4;
    item4.name = "Sandals";
    item4.price = 200;

    Shoesitems item5;
    item5.name = "Sneakers / Athletic Shoes";
    item5.price = 300;

    while (true)
    {
        cout << "1. " << item1.name << setw(20)  << item1.price << endl;
        cout << "2. " << item2.name << setw(20)  << item2.price << endl;
        cout << "3. " << item3.name << setw(20)  << item3.price << endl;
        cout << "4. " << item4.name << setw(20)  << item4.price << endl;
        cout << "5. " << item5.name << setw(20)  << item5.price << endl;
        cout << "6. " << "== Back ==      " << endl;
choice = getValidatedChoice(1, 6);
        switch (choice)
        {
        case 1:
            total = total + item1.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Heels / Pumps", 100});
            break;
        case 2:
            total = total + item2.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Flats", 100});
            break;
        case 3:
            total = total + item3.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Khusse", 150});
            break;
        case 4:
            total = total + item4.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Sandals", 200});
            break;
        case 5:
            total = total + item4.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Sneakers / Athletic Shoes", 300});
            break;
        case 6:
           return;

        
        default:
            break;
        }
    }
}

void mens()
{

    cout << "1. Clothes \n2. Shoes \n3. Back" << endl;
    choice= getValidatedChoice(1, 3);
    switch (choice)
    {
    case 1:
        MensClothes();
        break;
    case 2:
        MensShoes();
        break;
    case 3:
        return;
    default:
        cout << "\nPLease Enter the correct digits! " << endl;
        void mens();
        break;
    }
}

void MensClothes()
{
	
    system("CLS");
    struct MClothesitems
    {
        string name;
        int price;
    };

    MClothesitems item1;
    item1.name = "Shalwar Kameez";
    item1.price = 100;

    MClothesitems item2;
    item2.name = "Pant Shirt";
    item2.price = 100;

    MClothesitems item3;
    item3.name = "Three Piece Suit";
    item3.price = 150;

    MClothesitems item4;
    item4.name = "Two Piece Suit";
    item4.price = 200;

    MClothesitems item5;
    item5.name = "Blazers / Sport Coats";
    item5.price = 300;

    while (true)
    {

        cout << "1. " << item1.name << setw(20) << item1.price << endl;
        cout << "2. " << item2.name << setw(20) << item2.price << endl;
        cout << "3. " << item3.name << setw(20) << item3.price << endl;
        cout << "4. " << item4.name << setw(20) << item4.price << endl;
        cout << "5. " << item5.name << setw(20) << item5.price << endl;
        cout << "6. " << "== Back ==      " << endl;
choice = getValidatedChoice(1, 6);
        switch (choice)
        {
        case 1:
            total = total + item1.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Shalwar Kameez", 100});
            break;
        case 2:
            total = total + item2.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Pant Shirts", 100});
            break;
        case 3:
            total = total + item3.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Three Piece Suit", 150});
            break;
        case 4:
            total = total + item4.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Two Piece Suits", 200});
            break;
         case 5:
            total = total + item5.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Blazers / Sport Coats", 300});
            break;
        case 6:
           return;

       default:
        cout << "Invalid input! Please try again.\n";
         break;
        }
    }
}

void MensShoes()
{

    struct Shoesitems
    {
        string name;
        int price;
    };

    Shoesitems item1;
    item1.name = "Balochi Mardana Chappal";
    item1.price = 300;

    Shoesitems item2;
    item2.name = "Punjabi Mardana Khussa";
    item2.price = 100;

    Shoesitems item3;
    item3.name = "Pishawri Mardana Chappal";
    item3.price = 150;

    Shoesitems item4;
    item4.name = "Sindhi Mardana Chappal";
    item4.price = 200;

    Shoesitems item5;
    item5.name = "Gilgiti Mardana Sandal";
    item5.price = 200;

    while (true)
    {

        cout << "1. " << item1.name << setw(20) << item1.price << endl;
        cout << "2. " << item2.name << setw(20) << item2.price << endl;
        cout << "3. " << item3.name << setw(20) << item3.price << endl;
        cout << "4. " << item4.name << setw(20) << item4.price << endl;
        cout << "5. " << item5.name << setw(20) << item5.price << endl;
        cout << "6. " << "== Back ==    " << endl;
        choice= getValidatedChoice(1, 6);

        switch (choice)
        {
        case 1:
            total = total + item1.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Balochi Mardana Chappal", 300});
            break;
        case 2:
            total = total + item2.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Punjabi Mardana Khussa", 100});
            break;
        case 3:
            total = total + item3.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Pishawri Mardana Chappal", 150});
            break;
        case 4:
            total = total + item4.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Sindhi Mardana Chappal", 200});
            break;
         case 5:
            total = total + item5.price;
            cout << "\n Total: " << total << "\n";
            Cart.push_back({"Gilgiti Mardana Sandal", 200});
            break;
        case 6:
            return;

            
        default:
        cout << "Invalid input! Please try again.\n";
         break;
        }
    }
}

void cart()
{
	string reshop="";
    system("CLS");
    cout << "-------- Receipt --------" << endl;
    cout << left << setw(20) << "Item"
         << right << setw(10) << "Price"
         << setw(12) << "Total" << endl;

    cout << "----------------------------------------------" << endl;

    for (const auto &item : Cart)
    {

        cout << left << setw(20) << item.name
             << setw(10) << fixed << setprecision(2) << item.price
             << endl;
    }
    cout << "----------------------------------------------" << endl;
    cout << left << setw(30) << "Grand Total:"
         << right << setw(12) << fixed << setprecision(2) << total << endl;
    cout << "---------------- Thank You! ----------------" << endl;
	
	cout<<"\n\n";
	cout<<"Do you want to Shop Again? (Yes/No)";
	cin>>reshop;
	transform(reshop.begin(), reshop.end(), reshop.begin(), ::tolower);
	
    if (reshop.empty()) {
        cout << "Please type Yes or No:  " << endl;
        	cin>>reshop;
    } 
	 else if(reshop=="yes") {
    	
    	system("CLS");
    	Cart.clear();
    	total=0;
        cout << "Sure. Enjoy your shopping!" << endl;
        return;
		
    }else{
    	cout << "---------------- Thank You! ----------------" << endl;
    	cout << "--------- Come Again Soon! ---------" << endl;
    	exit(0);
	}
s
}


