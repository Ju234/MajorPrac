#include "drink.h"
#include "shop.h"
#include "shoppinglist.h"
#include "food.h"
#include "vegetable.h"
#include "fruit.h"
#include <iostream>

using namespace std;

int choice;
int temp = 0;
int step = 0;
int decision;
int total = 0;
int track = 0;
int numbers = 0;

int selection ()
{
	cout << "\nYou entered : ";
	cin >> choice;
	return choice;
}

int main()
{
	shop* item;
	shoppinglist lists;
	drink *Coke = new drink("Coke",2);
	drink *Sprite = new drink("Sprite",3);
	drink *Pepsi = new drink("Pepsi",2);
	drink *Monster = new drink("Monster",5);
	food  *Chicken = new food("Chicken",4);
	food  *Beef = new food("Beef",10);
	food  *Lamb = new food("Lamb",8);
	food  *Pork = new food("Pork",5); 
	vegetable *Spinach = new vegetable("Spinach",4);
	vegetable *Onion = new vegetable("Onion",3);
    vegetable *Tomato = new vegetable("Tomato",5);
    vegetable *Potato = new vegetable("Potato",2);
    fruit *Cherry = new fruit("Cherry",5);
    fruit *Apple = new fruit("Apple",3);
    fruit *Banana = new fruit("Banana",7);
    fruit *Peach = new fruit("Peach",4);

	while(temp == 0)
	{
		cout << endl;
		cout << "\x1B[93m" << "               \n\t\t   WELCOME TO EXPRESS MARKET" <<"\x1B[0m"<< endl;
		cout << "\x1B[93m" << "           HAVE A GOOD TIME AND ENJOY SHOPPING WITH US" << "\x1B[0m" << endl;cout << endl;

		if(step == 0)
		{
			cout << "      What type of item you like to buy ? " << endl;cout << endl;
			cout << "      1.Drink \t\n      2.Meat \t\n      3.Vegetable \t\n      4.Fruit" << endl;///"a. b. c. d."
			selection();

			switch(choice)
			{
				case 1:   //CHOOSING DRINK
				step = 1;
				break;

				case 2: //CHOOSING MEAT
				step = 2;
				break;

				case 3: //CHOOSING VEGETABLE
				step = 3;
				break;

				case 4: //CHOOSING FRUIT
				step = 4;
				break;
			}

            //DRINK SECTION
            if(step == 1)
            {
            	cout << "      1.Coke\n      2.Sprite\n      3.Pepsi\n      4.Monster" << endl;
            	selection();
            	switch(choice)
            	{
            		case 1: //CHOOSE COKE
            		item = Coke;
            		break;

            		case 2: //CHOOSE SPRITE
            		item = Sprite;
            		break;

            		case 3: //CHOOSE PEPSI
            		item = Pepsi;
            		break;

            		case 4: //CHOOSE Monster
            		item = Monster;
            		break;


            	}

            	if(item->countName == 0)
            	{
		    		item->input_order(track);
		    		track++;
		    		lists.addItem(item);
		    		item->countName++;
		    	}

		    	if(choice != 1 & choice !=2 & choice !=3 & choice != 4)
		    	{
		    		cout << " Sorry, that is not available, Choose again " << endl;
		    		choice = 0;
		    	}

		    	item->askingFunction();
		    	item->input_number();
		    	lists.addNumber(item->getnums(),item);
		    	step = 0;

            }


            //MEAT SECTION
            if(step == 2)
            {
            	cout << "      1.Beef\n       2.Pork\n       3.Chicken\n       4.Lamb" << endl;
            	selection();
            	switch(choice)
            	{
            		case 1: //CHOOSE COKE
            		item = Beef;
            		break;

            		case 2: //CHOOSE SPRITE
            		item = Pork;
            		break;

            		case 3: //CHOOSE PEPSI
            		item = Chicken;
            		break;

            		case 4: //CHOOSE Monster
            		item = Lamb;
            		break;

            	}

            	if(item->countName == 0)
            	{
		    		item->input_order(track);
		    		track++;
		    		lists.addItem(item);
		    		item->countName++;
		    	}

		    	item->askingFunction();
		    	item->input_number();
		    	lists.addNumber(item->getnums(),item);
		    	step = 9;
            }

            //VEGETABLE SECTION
            if(step == 3)
            {
            	cout << "      1.Spinach\n       2.Onion\n       3.Tomato\n       4.Potato" << endl;
            	selection();
            	switch(choice)
            	{
            		case 1: //CHOOSE COKE
            		item = Spinach;
            		break;

            		case 2: //CHOOSE SPRITE
            		item = Onion;
            		break;

            		case 3: //CHOOSE PEPSI
            		item = Tomato;
            		break;

            		case 4: //CHOOSE Monster
            		item = Potato;
            		break;
            	}

            	if(item->countName == 0)
            	{
		    		item->input_order(track);
		    		track++;
		    		lists.addItem(item);
		    		item->countName++;
		    	}

		    	item->askingFunction();
		    	item->input_number();
		    	lists.addNumber(item->getnums(),item);
		    	step = 9;
            }

            //FRUIT SECTION
            if(step == 4)
            {
            	cout << "      1.Cherry\n       2.Apple\n       3.Banana\n       4.Peach" << endl;
            	selection();
            	switch(choice)
            	{
            		case 1: //CHOOSE COKE
            		item = Cherry;
            		break;

            		case 2: //CHOOSE SPRITE
            		item = Apple;
            		break;

            		case 3: //CHOOSE PEPSI
            		item = Banana;
            		break;

            		case 4: //CHOOSE Monster
            		item = Peach;
            		break;


            	}

            	if(item->countName == 0)
            	{
		    		item->input_order(track);
		    		track++;
		    		lists.addItem(item);
		    		item->countName++;
		    	}

		    	item->askingFunction();
		    	item->input_number();
		    	lists.addNumber(item->getnums(),item);
		    	step = 9;
            }

            

		    if(choice != 1 & choice !=2 & choice !=3 & choice != 4)
		    {
		    	cout << "\x1B[39m" << "Wrong selection, please select again!" << "\x1B[0m" << endl;
		    }
			
		}

		if(step == 9)
		{
			cout << "1.Go back 2.Check out" << endl;
			selection();
			if(choice == 1){
				step = 0;
				total+= item->sum();
			}

			if(choice == 2)
			{
				total+= item->sum();
				cout << "Description: " << endl;
				cout << "Number Item" << endl;;
				lists.printList();
				cout << "Total: " << total <<  "$" << endl;
				temp = 1;
			}
		}	
	}

	delete[] Coke;
	delete[] Sprite;
	delete[] Pepsi;
	delete[] Monster;
	delete[] Beef;
	delete[] Pork;
	delete[] Chicken;
	delete[] Lamb;
	delete[] Spinach;
	delete[] Onion;
	delete[] Tomato;
	delete[] Potato;
	delete[] Cherry;
	delete[] Apple;
	delete[] Banana;
	delete[] Peach;

}
