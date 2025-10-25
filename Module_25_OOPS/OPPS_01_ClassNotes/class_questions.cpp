// #include <iostream>
// #include <string>

// // class is made means we make i blue print for the objects !!

// class player
// {
// public:
//     int age;
//     char section;
// };

// using namespace std;
// int main()
// {

//     //  now we are making the objects  !!!

//     player amandeep;

//     amandeep.age = 19;
//     amandeep.section = 'B';

//     // now printing of the objects data !!!
//     cout << amandeep.age << endl;
//     cout << amandeep.section;
// }

#include <iostream>
using namespace std;

class player
{
private:
    int health;
    bool alive ;
    int score ;
    int ammos ;

public:


        // these are the setter to set the value brother !!!!! 



    // now we are using the setter to set the value !! 
    void Setterhealth(int health){
        this->health = health ;                 // this->  is used to mark the variable is belong to the class 

    }
    void Setteralive(int alive){
        this->alive = alive ;                 // this->  is used to mark the variable is belong to the class 

    }
    void Setterscore(int score){
        this->score = score ;                 // this->  is used to mark the variable is belong to the class 

    }
    void Setterammos(int ammos){
        this->ammos = ammos ;                 // this->  is used to mark the variable is belong to the class 

    }
 


    // getter to get the value 

    // setters 

    int gethealth(){
        return health ;
    }
     int getalive(){
        return alive ;
    }

     int getscore(){
        return score ;
    }

     int getammos(){
        return ammos ;
    }


    


};




int addition_of_two_object_data_members (player a , player b ){
    return a.gethealth() + b.gethealth( ) ;    /// here     .gethealth() return the value of the amandeep.health and other for same as goes 

}


// making the function which take object as an argument return the maximum output !!! 

player  max_health(player a , player b ){                   // a and player hai na esliye hamee player data type banana pda comapre 
    if( a.gethealth()>b.gethealth() ) return a ;
    else return b ;   // now it returning the object data type so we can print the data by cout so we have to store into the another player data type !!!  
}


int main()
{       // now set  the value !!!!for the amandeep !!! and assigning the values !!! 


    player amandeep ;
    amandeep.Setterhealth(200);
    amandeep.Setterammos(3000);
    amandeep.Setterscore(500);
    amandeep.Setteralive(true) ; 


    // now making the second object for the player second  and assigning the values yarr !!!! 
    player manan ; 
    manan.Setterhealth(200);
    manan.Setterammos(3300);
    manan.Setterscore(530);
    manan.Setteralive(false);




    // now getting the amandeep values from the getter 

    cout<<amandeep.gethealth()<<"\n";
    cout<<amandeep.getammos()<<"\n";
    cout<<amandeep.getalive()<<"\n";
    cout<<amandeep.getscore()<<"\n"; 

    // same getting the result for the manan !!
     cout<<manan.gethealth()<<"\n";
    cout<<manan.getammos()<<"\n";
    cout<<manan.getalive()<<"\n";
    cout<<manan.getscore()<<"\n"; 



    // now pass the two objects into the functions also calculate the addition of two health of the players amandeep and the manan 





        // making the function which takes the object as a arguments

    cout<<addition_of_two_object_data_members(amandeep, manan);





    // questions is can we pass a functions and i can also return the  object also !!! 

//    cout << max_health(amandeep ,  manan)            we cant print the object data type brother so we have to store in the another object than we have to print it bhaiii !!! 


        player palak = max_health (amandeep ,  manan);
        cout<<"\n the maximum health is \n";
        cout<<palak.gethealth();

}