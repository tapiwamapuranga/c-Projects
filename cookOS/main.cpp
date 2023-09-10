#include <iostream>

#include <ingridients.h>
#include <recipe.h>

#include <string>

using namespace std;

string username=" ",foodItem=" ",option=" ";
recipe Recipe;
ingridients Ingridients;

 void welcomeNote()
 {

     cout<<"\n\n\t\t==||==||==Welcome to the Kitchen Cook Operating System(KCOS)==||==||==\n";
     cout<<"\t\t_______________________________________________________________________\n";
     cout<<"\n\t\tam Chef Malvern T Mapuranga\n";
     cout<<"\t\tWhat\'s your name\?\n\t\t";
     cin>>username;
     cout<<"\t\tYou are welcome "<<username<<" am glad to host you\n";
     cout<<"\t\tWhat do you want to prepare in the kitchen today\?\n\t\t";
     cin>>foodItem;
     cout<<"\t\tThats great "<<username<<endl;
     cout<<"\t\tWhat can I help you with : the Ingredients or the Recipe to cook "<<foodItem<<"\n\t\t";
     cin>>option;
 }
 void recipeSelecion(string fooditem)
 {
if(fooditem=="sadza")
    {
        Recipe.sadzaRecipe();
    }
else if(fooditem=="rice")
{
    Recipe.riceRecipe();
}
 else if(foodItem=="beef")
 {
   Recipe.beefRecipe();
 }
 else if(foodItem=="macaronni")
 {
   Recipe.macaroniRecipe();
 }
 else if(foodItem=="derere")
 {
    Recipe.derereRecipe();
 }
 else if(foodItem=="beans")
 {
    Recipe.beansRecipe();
 }
 else cout<<"\nsorry our savers are under maintenance!!\n";

 }
 void ingridientsSelecion(string fooditem)
 {
if(fooditem=="sadza")
    {
     Ingridients.sadzaingridients();
    }
else if(fooditem=="rice")
{
    Ingridients.riceIngridients();
}
 else if(foodItem=="beef")
 {
   Ingridients.beefIngridients();
 }
 else if(foodItem=="macaronni")
 {
   Ingridients.macaroniIngridients();
 }
 else if(foodItem=="derere")
 {
    Ingridients.derereIngridients();
 }
 else if(foodItem=="beans")
 {
    Ingridients.beansIngridients();
 }

else cout<<"\nsorry our savers are under maintenance!!\n";

 }
 void bothFoodTypeSelection(string foodItem)
 {
     int choice;
     cout<<"\t\tInput what you want from the menu bellow\n";
     if(foodItem=="beef")
     {
         Recipe.beefMenu();
         cin>>choice;
         switch (choice)
         {
             case 1:cout<<" BEEF STEW\n";
         }
     }
 }
int main()
{
    welcomeNote();
    a:
    if ((option=="ingridients")||(option=="INGRIDIENTS"))
    {
        system("cls");
        cout<<"\t\t//////////////////Here is the list of ingridients to cook "<<foodItem<<"//////////////////\n";
        ingridientsSelecion(foodItem);
    }
    else if((option=="recipe")||(option=="RECIPE"))
    {
        system("cls");
        cout<<"\t\t//////////////////Here is the recipe to cook "<<foodItem<<"*/*/*/*/*/////////\n";
        recipeSelecion(foodItem);
    }
    else
    {
        cout<<"\t\tDo you want both? [y/n] :";
        cin>>option;
        if(option=="y")
        {
            if (foodItem=="beef")
            {
                bothFoodTypeSelection(foodItem);
            }
            else
            {
                system("cls");
                cout<<"\t\t//////////////////Here is the ingridients and recipe to cook "<<foodItem<<"//////////////////\n";
                recipeSelecion(foodItem);
                ingridientsSelecion(foodItem);
            }
        }
        else if(option=="n")
        {
            cout<<"\t\tsorry can you tell me again if you want ingridients or recipe to cook"<<foodItem<<endl<<"\t\t";
            cin>>option;
            goto a;
        }
        else
        {
            cout<<"\t\tSorry I did not understand what you want\n";
            cout<<"\t\tDo you want try again? [y/n] :";
            cin>>option;
            if(option=="y")
                {
                    cout<<"\t\tWhat do you want between recipe and ingridients\n\t\t";
                    cin>>option;
                    goto a;
                }
                else
                {
                    cout<<"\n\t\tThank you "<<username<<"for choosing Chef Malvern\n\t\ttill nrxt time its a goodbye\n";
                }
        }
    }
    cout<<"\t\tChef Malvern can also help you to cook by keeping the time for you and reminding you what to do\n";
    return 0;
}
