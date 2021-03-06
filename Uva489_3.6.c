/*
In “Hangman Judge,” you are to write a program that judges a series of Hangman games. For each
game, the answer to the puzzle is given as well as the guesses. Rules are the same as the classic game
of hangman, and are given as follows:
1. The contestant tries to solve to puzzle by guessing one letter at a time.
2. Every time a guess is correct, all the characters in the word that match the guess will be “turned
over.” For example, if your guess is ‘o’ and the word is “book”, then both ‘o’s in the solution will
be counted as “solved”.
3. Every time a wrong guess is made, a stroke will be added to the drawing of a hangman, which
needs 7 strokes to complete. Each unique wrong guess only counts against the contestant once.
______
| |
| O
| /|\
| |
| / \
__|_
| |______
|_________|
4. If the drawing of the hangman is completed before the contestant has successfully guessed all the
characters of the word, the contestant loses.
5. If the contestant has guessed all the characters of the word before the drawing is complete, the
contestant wins the game.
6. If the contestant does not guess enough letters to either win or lose, the contestant chickens out.
Your task as the “Hangman Judge” is to determine, for each game, whether the contestant wins,
loses, or fails to finish a game.
Input
Your program will be given a series of inputs regarding the status of a game. All input will be in lower
case. The first line of each section will contain a number to indicate which round of the game is being
played; the next line will be the solution to the puzzle; the last line is a sequence of the guesses made
by the contestant. A round number of ‘-1’ would indicate the end of all games (and input).
Output
The output of your program is to indicate which round of the game the contestant is currently playing
as well as the result of the game. There are three possible results:
You win.
You lose.
You chickened out.
Sample Input
1
cheese
chese
2
cheese
abcdefg
3
cheese
abcdefgij
-1

紫书79
*/



#include <stdio.h>
#include <string.h>

#define maxn 100
int left,chance;

char s[maxn], s2[maxn];

int win, lose;

void guess(char ch){
    int bad = 1;
    for (int i = 0; i < strlen(s);i++)
        if(s[i]==ch){
            left--;
            s[i] = ' ';
            bad = 0;
        }
    if(bad)
        --chance;
    if(!chance)
        lose = 1;
    if(!left)
        win = 1;
}

int main(){
    int rnd;
    while(scanf("%d%s%s",&rnd,s,s2)==3&&rnd!=-1){
        printf("Round %d\n", rnd);
        win = lose = 0;
        left = strlen(s);
        chance = 7;
        for (int i = 0; i < strlen(s2);i++){
            guess(s2[i]);
            if(win||lose)
                break;
        }
        if(win)
            printf("You win.\n");
        else if(lose)
        {
            printf("You lose.\n");
        }
        else
            printf("You chickened out.\n");
    }
    return 0;
}