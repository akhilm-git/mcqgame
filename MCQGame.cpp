#include<iostream>
using namespace std;

void start_game();
void end_game(int score);

void start_game(){
	
	char answer;
	int score;
	
	cout<<"\nHow much is 3+3 ?Select the correct ans among 'a','b','c','d'."<<endl;
	cout<<"a)4"<<endl;
	cout<<"b)3"<<endl;
	cout<<"c)5"<<endl;
	cout<<"d)6"<<endl;
	cout<<"Please choose one from 'a','b','c' or 'd' and press enter."<<endl;
	cin>>answer;
	if(answer=='d'){
		cout<<"Correct answer."<<endl;
		score++;
	}
	else{
		cout<<"Wrong answer."<<endl;
	}
	
	cout<<"\nWho is the CEO of Google ?Select the correct ans among 'a','b','c','d'."<<endl;
	cout<<"a)Bill Gates"<<endl;
	cout<<"b)Jeff Bezos"<<endl;
	cout<<"c)Sundar Pichai"<<endl;
	cout<<"d)Elon Musk"<<endl;
	cout<<"Please choose one from 'a','b','c' or 'd' and press enter."<<endl;
	cin>>answer;
	if(answer=='c'){
		cout<<"Correct answer."<<endl;
		score++;
	}
	else{
		cout<<"Wrong answer."<<endl;
	}
	end_game(score);
}

void end_game(int score){
	cout<<"\nYour score is :"<<score<<endl;
}

int main(){
	string user_input;
	cout<<"========Welcome======="<<endl;
	cout<<"If you want to play game then type 'play' to start else type 'quit'."<<endl;
	cin>>user_input;
	
	if(user_input== "play"){
		start_game();
	}
	else{
		end_game(0);
	}
	return 0;
}
