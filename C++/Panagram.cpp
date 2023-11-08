#Panagram: if a string contains all alphabets then it is a panagram.

#include <iostream> 

using namespace std; 

bool approach(string str) 
{
  for (char c = 'a'; c <= 'z'; c++) // Iterate over all lowercase letters
  {
    bool flg = false; // Initialize a flag variable to false
    for (int i = 0; i < str.length(); i++) // Iterate over all characters in the input string
    {
      if (c == str[i]) // Check if the current character in the input string is equal to the current letter
      {
        flg = true; // Set the flag variable to true
        break; // Break out of the inner loop if the character is found
      }
    }
    if (!flg) // If the flag variable is still false after the inner loop completes
    {
      return false; // Return false if not all letters are present
    }
  }
  return true; // Return true if all letters are present
}

int main()
{
  string str = "abcdefghijklmnopqrstuvwxyz"; 
  cout << approach(str); 
  return 0;
}

