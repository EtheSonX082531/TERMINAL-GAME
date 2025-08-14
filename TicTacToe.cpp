#include<bits/stdc++.h>
using namespace std;

void EXIT() {
    cout<<"Thank You For Playing"<<endl;
    cout<<"Credit:Anik Roy"<<endl;
}

void winnerMassage(char &ch) {
    cout<<endl;
    cout<<">>>>>>>>>>>>>"<<endl;
    cout<<"Player "<<ch<<" Win!"<<endl;
    cout<<"<<<<<<<<<<<<<"<<endl;
    cout<<endl;
}


void checkWin(char block[3][3],bool &winner) {
    int player=1;
    while(player<3) {
        char ch;
        if(player==1) {
            ch='X';
        }
        else {
            ch='O';
        }
        if(block[0][0]==ch && block[0][1]==ch && block[0][2]==ch) {
            winner=true;
            winnerMassage(ch);
            break;
        }
        else if(block[1][0]==ch && block[1][1]==ch && block[1][2]==ch) {
            winner=true;
            winnerMassage(ch);
            break;
        }
        else if(block[2][0]==ch && block[2][1]==ch && block[2][2]==ch) {
            winner=true;
            winnerMassage(ch);
            break;
        }
        else if(block[0][0]==ch && block[1][0]==ch && block[2][0]==ch) {
            winner=true;
            winnerMassage(ch);
            break;
        }
        else if(block[0][1]==ch && block[1][1]==ch && block[2][1]==ch) {
            winner=true;
            winnerMassage(ch);
            break;
        }
        else if(block[0][2]==ch && block[1][2]==ch && block[2][2]==ch) {
            winner=true;
            winnerMassage(ch);
            break;
        }
        else if(block[0][0]==ch && block[1][1]==ch && block[2][2]==ch) {
            winner=true;
            winnerMassage(ch);
            break;
        }
        else if(block[0][2]==ch && block[1][1]==ch && block[2][0]==ch) {
            winner=true;
            winnerMassage(ch);
            break;
        }
        player++;
    }
}


void takeTurn(char block[3][3],vector<int> &turn,int &player,int &count,bool &winner) {
    if(count>=5 or count==9) {
        checkWin(block,winner);
        if(winner) {
            return ;
        }
    }
    cout<<"\nTake Your Turn:"<<endl;
    for(int i:turn) {
        if(i!=0) {
            cout<<i<<" ";
        }
    }
    cout<<"\nEnter: ";
    int x;
    cin>>x;
    cout<<endl;
    if(x==1) {
        if(player==1) {
            block[0][0]='X';
            player=0;
        }
        else {
            block[0][0]='O';
            player=1;
        }
        turn[0]=0;
    }
    else if(x==2) {
        if(player==1) {
            block[0][1]='X';
            player=0;
        }
        else {
            block[0][1]='O';
            player=1;
        }
        turn[1]=0;
    }
    else if(x==3) {
        if(player==1) {
            block[0][2]='X';
            player=0;
        }
        else {
            block[0][2]='O';
            player=1;
        }
        turn[2]=0;
    }
    else if(x==4) {
        if(player==1) {
            block[1][0]='X';
            player=0;
        }
        else {
            block[1][0]='O';
            player=1;
        }
        turn[3]=0;
    }
    else if(x==5) {
        if(player==1) {
            block[1][1]='X';
            player=0;
        }
        else {
            block[1][1]='O';
            player=1;
        }
        turn[4]=0;
    }
    else if(x==6) {
        if(player==1) {
            block[1][2]='X';
            player=0;
        }
        else {
            block[1][2]='O';
            player=1;
        }
        turn[5]=0;
    }
    else if(x==7) {
        if(player==1) {
            block[2][0]='X';
            player=0;
        }
        else {
            block[2][0]='O';
            player=1;
        }
        turn[6]=0;
    }
    else if(x==8) {
        if(player==1) {
            block[2][1]='X';
            player=0;
        }
        else {
            block[2][1]='O';
            player=1;
        }
        turn[7]=0;
    }
    else if(x==9) {
        if(player==1) {
            block[2][2]='X';
            player=0;
        }
        else {
            block[2][2]='O';
            player=1;
        }
        turn[8]=0;
    }
    else {
        cout<<"Invalid Turn!"<<endl;
    }
    count++;
}


void printBlock(char block[3][3]) {
    for(int x=0; x<3; x++) {
        for(int y=0; y<3; y++) {
            cout<<block[x][y]<<" | ";
        }
        cout<<endl;
        cout<<"----"<<"----"<<"---"<<endl;
    }
}


int main()
{
    int x=1;
    while(x) {
        cout<<"1.Tap 1 For Start Play TicTacToe!"<<endl;
        cout<<"0.Tap 0 For Exit Game!"<<endl;
        cout<<"Enter-------> ";
        cin>>x;
        if(x==0) {
            EXIT();
            return 0;
        }
        else if(x>1){
        cout<<"----> Invalid Choice! <----\n"<<endl;
        }
        else {
            int count=0;
            vector<int>turn= {1,2,3,4,5,6,7,8,9};
            int player=1;
            char block[3][3]= {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
            cout<<"|-----------------------|"<<endl;
            cout<<" Ok!Let's Play TicTacToe"<<endl;
            cout<<"|-----------------------|\n"<<endl;
            bool winner=false;
            while(!winner) {
                printBlock(block);
                if(count==9) {
                    cout<<"-----------"<<endl;
                    cout<<">> Draw! <<"<<endl;
                    cout<<"-----------"<<endl;
                    break;
                }
                takeTurn(block,turn,player,count,winner);
            }
        }
    }
    return 0;
}
