#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include "clsDate.h"

using namespace std;

class clsUtil {

public:
	static void Srand() {

		srand((unsigned)time(NULL));
	}
	static int RandNumber(int From, int To)
	{
		int Number = rand() % (To - From + 1) + From;
		return Number;
	}

	static enum enCharType { SmallLetter = 1, CapitalLetter = 2, Digit = 3, MixChars = 4, SpecialCharacter = 5 };
	static char GetRandChar(enCharType CharType)
	{
		//to return MixCharacters; this way or the other one down there.

		if (CharType == enCharType::MixChars)
			CharType = (enCharType)RandNumber(1, 3);

		switch (CharType)
		{
		case enCharType::SmallLetter:
			return char(RandNumber(97, 122));
			break;
		case enCharType::CapitalLetter:
			return char(RandNumber(65, 90));
			break;
		case enCharType::SpecialCharacter:
			return char(RandNumber(33, 47));
			break;
		case enCharType::Digit:
			return char(RandNumber(48, 57));
			break;
			//way 2.
		/*case enCharType::MixChars:
			return GetRandChar((enCharType)RandNumber(1, 3));
			break;*/
		default:
			return char(RandNumber(65, 90));
			break;
		}
	}

	static string GenerateWord(enCharType CharType, short Length)
	{
		string Word = "";
		for (int i = 1; i <= Length; i++)
		{
			Word = Word + GetRandChar(CharType);
		}
		return Word;
	}
	static string GenerateKey(enCharType CharType, short Length)
	{
		string Key = "";
		Key += GenerateWord(CharType, Length) + "-";
		Key += GenerateWord(CharType, Length) + "-";
		Key += GenerateWord(CharType, Length) + "-";
		Key += GenerateWord(CharType, Length);
		return Key;
	}
	static void GenerateKeys(enCharType CharType, short Length, int NumberOfKeys)
	{
		for (int i = 1; i <= NumberOfKeys; i++)
		{
			cout << "Key [" << i << "] : " << GenerateKey(CharType, Length) << endl;
		}
	}

	static void SwapNumbers(int& A, int& B)
	{
		int Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void SwapNumbers(double& A, double& B)
	{
		double Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void SwapNumbers(bool& A, bool& B)
	{
		bool Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void SwapNumbers(char& A, char& B)
	{
		char Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void SwapNumbers(string& A, string& B)
	{
		string Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void SwapNumbers(clsDate& A, clsDate& B)
	{
		clsDate Temp;
		Temp = A;
		A = B;
		B = Temp;
	}

	static void ShuffleArray(int arr[100], short arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			SwapNumbers(arr[RandNumber(1, arrLength) - 1], arr[RandNumber(1, arrLength) - 1]);
		}
	}

	static void FillArrayWithRandNumbers(int arr[100], short arrLength, short From, short To)
	{
		for (int i = 0; i < arrLength; i++)
			arr[i] = RandNumber(From, To);
	}

	static void FillArrayWithRandWords(string arr[100], short arrLength, enCharType CharType, short WordLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr[i] = GenerateWord(CharType, WordLength);
	}

	static void FillArrayWithRandKeys(string arr[100], short arrLength, enCharType CharType, short WordLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr[i] = GenerateKey(CharType, WordLength);
	}

	static string Tabs(short NumberOfTabs) {

		string Tab;

		for (short i = 1; i <= NumberOfTabs; i++)
			Tab += "\t";

		return Tab;
	}

	static string EncryptText(string Text, short EncryptionKey)
	{
		for (int i = 0; i <= Text.length(); i++)
		{
			Text[i] = char((int)Text[i] + EncryptionKey);
		}
		return Text;
	}

	static string DecryptText(string EncText, short EncryptionKey)
	{
		for (int i = 0; i <= EncText.length(); i++)
		{
			EncText[i] = char((int)EncText[i] - EncryptionKey);
		}
		return EncText;
	}





};

