#include <iostream>
#include <string>
#include "clsDate.h"
#include "clsPeriod.h"
#include "clsUtil.h"

using namespace std;

int main() {
	
	clsUtil::Srand();

	cout << "Random Number : " << clsUtil::RandNumber(1, 9) << endl;
	cout << "Random Character : " << clsUtil::GetRandChar(clsUtil::MixChars) << endl;
	cout << "Generate Word : " << clsUtil::GenerateWord(clsUtil::CapitalLetter, 4) << endl;
	cout << "Generate key : " << clsUtil::GenerateKey(clsUtil::CapitalLetter, 4) << endl;
	cout << "Generate keys : \n";
	clsUtil::GenerateKeys(clsUtil::CapitalLetter, 4, 4);

	cout << "-----------------------------\n";

	int x = 100, y = 200;
	cout << "Numbers Before swap : " << x << " - " << y << endl;
	clsUtil::SwapNumbers(x, y);
	cout << "Numbers After swap : " << x << " - " << y << endl;

	cout << "-----------------------------\n";

	double w = 100.56, z = 200.23;
	cout << "Numbers Before swap : " << w << " - " << z << endl;
	clsUtil::SwapNumbers(w, z);
	cout << "Numbers After swap : " << w << " - " << z << endl;

	cout << "-----------------------------\n";

	clsDate Date1(23, 11, 2024), Date2(12, 1, 2028);
	cout << "Numbers Before swap : " << Date1.DateToString() << " - " << Date2.DateToString() << endl;
	clsUtil::SwapNumbers(Date1, Date2);
	cout << "Numbers After swap : " << Date1.DateToString() << " - " << Date2.DateToString() << endl;

	cout << "-----------------------------\n";

	int Arr1[5] = { 1,2,3,4,5 };
	clsUtil::ShuffleArray(Arr1, 5);
	cout << "Numbers after shuffling : ";
	for (short i = 0; i < 5; i++) {

		cout << Arr1[i] << " ";
	}

	cout << "\n-----------------------------\n";

	int Arr2[5];
	clsUtil::FillArrayWithRandNumbers(Arr2, 5, 20, 99);
	cout << "Array after fill with random numbers : ";
	for (short i = 0; i < 5; i++) {

		cout << Arr2[i] << " ";
	}

	cout << "\n-----------------------------\n";

	string Arr3[5];
	clsUtil::FillArrayWithRandWords(Arr3, 5, clsUtil::CapitalLetter, 4);
	cout << "Array after fill with random Words : ";
	for (short i = 0; i < 5; i++) {

		cout << Arr3[i] << " ";
	}

	cout << "\n-----------------------------\n";

	string Arr4[5];
	clsUtil::FillArrayWithRandKeys(Arr4, 5, clsUtil::CapitalLetter, 4);
	cout << "Array after fill with random Keys : \n";
	for (short i = 0; i < 5; i++) {

		cout << Arr4[i] << endl;
	}

	cout << "-----------------------------\n";

	cout << "Text 1 " << clsUtil::Tabs(2) << "Text 2" << endl;

	cout << "-----------------------------\n";

	const short EncryptionKey = 2;

	string TextAfterEncryption, TextAfterDecryption;
	string Text = "Hi, I am Abdelaziz Bahoumi, How are you doing";
	cout << "Text : " << Text << endl;
	
	TextAfterEncryption = clsUtil::EncryptText(Text, EncryptionKey);
	cout << "Text after encryption : " << TextAfterEncryption << endl;

	TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, EncryptionKey);
	cout << "Text after Decryption : " << TextAfterDecryption << endl;

	cout << "-----------------------------\n";


	return 0;
}

