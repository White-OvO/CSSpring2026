#include <iostream> 
#include <cmath> 
#include<iomanip>
/* 
Task
You will write a program that calculates magic max hit values in Old School RuneScape, 
organizing the results into a neatly formatted table using output manipulators 
like setw, setfill, and justification directives (left, right).
*/

using namespace std; 

int main () { 
/*    
     step 1 : Prompt the user to enter their Magic level (integer) and Magic bonus (integer).
*/ 


int magicLevel = 0; 
int magicBonus = 0;

cout << "Enter your Magic level: ";
cin >> magicLevel; 

cout << "Enter your Magic bonus: " << endl;
cin >> magicBonus;

/* step 2 : For each spell compute the max hit using the formula and table of spells above. */

/* Max Hit=⌊Base Damage×(1+ 
100
Magic Level
​ 
 )× 
1+ 
100
Magic Bonus
​
 
​
*/
string spell =  "Spell"; 
string BaseDmgWord = "BaseDmg";
string level = "Level"; 
string bonus = "Bonus"; 
string maxHitWord  = "MaxHit";

//int BaseDmg = 0; 

//fire base damages 
int fireBolt = 12 ; 
int fireBlast = 16;
int fireWave = 20;


//baseDamage * (1 + magicLevel / 100.0) * (1 + magicBonus / 100.0) );
//int maxHit = BaseDmg * (1 + (static_cast<int> (magicLevel) / 100 )) * sqrt(1 + magicBonus / 100 );

int maxHitFireBolt = (fireBolt * (1 + magicLevel / 100.0) * sqrt(1 + magicBonus / 100.0));
int maxHitFireBlast = (fireBlast * (1 + magicLevel / 100.0) * sqrt(1 + magicBonus / 100.0));
int maxHitFireWave = (fireWave * (1 + magicLevel / 100.0) * sqrt(1 + magicBonus / 100.0));
//string header = spell << setw(10) << baseDamg << setw(10) << level << setw(10) << bouns << setw(10) << maxHit;

//cout << spell ; 

// //cout << header << endl;
// cout << left << setw(13) << spell << setw(11) << BaseDmgWord  << setw(11) << level << setw(9) << bonus  << maxHitWord << endl;
// //cout << left << setw(13) << spell << setw(11) << BaseDmgWord  << setw(8) << level << setw(8) << bouns  << setw(6) << maxHitWord<< endl;
// cout <<"----------------------------------------------"<<endl;
// cout << left << setw(13) << "Fire Bolt" << setw(11) << fireBolt << setw(11) << magicLevel << left <<  setw(9) << magicBonus << maxHitFireBolt << endl;
// cout << left << setw(13) << "Fire Blast" << setw(11) << fireBlast << setw(11) << magicLevel << left << setw(9) << magicBonus << maxHitFireBlast << endl;
// cout << left << setw(13) << "Fire Wave" << setw(11) << fireWave << setw(11) << magicLevel << left << setw(9) << magicBonus << maxHitFireWave << endl;



cout << left << setw(13) << spell << left << setw(11) << BaseDmgWord << left << setw(8) << level << right << setw(5) << bonus  << right << setw(9) << maxHitWord<< endl;
cout <<"----------------------------------------------"<<endl;
cout << left << setw(13) << "Fire Bolt" << setw(11) << fireBolt << setw(8) << magicLevel  << right << setw(5) << magicBonus << setw(9)<< maxHitFireBolt << endl;
cout << left << setw(13) << "Fire Blast" << setw(11) << fireBlast << setw(8) << magicLevel << right << setw(5) << magicBonus << setw(9) << maxHitFireBlast << endl;
cout << left << setw(13) << "Fire Wave" << setw(11) << fireWave << setw(8) << magicLevel << right << setw(5) << magicBonus << setw(9)<< maxHitFireWave << endl;


return 0; 
}