#include<bits/stdc++.h>
using namespace std;

mt19937 gen(random_device{}());
uniform_int_distribution<> dist(1, 6);

void exitMasge() {
    cout<<"\n==========> Thank You <=========="<<endl;
    cout<<"==========> C:Anik Roy <=========\n"<<endl;
}

void display1() {
    cout<<"---------------------------------"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"---------------------------------"<<endl;
}

void display2() {
    cout<<"---------------------------------"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"---------------------------------"<<endl;
}

void display3() {
    cout<<"---------------------------------"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"---------------------------------"<<endl;
}

void display4() {
    cout<<"---------------------------------"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"---------------------------------"<<endl;
}

void display5() {
    cout<<"---------------------------------"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|             #####             |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"---------------------------------"<<endl;
}

void display6() {
    cout<<"---------------------------------"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|   #####              #####    |"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"---------------------------------"<<endl;
}

void rollDice() {
    int x=dist(gen);
    if(x==1) {
        display1();
    }
    else if(x==2) {
        display2();
    }
    else if(x==3) {
        display3();
    }
    else if(x==4) {
        display4();
    }
    else if(x==5) {
        display5();
    }
    else {
        display6();
    }
}

int main()
{
    int x=1;
    cout<<"+<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>+"<<endl;
    cout<<"|                                         |"<<endl;
    cout<<"-------------> Rolling Dice <--------------"<<endl;
    cout<<"|                                         |"<<endl;
    cout<<"+<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>+\n"<<endl;
    while(x) {
        cout<<"==>  Tap [1] for Roll Dice  <=="<<endl;
        cout<<" ==>    Tap [0] for EXIT   <=="<<endl;
        cout<<"Enter: ";
        cin>>x;
        cout<<endl;
        if(x==1) {
            rollDice();
        }
        else if(x==0) {
            exitMasge();
        }
        else {
            cout<<"\n--> Invalid Input <--\n"<<endl;
        }
    }
    return 0;
}
