// Crypto.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
/* Rotation  vers la gauche avec 8 bits, les bits de poids fort qui se trouvent en dehors de l’extrémité supérieure sont déplacés dans les positions de bits les moins significatives.Exemple Si 1000 0000 devient 0000 0001 */
#define ROTL8(x,shift) ((uint8_t) ((x) << (shift)) | ((x) >> (8 - (shift))))

int main(uint8_t sbox[256]) {
	// printf() displays the string inside quotation
	uint8_t p = 1, q = 1;

	/*  Boucle de p*q==1 dans le champs */
	do {
		/* p * 3 */
		p = p ^ (p << 1) ^ (p & 0x80 ? 0x1B : 0);

		/* Divisé Q par 3 ce qui correspondant à 0xf6 */
		q ^= q << 1;
		q ^= q << 2;
		q ^= q << 4;
		q ^= q & 0x80 ? 0x09 : 0;

		/* ou exclusif binaire = ^ */
		uint8_t xformed = q ^ ROTL8(q, 1) ^ ROTL8(q, 2) ^ ROTL8(q, 3) ^ ROTL8(q, 4);



		sbox[p] = xformed ^ 0x63;
	} while (p != 1);

	/* 0 is a special case since it has no inverse */
	sbox[0] = 0x63;


	return 0;
}
