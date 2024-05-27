#include <iostream>
#include <string>

using namespace std;

void printCard(string rank, string suit) {
    cout << char(218) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(191) << endl;
    cout << char(179) << " " << rank << "     " << char(179) << endl;
    cout << char(179) << "       " << char(179) << endl;
    cout << char(179) << "   " << suit << "   " << char(179) << endl;
    cout << char(179) << "       " << char(179) << endl;
    cout << char(179) << "     " << rank << " " << char(179) << endl;
    cout << char(192) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217) << endl;
}

int main() {
    string rank, suit;

    cout << "Enter the rank of the card: ";
    cin >> rank;
    if (rank == "jack") {
		rank = "J";
	}
	else if (rank == "queen") {
		rank = "Q";
	}
    else if (rank == "king") {
		rank = "K";
	}
    else if (rank == "ace") {
		rank = "A";
    }

    cout << "Enter the suit of the card: ";
    cin >> suit;
	if (suit == "hearts") {
		suit = char(3);
    }
    else if (suit == "diamonds") {
		suit = char(4);
    }
    else if (suit == "clubs") {
		suit = char(5);
    }
    else if (suit == "spades") {
		suit = char(6);
    }
    else {
		cout << "Invalid suit" << endl;
		return 1;
	}
    printCard(rank, suit);

    return 0;
}
