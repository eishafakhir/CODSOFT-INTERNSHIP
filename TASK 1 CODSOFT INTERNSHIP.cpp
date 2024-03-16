#include<iostream>
#include<cstdlib>
int main(){
int random_number,playerguess,trials=0;
random_number=std::rand()%100+1;
std::cout<<"LET'S START THE NUMBER GUESSING GAME: "<<std::endl;
do{
	std::cout<<"GUESS THE NUMBER BETWEEN(1 and 100)"<<std::endl;
	std::cin>>playerguess;
	trials++;
	if(playerguess>random_number){
	    std::cout<<"THE GUESSED NUMBER IS TOO HIGH!TRY AGAIN."<<std::endl;
	}
	else if(playerguess<random_number)
	{
	std::cout<<"THE GUESSED NUMBER IS TOO LOW!TRY AGAIN."<<std::endl;
}
else{
	std::cout<<"WAY TO GO! YOU GUESSED THE NUMBER IN: "<<trials<<" TRIALS"<<std::endl;
	std::cout<<"PLAY AGAIN"<<std::endl;
}
}
while(playerguess!=random_number);
return 0;
	}
