/* Copyright (c) 2007 MITSUNARI Shigeo
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* Redistributions of source code must retain the above copyright notice, this
* list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
* Neither the name of the copyright owner nor the names of its contributors may
* be used to endorse or promote products derived from this software without
* specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*/

enum {
	B00000000 = 0,
	B00000001 = 1,
	B00000010 = 2,
	B00000011 = 3,
	B00000100 = 4,
	B00000101 = 5,
	B00000110 = 6,
	B00000111 = 7,
	B00001000 = 8,
	B00001001 = 9,
	B00001010 = 10,
	B00001011 = 11,
	B00001100 = 12,
	B00001101 = 13,
	B00001110 = 14,
	B00001111 = 15,
	B00010000 = 16,
	B00010001 = 17,
	B00010010 = 18,
	B00010011 = 19,
	B00010100 = 20,
	B00010101 = 21,
	B00010110 = 22,
	B00010111 = 23,
	B00011000 = 24,
	B00011001 = 25,
	B00011010 = 26,
	B00011011 = 27,
	B00011100 = 28,
	B00011101 = 29,
	B00011110 = 30,
	B00011111 = 31,
	B00100000 = 32,
	B00100001 = 33,
	B00100010 = 34,
	B00100011 = 35,
	B00100100 = 36,
	B00100101 = 37,
	B00100110 = 38,
	B00100111 = 39,
	B00101000 = 40,
	B00101001 = 41,
	B00101010 = 42,
	B00101011 = 43,
	B00101100 = 44,
	B00101101 = 45,
	B00101110 = 46,
	B00101111 = 47,
	B00110000 = 48,
	B00110001 = 49,
	B00110010 = 50,
	B00110011 = 51,
	B00110100 = 52,
	B00110101 = 53,
	B00110110 = 54,
	B00110111 = 55,
	B00111000 = 56,
	B00111001 = 57,
	B00111010 = 58,
	B00111011 = 59,
	B00111100 = 60,
	B00111101 = 61,
	B00111110 = 62,
	B00111111 = 63,
	B01000000 = 64,
	B01000001 = 65,
	B01000010 = 66,
	B01000011 = 67,
	B01000100 = 68,
	B01000101 = 69,
	B01000110 = 70,
	B01000111 = 71,
	B01001000 = 72,
	B01001001 = 73,
	B01001010 = 74,
	B01001011 = 75,
	B01001100 = 76,
	B01001101 = 77,
	B01001110 = 78,
	B01001111 = 79,
	B01010000 = 80,
	B01010001 = 81,
	B01010010 = 82,
	B01010011 = 83,
	B01010100 = 84,
	B01010101 = 85,
	B01010110 = 86,
	B01010111 = 87,
	B01011000 = 88,
	B01011001 = 89,
	B01011010 = 90,
	B01011011 = 91,
	B01011100 = 92,
	B01011101 = 93,
	B01011110 = 94,
	B01011111 = 95,
	B01100000 = 96,
	B01100001 = 97,
	B01100010 = 98,
	B01100011 = 99,
	B01100100 = 100,
	B01100101 = 101,
	B01100110 = 102,
	B01100111 = 103,
	B01101000 = 104,
	B01101001 = 105,
	B01101010 = 106,
	B01101011 = 107,
	B01101100 = 108,
	B01101101 = 109,
	B01101110 = 110,
	B01101111 = 111,
	B01110000 = 112,
	B01110001 = 113,
	B01110010 = 114,
	B01110011 = 115,
	B01110100 = 116,
	B01110101 = 117,
	B01110110 = 118,
	B01110111 = 119,
	B01111000 = 120,
	B01111001 = 121,
	B01111010 = 122,
	B01111011 = 123,
	B01111100 = 124,
	B01111101 = 125,
	B01111110 = 126,
	B01111111 = 127,
	B10000000 = 128,
	B10000001 = 129,
	B10000010 = 130,
	B10000011 = 131,
	B10000100 = 132,
	B10000101 = 133,
	B10000110 = 134,
	B10000111 = 135,
	B10001000 = 136,
	B10001001 = 137,
	B10001010 = 138,
	B10001011 = 139,
	B10001100 = 140,
	B10001101 = 141,
	B10001110 = 142,
	B10001111 = 143,
	B10010000 = 144,
	B10010001 = 145,
	B10010010 = 146,
	B10010011 = 147,
	B10010100 = 148,
	B10010101 = 149,
	B10010110 = 150,
	B10010111 = 151,
	B10011000 = 152,
	B10011001 = 153,
	B10011010 = 154,
	B10011011 = 155,
	B10011100 = 156,
	B10011101 = 157,
	B10011110 = 158,
	B10011111 = 159,
	B10100000 = 160,
	B10100001 = 161,
	B10100010 = 162,
	B10100011 = 163,
	B10100100 = 164,
	B10100101 = 165,
	B10100110 = 166,
	B10100111 = 167,
	B10101000 = 168,
	B10101001 = 169,
	B10101010 = 170,
	B10101011 = 171,
	B10101100 = 172,
	B10101101 = 173,
	B10101110 = 174,
	B10101111 = 175,
	B10110000 = 176,
	B10110001 = 177,
	B10110010 = 178,
	B10110011 = 179,
	B10110100 = 180,
	B10110101 = 181,
	B10110110 = 182,
	B10110111 = 183,
	B10111000 = 184,
	B10111001 = 185,
	B10111010 = 186,
	B10111011 = 187,
	B10111100 = 188,
	B10111101 = 189,
	B10111110 = 190,
	B10111111 = 191,
	B11000000 = 192,
	B11000001 = 193,
	B11000010 = 194,
	B11000011 = 195,
	B11000100 = 196,
	B11000101 = 197,
	B11000110 = 198,
	B11000111 = 199,
	B11001000 = 200,
	B11001001 = 201,
	B11001010 = 202,
	B11001011 = 203,
	B11001100 = 204,
	B11001101 = 205,
	B11001110 = 206,
	B11001111 = 207,
	B11010000 = 208,
	B11010001 = 209,
	B11010010 = 210,
	B11010011 = 211,
	B11010100 = 212,
	B11010101 = 213,
	B11010110 = 214,
	B11010111 = 215,
	B11011000 = 216,
	B11011001 = 217,
	B11011010 = 218,
	B11011011 = 219,
	B11011100 = 220,
	B11011101 = 221,
	B11011110 = 222,
	B11011111 = 223,
	B11100000 = 224,
	B11100001 = 225,
	B11100010 = 226,
	B11100011 = 227,
	B11100100 = 228,
	B11100101 = 229,
	B11100110 = 230,
	B11100111 = 231,
	B11101000 = 232,
	B11101001 = 233,
	B11101010 = 234,
	B11101011 = 235,
	B11101100 = 236,
	B11101101 = 237,
	B11101110 = 238,
	B11101111 = 239,
	B11110000 = 240,
	B11110001 = 241,
	B11110010 = 242,
	B11110011 = 243,
	B11110100 = 244,
	B11110101 = 245,
	B11110110 = 246,
	B11110111 = 247,
	B11111000 = 248,
	B11111001 = 249,
	B11111010 = 250,
	B11111011 = 251,
	B11111100 = 252,
	B11111101 = 253,
	B11111110 = 254,
	B11111111 = 255
};
