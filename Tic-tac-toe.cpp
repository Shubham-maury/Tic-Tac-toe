#include<bits/stdc++.h>
using namespace std;

char space[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
int row;
int col;
string s1;
string s2;

void draw(){
    cout<<endl;
    cout<<"         |   |  "<<endl;
    cout<<"       "<<space[0][0]<<" | "<<space[0][1]<<" | "<<space[0][2]<<endl;
    cout<<"      ___|___|___"<<endl;
    cout<<"         |   |  "<<endl; 
    cout<<"       "<<space[1][0]<<" | "<<space[1][1]<<" | "<<space[1][2]<<endl;
    cout<<"      ___|___|___"<<endl;
    cout<<"         |   |  "<<endl;
    cout<<"       "<<space[2][0]<<" | "<<space[2][1]<<" | "<<space[2][2]<<endl;
    cout<<"         |   |  "<<endl;
    cout<<endl;
}      

void  startGame(){
    cout<<endl;
    cout<<"< Welcome to The Tic-Tac-Toe Online game >" <<endl;
    draw();
    cout<<"Enter the name of player 1: ";
    getline(cin, s1);
    cout<<"Enter the name of player 2: ";
    getline(cin, s2);
    cout<<endl;
    cout<<s1<<" is the player1 so he/she will play first."<<endl;
    cout<<s2<<" is the player2 so he/she will play second."<<endl;
    cout<<endl;
    cout<<"Token for "<<s1<<" is (X)."<<endl;
    cout<<"Token for "<<s2<<" is (O)."<<endl;
    cout<<endl;
   
}

bool isvalid(){
    return (row<3 and col<3 and row>=0 and col>=0 and space[row][col]==' '); 

}
void playGame(){
    bool flag = false;
    for(int i = 0; i<9; i++){
        if(i%2==0){
            cout<<s1<<" Please enter your Position (x y):";
            cin>>row>>col;
            if(isvalid()){
                space[row][col] = 'X';
                draw();
            }
            else{
                cout<<"Invalid Position!"<<endl;
                i--;
                continue;
            }
        }
        else{
            cout<<s2<<" Please enter your Position (x y):";
            cin>>row>>col;
            if(isvalid()){
                space[row][col] = 'O';
                draw();
            }
            else{
                cout<<" Invalid Position!"<<endl;
                i--;
                continue;
            }
        }
        for(int i = 0; i<3; i++){
            if(space[i][0]=='X' and space[i][1]=='X' and space[i][2]=='X'){
                cout<<s1<<" WIN!!!"<<endl;;
                // draw();
                flag = true;
                break;
            }
            else if(space[0][i]=='X' and space[1][i]=='X' and space[2][i]=='X'){
                cout<<s1<<" WIN!!!"<<endl;;
                // draw();
                flag = true;
                break;
            }
            else if(space[i][0]=='O' and space[i][1]=='O' and space[i][2]=='O'){
                cout<<s2<<" WIN!!!"<<endl;;
                // draw();
                flag = true;
                break;
            }
            else if(space[0][i]=='O' and space[1][i]=='O' and space[2][i]=='O'){
                cout<<s2<<" WIN!!!"<<endl;;
                // draw();
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
        if(space[0][0]=='X' and space[1][1]=='X' and space[2][2]=='X'){
            cout<<" "<<s1<<" WIN!!!"<<endl;;
            // draw();
            flag = true;
            break;
        }
        else if(space[0][2]=='X' and space[1][1]=='X' and space[2][0]=='X'){
            cout<<" "<<s1<<" WIN!!!"<<endl;;
            // draw();
            flag = true;
            break;
        }
        else if(space[0][0]=='O' and space[1][1]=='O' and space[2][2]=='O'){
            cout<<" "<<s2<<" WIN!!!"<<endl;;
            // draw();
            flag = true;
            break;
        }
        else if(space[0][2]=='O' and space[1][1]=='O' and space[2][0]=='O'){
            cout<<" "<<s2<<" WIN!!!"<<endl;;
            // draw();
            flag = true;
            break;
        }
    }
    if(!flag){
        cout<<" "<<"Draw!!!"<<endl;
        // draw();
    }
}






int main(){
    startGame();
    cout<<endl;
    playGame();
    return 0;
}