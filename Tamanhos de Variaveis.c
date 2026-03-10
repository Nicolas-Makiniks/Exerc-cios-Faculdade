#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "pt-br");

	unsigned char uchar8 = 0xffui8;
	char char8 = -128i8;

	unsigned short ushort16 = 0xffffui16;
	short short16 = -32768i16;

	unsigned int uint32 = 0xffffffffui32;
	int int32 = -2147483648i32;

	unsigned long long int ulong64 = 0xffffffffffffffffui64;
	long long int long64 = -9223372036854775808i64;

	printf("variavel:\t\t   uchar8 | char8\n");
	printf("range:\t\t\t  %hhu a %hhu | %hhd a %hhd\n", 0, uchar8, char8, char8-1);
	printf("size:\t\t\t  %llu bytes | %llu bytes\n\n", sizeof(uchar8), sizeof(char8));

	printf("variavel:\t\t ushort16 | short16\n");
	printf("range:\t\t\t%hu a %hu | %hd a %hd\n", 0, ushort16, short16, short16-1);
	printf("size:\t\t\t  %llu bytes | %llu bytes\n\n", sizeof(ushort16), sizeof(short16));

	printf("variavel:\t\t   uint32 | int32\n");
	printf("range:\t\t   %u a %u | %d a %d\n", 0, uint32, int32, int32-1);
	printf("size:\t\t\t  %llu bytes | %llu bytes\n\n", sizeof(uint32), sizeof(int32));

	printf("variavel:\t\t  ulong64 | long64\n");
	printf("range:   %u a %llu | %lld a %lld\n", 0, ulong64, long64, long64-1);
	printf("size:\t\t\t  %llu bytes | %llu bytes\n\n", sizeof(ulong64), sizeof(long64));

	system("pause");

	return 0;
}