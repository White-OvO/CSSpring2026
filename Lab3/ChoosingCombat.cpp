#include <iostream> 
// #include <iomap> 

using namespace std; 


int main () { 

/*
LAB 3: 
In this lab you will validate a single integer input and handle type/range errors, 
drive a tiny menu with a single switch, and use a nested selection inside one case 
to adjust behavior. These patterns matter because real programs must guard bad 
inputs first, then branch cleanly based on a user’s choice—think menus, CLI tools, 
config flags, and game actions. You’ll reuse the same validation-then-branch 
structure in upcoming work (loops, functions, structs), and this habit of 
checking inputs early and isolating decisions will make your code easier to 
test, grade, and debug later. This also maps directly to everyday tasks like
 form validation, command handling, and event routing in production code.


 NOTE : 
 
 Task
Create a console program that asks the user to choose a combat style and then, based on that choice, asks for a specific weapon or spell option in that combat style. The weapon or spell will then inform a bonus that will be applied to the base damage of 10 to calculate an actual damage to be caused by the attack.

There are 2 combat styles melee and magic which have the weapons and spells:

combat style	weapon/spell	bonus
melee	            dagger  	1.3
melee	            scimitar	2.7
magic	            bolt	    1.9
magic	            blast	    3.0

*/
//step 1 :The first prompt must read an integer for the combat style and validate that it’s a number.

int combatStyle = 0 ;
cout << "Choose a style (1=Melee -or- 2=Magic): "; 
cin >> combatStyle ; 

//validating the input to a number 
if(cin.fail()) { 
    cout << "Error: Invalid number" ;
    return 0; 
}


 
// if (combatStyle != 1 | 2) { 
if ( combatStyle != 1 && combatStyle != 2) { 

    cout << "Error: Invalid selection"; 
    return 0; 

} 
// step 2 : n a switch statement, use the integer read in to determine to ask for a weapon or spell based on the combat style, or that the value is not one of the allowed styles.



int baseDamage = 10;


switch(combatStyle) { 
case 1 :{ 
  string weapon; 
  cout << "\nChoose a weapon (dagger or scimitar): "; 

  cin >> weapon;

  if (weapon != "dagger" && weapon != "Dagger" && weapon != "scimitar" && weapon != "Scimitar") { 

    cout << "Error: Invalid weapon"; 
    return 0; 
  }

  if (weapon == "dagger" || weapon == "Dagger") { 
    // declaring the bonus for dagger
    double daggerBonus = 1.3;
    cout << "\nThe dagger weapon  causes 13 damage with bonus " << daggerBonus << "." << endl; 

  }
 
   if (weapon == "scimitar" || weapon == "Scimitar") { 
    double scimitarBonus = 2.7; 
    cout << "\nThe scimitar weapon  causes 27 damage with bonus " << scimitarBonus <<"." << endl; 
  }
  break; 
  }
case 2:  { 
string spell = "" ; 



// step 3 : Inside the selected switch case for each combat type, nest a secondary selection for the specific options between the weapons and spells.



cout << "\nChoose a spell (bolt or blast): "; 
cin >> spell;

    if ( spell != "bolt" && spell != "Bolt"  && spell != "Blast" && spell != "blast"){ 
        cout << "Error: Invalid spell" << endl; 
        return 0;
     }
    if (spell == "Bolt" || spell == "bolt") { 
        double boltBonus = 1.9; 
        cout << "\nThe bolt spell  causes 19 damage with bonus " << boltBonus << ".";
      //  cout << bonus ; 
}
    else if ( spell == "blast" || spell == "Blast") { 

       double blastBonus = 3.0; 
        // cout << showpoint
     //   cout << bonus; 
     cout << "\nThe blast spell  causes 30 damage with bonus " << blastBonus << ".";
    }
 break;
}
    


}
    return 0; 
}


/*


while (true) {
    cout << "Choose a style (1=Melee -or- 2=Magic): " << endl; 

    if (!(cin >> combatStyle)) {
        // non-integer input
        cout << "Error: Invalid selection" << endl; 
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        continue;
    }

    if (combatStyle == 1 || combatStyle == 2) {
        break; // valid selection
    }
        */