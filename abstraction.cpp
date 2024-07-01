#include<iostream>
using namespace std;
    
    class car{
        bool startEngine;
        public:
            void start(){
                startEngine = true;
                cout << "Engine Started " << endl;

            }
            void drive(){
                if (startEngine)
                {
                    cout << "You are ready to drive ";
                }
                 else{
                    cout << "Can't drive car";
                }
            }
    };
   main(){
        car c;
        c.start();
        c.drive();
     }