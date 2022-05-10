//Game 2 Blackjack 
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    cout<<"Welcome to Mitchell's blackjack program!"<<endl;

    int player_card1, player_card2;
    int dealer_card1, dealer_card2;
    string choice;

    player_card1 = rand()%10+3;
    player_card2 = rand()%10+3;
    dealer_card1 = rand()%10+3;
    dealer_card2 = rand()%10+3;

    cout<<"You get a "<<player_card1<<" and a "<<player_card2<<endl;
    int player_total = (player_card1+player_card2);
    cout<<"Your total is "<<player_total<<endl;
    cout<<endl;

    cout<<"The dealer has a "<<dealer_card1<<" showing, and a hidden card"<<endl;
    int dealer_total = (dealer_card1+dealer_card2);
    cout<<"Dealer's total is hidden, too."<<endl;
    cout<<endl;

    do
    {
        cout<<"Would you like to \"hit\" or \"stay\"?"<<endl;
        cin>>choice;
        if(!choice.compare("hit"))
        {
            int new_card = rand()%10+3;
            cout<<"You drew a "<<new_card<<endl;
            player_total += new_card;
            cout<<"Your total is "<<player_total<<endl;
        }
    }while(player_total<=21 && (choice.compare("stay")));
    if(player_total<=21)
    {
        cout<<endl;
        cout<<"Okay, dealer's turn."<<endl;
        cout<<"Dealer's hidden card was a "<<dealer_card2<<endl;
        cout<<"Dealer's total was "<<dealer_total<<endl;

        do
        {
            if(dealer_total<17)
            {
                choice = "hit";
                cout<<"Dealer chooses to hit."<<endl;
                int dealer_new_card = rand()%10+3;
                cout<<"Dealer draws a "<<dealer_new_card<<endl;
                dealer_total += dealer_new_card;
                cout<<"Dealer's total is "<<dealer_total<<endl;
            }
            else
            {
                choice = "stay";
                cout<<"Dealer stays.\n"<<endl;
            }
        }while(dealer_total<=21 && (choice.compare("stay")));
    }
    cout<<"Dealer's total is "<<dealer_total<<endl;
    cout<<"Your total is "<<player_total<<endl;

    if(player_total<=21)
    {
        if(dealer_total<=21)
        {
            if(player_total>dealer_total)
            {
                cout<<"You Win!"<<endl;
            }
            else if(dealer_total<player_total)
            {
                cout<<"Dealer Win!"<<endl;
            }
            else if(dealer_total==player_total)
            {
                cout<<"Dealer Win!"<<endl;
            }
        }
        else if(dealer_total>21)
        {
            cout<<"You Win!"<<endl;
        }
    }
    else
    {
        cout<<"Dealer Win!"<<endl;
    }
    return 0;
}