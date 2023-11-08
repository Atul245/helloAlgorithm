#Panagram : if a string contains all alphabets then it is a panagram.

#include <iostream> // Include the iostream library for input and output operations

using namespace std; // Use the standard namespace for convenience

bool approach(string str) // Define a function named approach that takes a string as input
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

int main() // Define the main function
{
  string str = "abcdefghijklmnopqrstuvwxyz"; // Declare a string variable and initialize it with the alphabet
  cout << approach(str); // Call the approach1 function and print the result
  return 0; // Return 0 to indicate successful execution
}

