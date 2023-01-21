#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    char pizza1[100]="Cheese brust pizza", pizza2[100]="Chicken sausages pizza", pizza3[100]="panner pizza", pizza4[100]="Corn & Onion pizza",
      pizza5[100]="Double chicken pizza";
    char bur1[100]="Crispy chicken burger", bur2[100]="Potato corn burger", bur3[100]="Veg cheese burger", bur4[100]="Double patty chicken burger";
    char roll1[100]="Veg panner roll", roll2[100]="Chicken bahubali rool", roll3[100]="Egg roll", roll4[100]="Special mixed roll";
    char sand1[100]="Club sandwich", sand2[100]="cryspy chicken sandwich", sand3[100]="Veg sandwich";
    char bir1[100]="Veg biriyani", bir2[100]="Chicken biriyani", bir3[100]="Egg biriyani", bir4[100]="Mutton biriyani";

    char name[50],con,cn;

    string temp, ar,ld,ds, tran,upiid;

    int menu=0, flavour, size, quantity, total,pi,pm,pop,cvv,expm,expy;

    long long int mob,cnu;

    system("cls");
    cout<<"\n\t\t\t\t -----------------------------";
    cout<<"\n\t\t\t\t |  FOOD GALLERY Restaurant  |";
    cout<<"\n\t\t\t\t -----------------------------";
    cout<<endl<<"\n Please enter your name :";
    // cin.ignore();
    cin.getline(name, sizeof(name));
    cout<<"\n Hello "<<name<<"\n\t\t\t Welcome to FOOD GALLERY Restaurant :)";
    more:
    cout<<"\n\n What would you like to order :)\n";
    
    turn:
    cout<<"\n\n\t\t\t-----MENU-----";
    cout<<"\n 1. Pizza\n";
    cout<<" 2. Burger\n";
    cout<<" 3. Roll\n";
    cout<<" 4. Sandwich\n";
    cout<<" 5. Biriyani\n";

    cout<<"\n\n  Please enter your Item :";
    cin>>menu;

    if (menu==1)
    {
        cout<<"\n 1."<<pizza1;
        cout<<"\n 2."<<pizza2;
        cout<<"\n 3."<<pizza3;
        cout<<"\n 4."<<pizza4;
        cout<<"\n 5."<<pizza5;

        cout<<"\n\n Which flavour want to order :";
        cin>>flavour;

        if (flavour>=1 && flavour<=5)
        {
            cout<<"\n 1. Small Rs.250";
            cout<<"\n 2. Meddium Rs.500";
            cout<<"\n 3. Large Rs.700";

            cout<<"\n Choose size please :";
            cin>>size;

            if (size>=1 && size<=3)
            {
                cout<<"\n Please enter quantity :";
                cin>>quantity;

                switch (size)
                {
                case 1 : menu=250*quantity;
                    break;
                case 2 : menu=500*quantity;
                    break;
                case 3 : menu=700*quantity;
                    break;
                }

                switch (flavour)
                {
                case 1 : 
                    temp=pizza1;
                    break;
                case 2 :
                    temp=pizza2;
                    break;
                case 3 :
                    temp=pizza3;
                break;
                case 4 :
                    temp=pizza4;
                break;
                case 5 :
                    temp=pizza5;
                break;
                default:
                    break;
                }
            } 
        }
    }
    
    else if (menu==2)
    {
        cout<<"\n 1. "<<bur1<<" Rs.180"<<"\n";
		cout<<" 2. "<<bur2<<" Rs.150"<<"\n";
		cout<<" 3. "<<bur3<<" Rs.160"<<"\n";
		cout<<" 4. "<<bur4<<" Rs.180"<<"\n";

		cout<<"\n Please Enter which Burger you would like to have?: ";
		cin>>size;

		if(size>=1 && size<=4)
		{
			cout<<"\n Please Enter Quantity: ";
			cin>>quantity;
			switch(size)
			{
			case 1: menu = 180*quantity;
			break;
			case 2: menu = 150*quantity;
			break;
			case 3: menu = 160*quantity;
			break;
            case 4: menu = 180*quantity;
            break;
            }

            switch(size)
            {
                case 1 :
                    temp=bur1;
                    break; 
                case 2 :
                    temp=bur2;
                    break;
                case 3 :
                    temp=bur3;
                    break;
                case 4 :
                    temp=bur4;
                    break;
                default:
                    break;   
            }
		}
    }
    
    else if (menu==3)
    {
        cout<<"\n 1. "<<roll1<<" Rs.50"<<"\n";
		cout<<" 2. "<<roll2<<" Rs.100"<<"\n";
		cout<<" 3. "<<roll3<<" Rs.60"<<"\n";
		cout<<" 4. "<<roll4<<" Rs.80"<<"\n";

		cout<<"\n Please Enter which Roll you would like to have?: ";
		cin>>size;

		if(size>=1 && size<=4)
		{
			cout<<"\n How much roll do you want : ";
			cin>>quantity;
			switch(size)
			{
			case 1: menu = 50*quantity;
			break;
			case 2: menu = 100*quantity;
			break;
			case 3: menu = 60*quantity;
			break;
            case 4: menu = 80*quantity;
            break;
            }

            switch(size)
            {
                case 1 :
                    temp=roll1;
                    break; 
                case 2 :
                    temp=roll2;
                    break;
                case 3 :
                    temp=roll3;
                    break;
                case 4 :
                    temp=roll4;
                    break;
                default:
                    break;   
            }
		}
    }

    else if (menu==4)
    {
        cout<<"\n 1. "<<sand1<<" Rs.50"<<"\n";
		cout<<" 2. "<<sand2<<" Rs.60"<<"\n";
		cout<<" 3. "<<sand3<<" Rs.40"<<"\n";

		cout<<"\n Please Enter which Sandwich you would like to have?: ";
		cin>>size;

		if(size>=1 && size<=3)
		{
			cout<<"\n Please Enter Quantity: ";
			cin>>quantity;
			switch(size)
			{
			case 1: menu = 50*quantity;
			break;
			case 2: menu = 60*quantity;
			break;
			case 3: menu = 40*quantity;
			break;
            }

            switch(size)
            {
                case 1 :
                    temp=sand1;
                    break; 
                case 2 :
                    temp=sand2;
                    break;
                case 3 :
                    temp=sand3;
                    break;
                default:
                    break;   
            }
		}
    }
    
    else if (menu==5)
    {
        cout<<"\n 1."<<bir1;
        cout<<"\n 2."<<bir2;
        cout<<"\n 3."<<bir3;
        cout<<"\n 4."<<bir4;

        cout<<"\n\n Which Biriyani want to order :";
        cin>>flavour;

        if (flavour>=1 && flavour<=4)
        {
            cout<<"\n 1. Half Rs.120";
            cout<<"\n 2. Full Rs.200";

            cout<<"\n Choose plate size please :";
            cin>>size;

            if (size>=1 && size<=2)
            {
                cout<<"\n Please enter quantity :";
                cin>>quantity;

                switch (size)
                {
                case 1 : menu=120*quantity;
                    break;
                case 2 : menu=200*quantity;
                    break;
                }

                switch (flavour)
                {
                case 1 : 
                    temp=bir1;
                    break;
                case 2 :
                    temp=bir2;
                    break;
                case 3 :
                    temp=bir3;
                break;
                case 4 :
                    temp=bir4;
                break;
                default:
                    break;
                }
            } 
        }
    }  
    else
    {
        cout<<" Invalid Input";
        _sleep(1000);
        system("cls");
        goto turn;
    }
    
    system("cls");
    cout<<"\t\t\t\t--------------\n";
    cout<<"\t\t\t\t| Your order |";
    cout<<"\n\t\t\t\t--------------";
    cout<<"\n\n  "<<quantity<<" "<<temp;
    cout<<"\n  -----------------------------------------------------";
    cout<<"\n  Your total Bill is :"<<menu;
    cout<<"\n  -----------------------------------------------------\n\n";
    
    cout<<" Enter your address :"<<endl;
    cout<<"\n Area :";
    cin.ignore();
    getline(cin, ar);
    cout<<"\n Landmark :";
    getline(cin, ld);
    cout<<"\n Dist :";
    getline(cin, ds);

    pin:
    cout<<"\n Pin (6 digit) :";
    cin>>pi;
    int copi=0;
    while(pi!=0)
    {
        pi=pi/10;
        copi++;
    }
    if(copi!=6)
    {
        cout<<"\n Invalid pin code.";
        goto pin;
    }
    
    mobile:
    cout<<"\n Mobile no. :";
    cin>>mob;
    int comob=0;
    while(mob!=0)
    {
        mob=mob/10;
        comob++;
    }
    if(comob!=10)
    {
        cout<<"\n Invalid Mobile number.";
        goto mobile;
    }
    
    confirm:
    cout<<"\n\n Do you want confirm your order ( y/n ) :";
    cin>>con;

    if(con=='y' || con=='Y')
    {
        system("cls");
        cout<<"\t\t------------------";
        cout<<"\n\t\t  ORDER CONFIRMED";
        cout<<"\n\t\t------------------";
        pay:
        cout<<"\n\n Payment method :";
        cout<<"\n\n 1. Online payment";
        cout<<"\n 2. Cash On Delivery (COD)";
        cout<<"\n\n Choose your option :";
        cin>>pm;

        if (pm==1)
        {
            online:
            system("cls");
            cout<<"\t\t\t\t------------------\n";
            cout<<"\t\t\t\t| Online Payment |";
            cout<<"\n\t\t\t\t------------------";

            cout<<"\n\n 1. UPI";
            cout<<"\n 2. Credit/ Debit Card";
            cout<<"\n\n Please choose payment option :";
            cin>>pop;
            if (pop==1)
            {
                system("cls");
                cout<<"\t\t\t\t------------------\n";
                cout<<"\t\t\t\t| Online Payment |";
                cout<<"\n\t\t\t\t------------------";

                cout<<"\n\n ! UPI payment !";
                cout<<"\n\n Your UPI ID :";
                cin>>upiid;
                cout<<"\n $ Go to your online payment app and make payment\n and copy the transaction id paste bellow :)\n";
                cout<<"\n Transaction ID :";
                cin>>tran;

                system("cls");
                cout<<"\n\t\t\t\t -----------------------------";
                cout<<"\n\t\t\t\t |  FOOD GALLERY Restaurant  |";
                cout<<"\n\t\t\t\t -----------------------------";
                cout<<"\n\n  "<<quantity<<" "<<temp;
                cout<<"\n  -----------------------------------------------------";
                cout<<"\n  Your total Bill is :"<<menu<<"    (Paid via UPI)";
                cout<<"\n  -----------------------------------------------------";
                cout<<"\n  Your order will be delivered in 25-30 minutes";
                cout<<"\n  -----------------------------------------------------";
                cout<<"\n  Thank you for ordering from FOOD GALLERY Restaurant :)";
                cout<<"\n  -----------------------------------------------------\n\n";
                cout<<"  Do you like to order other items ( y/n ) :";
                cin>>cn;
                
                if (cn=='y' || cn=='Y')
                {
                    system("cls");
                    goto more;
                }
                else
                {
                    cout<<"\n Thank you for visiting FOOD GALLERY restaurant :)\n\n";
                }
            }
            else if (pop==2)
            {
                system("cls");
                cout<<"\t\t\t\t------------------\n";
                cout<<"\t\t\t\t| Online Payment |";
                cout<<"\n\t\t\t\t------------------";
                
                cout<<"\n\n ! Credit/ Debit Card !";
                cout<<"\n\n Enter card details :";

                card:
                cout<<"\n\n Card number (16 digit) :";
                cin>>cnu;
                int cocnu=0;
                while(cnu!=0)
                {
                    cnu=cnu/10;
                    cocnu++;
                }
                if(cocnu!=16)
                {
                    cout<<"\n Invalid Card number.";
                    goto card;
                }
                
                cvvvv:
                cout<<"\n\n CVV (3 digit) :";
                cin>>cvv;
                int cocvv=0;
                while(cvv!=0)
                {
                    cvv=cvv/10;
                    cocvv++;
                }
                if(cocvv!=3)
                {
                    cout<<"\n Invalid CVV number.";
                    goto cvvvv;
                }

                cout<<"\n\n Exp. date :";
                expdate:
                cout<<"\n Month :";
                cin>>expm;
                int mm=expm;
                int coexpm=0;
                while(expm!=0)
                {
                    expm=expm/10;
                    coexpm++;
                }
                if(coexpm>2 || mm == 0)
                {
                    cout<<"\n Invalid Exp date.";
                    goto expdate;
                }
                else if (mm > 12)
                {
                    cout<<"\n Invalid Exp date.";
                    goto expdate;
                }
                
                cout<<"\n Year :";
                cin>>expy;
                int yy=expy;
                int coexpy=0;
                while(expy!=0)
                {
                    expy=expy/10;
                    coexpy++;
                }
                if(coexpy!=4)
                {
                    cout<<"\n Invalid Exp date.";
                    goto expdate;
                }
                else if (yy < 2022)
                {
                    cout<<"\n Invalid Exp date.";
                    goto expdate;
                }

                cout<<"\n\n Proccessing";
                for (int i = 0; i < 4; i++)
                {
                    cout<<".";
                    _sleep(1000);
                }

                system("cls");
                cout<<"\n\t\t\t\t -----------------------------";
                cout<<"\n\t\t\t\t |  FOOD GALLERY Restaurant  |";
                cout<<"\n\t\t\t\t -----------------------------";
                cout<<"\n\n  "<<quantity<<" "<<temp;
                cout<<"\n  -----------------------------------------------------";
                cout<<"\n  Your total Bill is :"<<menu<<"    (Paid via ATM Card)";
                cout<<"\n  -----------------------------------------------------";
                cout<<"\n  Your order will be delivered in 25-30 minutes";
                cout<<"\n  -----------------------------------------------------";
                cout<<"\n  Thank you for ordering from FOOD GALLERY Restaurant :)";
                cout<<"\n  -----------------------------------------------------\n\n";

                cout<<"  Do you like to order other items ( y/n ) :";
                cin>>cn;
                
                if (cn=='y' || cn=='Y')
                {
                    system("cls");
                    goto more;
                }
                else
                {
                    cout<<"\n Thank you for visiting FOOD GALLERY restaurant :)\n\n";
                }
            }
            else
            {
                cout<<"\n Invalid input\n";
                _sleep(2000);
                goto online;
                
            }
        }
        else if (pm==2)
        {
            system("cls");
            cout<<"\n\t\t\t\t -----------------------------";
            cout<<"\n\t\t\t\t |  FOOD GALLERY Restaurant  |";
            cout<<"\n\t\t\t\t -----------------------------";
            cout<<"\n\n  "<<quantity<<" "<<temp;
            cout<<"\n  -----------------------------------------------------";
            cout<<"\n  Your total Bill is :"<<menu<<"    (Payment via COD)";
            cout<<"\n  -----------------------------------------------------";
            cout<<"\n  Your order will be delivered in 25-30 minutes";
            cout<<"\n  -----------------------------------------------------";
            cout<<"\n  Thank you for ordering from FOOD GALLERY Restaurant :)";
            cout<<"\n  -----------------------------------------------------\n\n";

            cout<<"\n Do you like to order other items ( y/n ) :";
            cin>>cn;
        
            if (cn=='y' || cn=='Y')
            {
                system("cls");
                goto more;
            }
            else
            {
                cout<<"\n Thank you for visiting FOOD GALLERY restaurant :)\n\n";
            }
        }
        else
        {
            system("cls");
            cout<<"\n Please choose valid payment method "<<endl;
            goto pay;
        }
    }
    else if(con=='n' || con=='N')
    {
        system("cls");
        cout<<"\n Order canceled :(";
        cout<<"\n-------------------\n";
        cout<<"\n Do you like to order other items ( y/n ) :";
        cin>>cn;
        
        if (cn=='y' || cn=='Y')
        {
            system("cls");
            goto more;
        }
        else
        {
            cout<<"\n Thank you for visiting FOOD GALLERY restaurant :)\n\n";
        } 
    }
    else
    {
        cout<<"\n Invaid input ";
        goto confirm;
    }

    return 0;
}
