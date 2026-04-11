#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
// 表示單張撲克牌的類別
class Card {
public:
string colors; //儲存撲克牌的花色
string rank; //儲存撲克牌的數值
Card(string s, string r) : colors(s), rank(r) {} //建立 constructor來初始化物件,當 Card 物件建立時,它會自動執行這個函式,並把 s 和 r 的值存入colors 和 rank
void display() const { //顯示撲克牌的資訊
cout << rank << " of " << colors << endl;
}
};
// 實作 Stack
class Stack {
private:
vector<Card> stack; //表示 stack 是一個能存放 Card 類別物件的 vector

public:
void push(const Card& card) {
	stack.push_back(card);//在stack最上層放一張牌 
}
Card pop() {
	Card topCard = stack.back();//找到stack最上層的牌
    stack.pop_back();//移除stack最上層的牌
    return topCard;//回傳被移除的牌 
}
bool isEmpty() const {
	return stack.empty();//判斷stack是不是空的 
}
};

// 代表一副撲克牌的類別
class Deck {
private:
vector<Card> cards; // 存放未洗牌的撲克牌
Stack shuffledDeck; // 存放洗過的牌,用實作的 stack 來管理
public:
Deck() { //建立 constructor 來初始化物件
string colors[] = { "Hearts", "Diamonds", "Clubs", "Spades" };//儲存撲克牌的花色
string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K", "A" }; //儲存撲克牌的數值
//利用迴圈將 52 張牌加入 cards 這個 vector 裡面
for (int i = 0; i < 4; i++) { // 四種花色
for (int j = 0; j < 13; j++) { // 13 種點數
cards.push_back(Card(colors[i], ranks[j]));
}
}
}
//洗牌
void shuffleDeck() {
    srand(time(0));
    random_shuffle(cards.begin(), cards.end());//洗牌 

    for (int i = 0; i < cards.size(); i++) {
        shuffledDeck.push(cards[i]);//放到stack裡 
    }
}
//發牌
void drawAllCards() {
	while (!shuffledDeck.isEmpty()) {
        Card card = shuffledDeck.pop();//取出stack最上層的牌 
        card.display();//顯示取出的牌 
    } 
}
};
int main() {
Deck deck; //建立 deck 產生 52 張撲克牌
deck.shuffleDeck(); //進行洗牌並放入堆疊
cout << "Shuffled deck:" << endl;
deck.drawAllCards(); //依序取出堆疊內的牌並顯示
return 0;
}
