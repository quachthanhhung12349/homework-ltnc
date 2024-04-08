#include <bits/stdc++.h>

const int STARTING_HEALTH = 3;

using namespace std;

string generateAnswer(string word);
char getPlayerGuess();
bool checkForCorrectLetters(string word, string &answer, char guess);
void announceGameOver(bool gameWon, string word);
void printHangman(const int health);
void printAnswer(string answer);

int main(){
	int health = STARTING_HEALTH;
	printHangman(health);
	string randomWord = "apple";
	string answer = generateAnswer(randomWord);
	char playerGuess;
	bool check = false;
	while (true){
		printAnswer(answer);	
		playerGuess = getPlayerGuess();
		check = checkForCorrectLetters(randomWord, answer, playerGuess);
		if (!check) health--;
		printHangman(health);
		if (health == 0){
			announceGameOver(0, randomWord);
			break;
		}
		if (randomWord == answer){
			announceGameOver(1, randomWord);
			break;
		}
	}
}

void printAnswer(string answer){
	cout << answer;
}

string generateAnswer(string word){
	string answer = "";
	for (int i = 0; i < word.size(); i++){
		answer += '_';
	}
	return answer;
}

char getPlayerGuess(){
	char c;
	cout << "Your guess: ";
	cin >> c;
	return c;
}

bool checkForCorrectLetters(string word, string &answer, char guess){
	bool c = false;
	for (int i = 0; i < word.size(); i++){
		if (word[i] == tolower(guess)){
			c = true;
			answer[i] = tolower(guess);
		}
	}
	return c;
}

void printHangman(const int health){
	cout << "Health left: " << health << endl;
}

void announceGameOver(bool gameWon, string word){
	if (gameWon){
		cout << "You Win! Congratulations!";
	}
	else{
		cout << "Sorry, you lost." << endl;
		cout << "The secret word is: " << word;
	}
	
}
