#include <stdio.h>
#include <stdlib.h>

typedef struct _card {
	const char* face;
	const char* suit;
} card;

int main(void) {
	card aCard;
	card* cardPtr;

	aCard.face = "Ace";
	aCard.suit = "Spades";

	cardPtr = &aCard;

	printf("%s of %s\n", aCard.face, aCard.suit);
	printf("%s of %s\n", cardPtr->face, cardPtr->suit);
	printf("%s of %s\n", (*cardPtr).face, (*cardPtr).suit);

	getchar();
	return 0;
}
