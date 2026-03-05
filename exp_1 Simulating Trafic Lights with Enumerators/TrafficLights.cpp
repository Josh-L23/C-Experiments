/*  Enumerators from what i learned so far are basically a way for you to define your own data types 
    sticking to the about 8? or so fundamental types only can be quite limiting but mostly confising for
    large code bases, so yeah these basically help improve your codes readablility

    Im not gonna School you on what or how to enumerators are coz ill probably be wrong
    here and there anyway, so RESEARCH, prompt, BUILD!
*/

//Goal: to try and simulate the switching of trafic lights to different colors?

#include<iostream>
#include<chrono>
#include<thread>

using namespace std;
enum color {RED, YELLOW, GREEN};

int main(){

    for(color Light : {RED, YELLOW, GREEN}){

        switch(Light){
            case  (YELLOW):
                cout <<"SLOW DOWN"<<endl;
                this_thread::sleep_for(chrono::seconds(2));
                cout<< "...please wait.." << endl;
                this_thread::sleep_for(chrono::seconds(3));
            break;
            case (RED):
                cout <<"STOP"<<endl;
                this_thread::sleep_for(chrono::seconds(2));
                cout<< "...please wait..." << endl;
                this_thread::sleep_for(chrono::seconds(3));
            break;
            case (GREEN):
                cout <<"GO"<<endl;
                this_thread::sleep_for(chrono::seconds(2));
                cout<< "...Stay safe.." << endl;
                this_thread::sleep_for(chrono::seconds(3));
            break;
        }

    }

    // had to do a little more research to figure out how to make the program wait for a few seconds before switching to the next color,
    // just to make it a bit more Practical
    // the thread library lets the program wait without consuming addition reasourses
    // so yeah  guess thats One way you can use enumerations
    // Lets Try something a bit more crazy and complex
    // See ya on the next experiment
   
    return 0;
}