#include<bits/stdc++.h>
using namespace std;
//Credit: Anik Roy

void lifeDisplay(int &chances) {
    cout<<"Life: ";
    for(int i=0; i<chances; i++) {
        cout<<"❤️ ";
    }
    cout<<endl;
}

void winner(bool &flag) {
    cout<<"\n**********************************"<<endl;
    cout<<"========> Winner Winner <========="<<endl;
    cout<<"======>  Chicken Dinner! <========"<<endl;
    cout<<"**********************************\n"<<endl;
    flag=false;
}

void check(char ch, string &str, vector<pair<string,string>> &wordsLib, int wordIndex, int &chances) {

    string word = wordsLib[wordIndex].first;

    if(count(word.begin(), word.end(), ch) > 0 ||
            count(word.begin(), word.end(), tolower(ch)) > 0 ||
            count(word.begin(), word.end(), toupper(ch)) > 0) {

        cout << "\n----> Letter Exists! <----\n" << endl;
        for(int i = 0; i < word.length(); i++) {
            if(tolower(ch) == tolower(word[i])) {
                str[i] = word[i];
            }
        }
    }
    else {
        cout<<"----> Wrong! <----\n"<<endl;
        chances--;
        lifeDisplay(chances);
    }
}


int randomNumber(int a,int b) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(a,b);
    return dist(gen);
}

void printHead() {
    cout<<"\n+------------------------------------+"<<endl;
    cout<<"|      +--------------------+        |"<<endl;
    cout<<"|======| Word Guessing Game!|========|"<<endl;
    cout<<"|      +--------------------+        |"<<endl;
    cout<<"+------------------------------------+\n"<<endl;
}

void EXIT() {
    cout<<"\n---------------------------------------"<<endl;
    cout<<"|-------------------------------------|"<<endl;
    cout<<"|  |    Thank You For Playing      |  |"<<endl;
    cout<<"|  |      Credit: Anik Roy         |  |"<<endl;
    cout<<"|-------------------------------------|"<<endl;
    cout<<"---------------------------------------"<<endl;
}

bool choice() {
    char ch;
    cout<<"Enter y/n for Continue or,Stop the game:";
    cin>>ch;
    if(ch=='y') {
        return true;
    }
    else if(ch=='n') {
        EXIT();
        return false;
    }
    else {
        cout<<"Invalid Character!"<<endl;
        return choice();
    }
}


int main()
{
    vector<pair<string,string>> wordsLib = {
        {"Lantern", "Used to light the dark in old times."},
        {"Cactus", "A plant that survives in tough conditions."},
        {"Compass", "Helps travelers find direction."},
        {"Igloo", "A type of shelter."},
        {"Origami", "An art form."},
        {"Volcano", "A natural mountain-like structure."},
        {"Whistle", "You can blow into it."},
        {"Telescope", "Helps you see faraway things."},
        {"Pyramid", "A famous ancient structure."},
        {"Parrot", "A colorful animal."},
        {"Anchor", "Keeps a ship from drifting away."},
        {"Galaxy", "A system of millions of stars."},
        {"Bridge", "Helps people cross rivers or roads."},
        {"Crystal", "A clear, shiny mineral structure."},
        {"Harbor", "Where ships dock safely."},
        {"Knight", "A warrior from medieval times."},
        {"Rocket", "Flies into space."},
        {"Jungle", "A dense forest with wild animals."},
        {"Castle", "A stronghold for kings and queens."},
        {"Mirror", "Reflects your image."}
    };

    printHead();

    while(choice()) {
        int a=0,b=wordsLib.size()-1,h=1;
        int wordIndex=randomNumber(a,b);
        int wlen=(wordsLib[wordIndex].first).length();
        string str(wlen,'_');
        int chances=0;
        (wlen>5)?chances=7:chances=3;
        cout<<"\n+----------------------------------+"<<endl;
        cout<<"|          Ok!Let's Play!          |"<<endl;
        cout<<"|          Guess The Word!         |"<<endl;
        cout<<"|        You have "<<chances<<" chances!       |"<<endl;
        cout<<"| Use '?' to have a Hint(One time) |"<<endl;
        cout<<"+----------------------------------+\n"<<endl;
        lifeDisplay(chances);
        bool flag=true;
        cout<<"The Word has "<<wlen<<" letters in it.\n"<<endl;
        while(flag && chances!=0) {
            char ch;
            cout<<"Guess one letter? "<<str<<endl;
            cout<<"Enter: ";
            cin>>ch;
            if(ch=='?' && h==1) {
                cout<<"\nHint: "<<wordsLib[wordIndex].second<<endl;
                h=0;
            }
            else if(ch=='?' && h==0) {
                cout<<"==>>No more hint!<<==\n"<<endl;
            }
            else if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')) {
                check(ch,str,wordsLib,wordIndex,chances);
                if(count(str.begin(),str.end(),'_')==0) {
                    winner(flag);
                }
            }
        }
        if(chances==0) {
            cout<<"\n________________________"<<endl;
            cout<<"-----> You lose! <------"<<endl;
            cout<<"________________________\n"<<endl;
        }
    }
    return 0;
}
