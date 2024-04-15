#include<iostream>
using namespace std;
int main()
{
	int count = 0, count2 = 0, count3 = 0;
	int c = 0, c1 = 0, c2 = 0;
	int counth1 = 0, counth2 = 0, counth3 = 0;
	int h1 = 0, h2 = 0, h3 = 0;
	int a = 0, b = 0, d = 0, e = 0, f = 0, g = 0;
	char ch = '\0', ch1 = 'Y';
	cout << "<<<<<<<<<<<<<  WELCOME TO THE WORD SEARCH GAME  >>>>>>>>>>>>>>>>" << endl;
	cout << "<....<......<......<...>  In Easy Mood You Guess 1 Hidden Alphabet  <....>......>......>...>" << endl;
	cout << "<....<......<......<...>  In Hard Mood You Guess 2 Hidden Alphabet  <....>......>......>...>" << endl;
	cout << "Enter Your Choise Press E For Easy Mode and H for Hard: ";
	cin >> ch;
	if (ch >= 'a'&&ch <= 'z')
	{
		ch = ch - 32;
	}
	cout << "<----------------------------------------------------------------------------------------------------------->" << endl;
	switch (ch)
	{
	case'E':
	{
			   cout << "<<<<<<<<<<<<<  WELCOME TO THE WORD SEARCH GAME IN EASY MOOD >>>>>>>>>>>>>>>>" << endl;
			   cout << "<<<....................Guess the Hidden alphabets to Complete These Words....................>>>" << endl;
			   cout << "1st word is: " << "pl*yer" << endl;
			   cout << "2nd Word is : " << "hon*sty" << endl;
			   cout << "3rd Word is: " << "hor*e" << endl;
			   cout << "<----------------------------------------------------------------------------------------------------------->" << endl;
			   do
			   {


				   while (a < 5)
				   {
					   cout << "Guess hidden alphabte for,pl*yer: ";
					   cin >> ch;
					   if (ch == 'a' || ch == 'A')
					   {
						   cout << "^^^^^^^^^**********  CONGRATULATIONS  **********^^^^^^^^^" << endl;
						   cout << "You Guess Correct alphabet: " << "PLAYER" << endl;
						   count++;
						   break;
					   }
					   else
					   {
						   cout << "You Guess Wrong alphabet,Try Again: " << endl;
						   c++;
						   a++;
					   }

				   }
				   cout << endl;
				   while (b < 5)
				   {
					   cout << "NOW,Guess hidden alphabet for,hon*sty: ";
					   cin >> ch;
					   if (ch == 'e' || ch == 'E')
					   {
						   cout << "^^^^^^^^^**********  CONGRATULATIONS  **********^^^^^^^^^" << endl;
						   cout << "You Guess Correct alphabet: " << "HONESTY" << endl;
						   count2++;
						   break;
					   }
					   else
					   {
						   cout << "You Guess Wrong alphabet: " << endl;
						   c1++;
						   b++;
					   }
				   }
				   cout << endl;
				   while (d < 5)
				   {
					   cout << "NOW,Guess hidden alphabet for,hor*e: ";
					   cin >> ch;
					   if (ch == 's' || ch == 'S')
					   {
						   cout << "^^^^^^^^^**********  CONGRATULATIONS  **********^^^^^^^^^" << endl;
						   cout << "You Guess Correct alphabet: " << "HORSE" << endl;
						   count3++;
						   break;
					   }
					   else
					   {
						   cout << "You Guess Wrong alphabet: " << endl;
						   c2++;
						   d++;
					   }

				   }
				   cout << endl;
				   cout << "Do you want to play another time...?(Y/N): ";
				   cin >> ch1;
				   if (ch1 >= 'a'&&ch1 <= 'z')
				   {
					   ch1 = ch1 - 32;
					   if (ch1 == 'Y')
					   {
						   a = 0;
						   b = 0;
						   d = 0;
					   }
				   }
			   } while (ch1 == 'Y');
			   cout << "You WIn for the Word PLAYER: " << count << " Times" << endl;
			   cout << "You Loss for the Word PLAYER: " << c << " Times" << endl;
			   cout << "You WIn for the Word HONESTY: " << count2 << " Times" << endl;
			   cout << "You Loss for the Word HONESTY: " << c1 << " Times" << endl;
			   cout << "You WIn for the Word HORSE: " << count3 << " Times" << endl;
			   cout << "You Loss for the Word HORSE: " << c2 << " Times" << endl;
			   cout << "<----------------------------------------------------------------------------------------------------------->" << endl;
			   break;
	}
	case'H':
	{
			   cout << "<<<<<<<<<<<<<  WELCOME TO THE WORD SEARCH GAME IN HARD MOOD >>>>>>>>>>>>>>>>" << endl;
			   cout << "<<<....................Guess the Hidden alphabets to Complete These Words....................>>>" << endl;
			   cout << "<----------------------------------------------------------------------------------------------------------->" << endl;
			   cout << "1st Word is: " << " uni*ers*ty" << endl;
			   cout << "2nd Word is: " << " is*ama*ad " << endl;
			   cout << "3rd Word is: " << " co*pu*er" << endl;
			   do
			   {
				   while (e < 5)
				   {
					   cout << " Guess 1st hidden alphabet for, uni*ers*ty: ";
					   cin >> ch;
					   if (ch == 'v' || ch == 'V')
					   {
						   cout << "You Guess Correct 1st alphabet for: " << "UNIVERS*TY" << endl;
						   cout << " Guess 2nd hidden alphabet for UNIVERS*TY: ";
						   cin >> ch;
						   if (ch == 'i' || ch == 'I')
						   {
							   cout << "You Guess Correct 2nd alphabet: " << "UNIVERSITY" << endl;
							   cout << "^^^^^^^^^**********  CONGRATULATIONS YOU GUESS BOTH HIDDEN WORDS  **********^^^^^^^^^" << endl;
							   counth1++;
							   break;
						   }
						   else
						   {
							   cout << "You Guess Wrong 2nd alphabet,Try Again: " << endl;
							   h1++;
							   for (int p = 0; p < 5; p++)
							   {
								   cout << " Guess 2nd hidden alphabet for UNIVERS*TY: ";
								   cin >> ch;
								   if (ch == 'i' || ch == 'I')
								   {
									   cout << "You Guess Correct 2nd alphabet: " << "UNIVERSITY" << endl;
									   cout << "^^^^^^^^^**********  CONGRATULATIONS YOU GUESS BOTH HIDDEN WORDS  **********^^^^^^^^^" << endl;
									   counth1++;
									   break;
								   }
								   else
								   {
									   cout << "AGAIN,You Guess Wrong 2nd alphabet,Try Again: " << endl;
									   h1++;
									   e++;
								   }

							   }

						   }
					   }
					   if (ch == 'i' || ch == 'I')
					   {
						   break;
					   }
					   else
					   {
						   cout << "You Guess Wrong letter,Try Again: " << endl;
						   h1++;
						   e++;
					   }

				   }
				   cout << endl;
				   while (f < 5)
				   {
					   cout << "NOW, Guess 1st Hidden Alphabet for, is*ama*ad: ";
					   cin >> ch;
					   if (ch == 'l' || ch == 'L')
					   {
						   cout << "You Guess Correct 1st alphabet for: " << "ISLAMA*AD" << endl;
						   cout << " Guess 2nd Hidden alphabet for ISLAMA*AD: ";
						   cin >> ch;
						   if (ch == 'b' || ch == 'B')
						   {
							   cout << "You Guess Correct 2nd Alphabet: " << "ISLAMABAD" << endl;
							   cout << "^^^^^^^^^**********  CONGRATULATIONS YOU GUESS BOTH HIDDEN WORDS  **********^^^^^^^^^" << endl;
							   counth2++;
							   break;
						   }
						   else
						   {
							   cout << "You Guess Wrong 2nd Aphabet,Try Again: " << endl;
							   h2++;
							   for (int q = 0; q < 5; q++)
							   {
								   cout << " Guess 2nd Hidden alphabet for ISLAMA*AD: ";
								   cin >> ch;
								   if (ch == 'b' || ch == 'B')
								   {
									   cout << "You Guess Correct 2nd Alphabet: " << "ISLAMABAD" << endl;
									   cout << "^^^^^^^^^**********  CONGRATULATIONS YOU GUESS BOTH HIDDEN WORDS  **********^^^^^^^^^" << endl;
									   counth2++;
									   break;
								   }
								   else
								   {
									   cout << "AGAIN,You Guess Wrong 2nd Alphabet,Try Again: " << endl;
									   h2++;
									   f++;
								   }
							   }
						   }
					   }
					   if (ch == 'b' || ch == 'B')
					   {
						   break;
					   }
					   else
					   {
						   cout << "You Guess Wrong Alphabet,Try Again: " << endl;
						   h2++;
						   f++;
					   }

				   }
				   cout << endl;
				   while (g < 5)
				   {
					   cout << "NOW, Guess 1st Hidden Alphabet for, co*pu*er: ";
					   cin >> ch;
					   if (ch == 'm' || ch == 'M')
					   {
						   cout << "You Guess Correct 1st Aphabet for: " << "COMPU*ER" << endl;
						   cout << " Guess 2nd Hidden Alphabet for COMPU*ER: ";
						   cin >> ch;
						   if (ch == 't' || ch == 'T')
						   {
							   cout << "You Guess Correct 2nd Aphabet: " << " COMPUTER " << endl;
							   cout << "^^^^^^^^^**********  CONGRATULATIONS YOU GUESS BOTH HIDDEN WORDS  **********^^^^^^^^^" << endl;
							   counth3++;
							   break;
						   }
						   else
						   {
							   cout << "You Guess Wrong 2nd Alphabet,Try Again: " << endl;
							   h3++;
							   for (int t = 0; t < 5; t++)
							   {
								   cout << " Guess 2nd Hidden Alphabet for COMPU*ER: ";
								   cin >> ch;
								   if (ch == 't' || ch == 'T')
								   {
									   cout << "You Guess Correct 2nd Alphabet: " << " COMPUTER " << endl;
									   cout << "^^^^^^^^^**********  CONGRATULATIONS YOU GUESS BOTH HIDDEN WORDS  **********^^^^^^^^^" << endl;
									   counth3++;
									   break;
								   }
								   else
								   {
									   cout << "Again,You Guess Wrong 2nd Alphabet,Try Again: " << endl;
									   h3++;
									   g++;
								   }
							   }
						   }
					   }
					   if (ch == 't' || ch == 'T')
					   {
						   break;
					   }
					   else
					   {
						   cout << "You Guess Wrong letter: " << endl;
						   h3++;
						   g++;
					   }

				   }
				   cout << endl;
				   cout << "Do you want to play another time...?(Y/N): ";
				   cin >> ch1;
				   if (ch1 >= 'a'&&ch1 <= 'z')
				   {
					   ch1 = ch1 - 32;
					   if (ch1 == 'Y')
					   {
						   e = 0;
						   f = 0;
						   g = 0;
					   }
				   }
			   } while (ch1 == 'Y');
			   cout << "You WIn for the word UNIVERSITY: " << counth1 << " Times" << endl;
			   cout << "You Loss for the word UNIVERSITY: " << h1 << " Times" << endl;
			   cout << "You WIn for the word ISLAMABAD: " << counth2 << " Times" << endl;
			   cout << "You Loss for the word ISLAMABAD: " << h2 << " Times" << endl;
			   cout << "You WIn for the word COMPUTER: " << counth3 << " Times" << endl;
			   cout << "You Loss for the word COMPUTER: " << h3 << " Times" << endl;
			   cout << "<----------------------------------------------------------------------------------------------------------->" << endl;
			   break;
	}
	default:
	{
			   cout << "You Entered A Wrong Input" << endl;
			   cout << "<----------------------------------------------------------------------------------------------------------->" << endl;
			   break;
	}
	}
	system("pause");
	return 0;
}