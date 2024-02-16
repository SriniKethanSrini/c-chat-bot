#include <iostream>

#include <string>

#include <algorithm>

#include <unordered_map>

using namespace std;
int m1,m2,m3;

// string yes;
// string no;
int main()
{
    string c;
    std::string str_inp0("yes");
unordered_map<string, string> memory;

string user_input;
// int n;
// turning user input into Lowercase

transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);

// welcome message for the bot

cout << "Welcome user, i am a chatbot" << endl;
while(true) {

// getting user input

getline(cin,user_input);

// turning user_input into lowercase

transform(user_input.begin(),user_input.end(),user_input.begin(),:: tolower);
if(user_input=="hi"||user_input=="hello"||user_input=="hey"){

cout<<"Hello user, how can i help you?"<<endl;
}
else if(user_input=="how are you" ||user_input=="are you ok"){

cout<<"As a chatbot i have no emotional states"<<endl;

}else if(user_input=="what's my name")
{if(memory.find("name")!=memory.end()){

cout<<"Your name is "<<memory["name"]<<endl;

}else{

cout<<"Sorry you didn't tell me your name yet. Tell me your name"<<endl;

}
}else if(user_input.find("my name is")!=string::npos){
    size_t pos = user_input.find("my name is");

string name=user_input.substr(pos+11);

memory["name"] = name;

cout<<"Nice to meet you "<<name<<endl;
}
else if(user_input=="bye"||user_input=="see you later"||user_input=="later")
{

cout<<"Bye";



// }else{
//     cout<<"sorry i didn't get your details\n";
// }

}
else if(user_input=="government scheme"||user_input=="scheme for people"||user_input=="fianance scheme"){
// int m1,m2,m3;
cout<<"choose with scheme detail about in government\n"
"choose number based on required government service \n"
"1-education support scheme\n"
"2- finance support\n"
"3-health support \n"
"4-loan &subsdity support\n";
cout<<"enter number within the 3:";
//  int m1,m2,m3;
 cin>>m1;
if(m1==1){
    int m1;
   cout<<"enter number within 3:\n"
   "1- Rashtriya Avishkar Abhiyan scheme\n"
   "2-CBSE Udaan Scheme scheme\n"
   "3-Saksham Scholarship\n";
   cin>>m1;
   if(m1==1){
    cout<<"for  the women childern age from 6 to 18 and financial background low";
   }
   else if(m1==2){
    cout<<"for the childern at both gender age from 6 to 18 and financial background low";
   }
   else if(m1==3){
cout<<"for childern in who have disability";
   }
   else {
    cout<<"you entered wrong number";
   }
}
 else if(m1==2){
    int m1;
   cout<<"enter number within 3:\n"
   "1- for pension scheme\n"
   "2-for post office scheme\n"
   "3-for provident fund\n";
   cin>>m1;
   
   if(m1==1){
     cout<<"to know more go through the website'https://npscra.nsdl.co.in/all-faq-about-nps.php'\n";
   }
   else if(m1==2){
    

    cout<<"plan through post offices across India as well as through banks\n"
"Most such government schemes for investment permit tax deductions and allow the investor to\n ";
}
else if(m1==3){
    cout<<"plan through post offices 3 across India as well as through banks\n"
"Most such government schemes for investment permit tax deductions and allow the investor to\n ";

}
else {
    cout<<"you entered wrong number";
   }
}
else if(m1==3){
    

    cout<<"plan through 3rd post offices across India as well as through banks\n"
"Most such government schemes for investment permit tax deductions and allow the investor to\n ";
}
else if(m1==4){
    cout<<"plan through post offices 4th across India as well as through banks\n"
"Most such government schemes for investment permit tax deductions and allow the investor to\n ";

}
else {
    cout<<"you entered wrong number";
   }

// else if(m1==4){
//     cout<<"plan through post offices 4 across India as well as through banks\n"
// "Most such government schemes for investment permit tax deductions and allow the investor to\n ";

// }
// else if(m1==5){
//     cout<<"plan through post offices 4 across India as well as through banks\n"
// "Most such government schemes for investment permit tax deductions and allow the investor to \n";

// }
    // break;

cout<<"required any other details:\n ";
cin>>c;
    
if(c.compare(str_inp0)==0){
    cout<<"type government scheme to know more: ";
}
else if(c=="no"){
    cout<<"thanks you";
}


cout<<"Sorry i didn't get it tell me again"<<endl;


}
else{
   cout<<"sorry i didn't get your details please recheck the prompt\n";
 }


}

}