#include<iostream>
#include "recipe.h"
#include <cstdlib>

using namespace std;

void recipe::sadzaRecipe()
        {
            system("cls");
            cout<<"\n\t\t\t**SADZA RECIPE**\n";
            cout<<"\t\t\t__________________\n";
        }
void recipe::riceRecipe()
        {
             system("cls");
            cout<<"\n\t\t\t**Rice RECIPE**\n";
            cout<<"\t\t\t__________________\n";
        }
    void recipe::beefRecipe()
        {

            int choice;
            cout<<"\n\t\t\t**BEEF RECIPE**\n";
            cout<<"\t\t\t__________________\n";
            cout<<"\t\t choose the type of beef you want to cook from the Menu bellow\n";
            beefMenu();
            cin>>choice;

        }
   void recipe::macaroniRecipe()
        {
             system("cls");
            cout<<"\n\t\t\t**MACARONI RECIPE**\n";
            cout<<"\t\t\t__________________\n";
        }
      void  recipe::derereRecipe()
        {
             system("cls");
            cout<<"\n\t\t\t**DERERE RECIPE**\n";
            cout<<"\t\t\t__________________\n";
        }
     void   recipe::beansRecipe()
        {
             system("cls");
            cout<<"\n\t\t\t**BEANS RECIPE**\n";
            cout<<"\t\t\t__________________\n";
        }
void recipe::beefMenu()
{
    cout<<"\t\t\t1. Beef stew\n";
    cout<<"\t\t\t2. Roasted Beef\n";
    cout<<"\t\t\t3. Beef steak\n";
    cout<<"\t\t\t4. Nuckle bone\n";
    cout<<"\t\t\t5. Beef head\n\t\t\t:";
}
