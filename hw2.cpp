#include <iostream> 
#include <string>
using namespace std;

 int main(int argc, const char** argv)
  {
   string text;
   int key;
  

   cout<< "input a string ";
   getline(cin,text);
   string newtext = text;
   cout<< "input a key ";
   cin>> key;
   key = key% 26;
   
  for (int i = 0; i < text.length(); i++)
  {
    if (isupper((char)text[i]))
    {
      newtext[i] = tolower((char)text[i]);
    }
    else 
    {
      newtext[i] = toupper((char)text[i]);
    }
  }
  
  for (int i = 0; i < text.length(); i++)
  {
    newtext[i] = newtext[i] + key;
  }

  for (int i = 0; i < text.length(); i++)
  {
    if(newtext[i]== ' '+ key)
    newtext[i] = ' ';
  } 

  cout<< newtext<<"\n";
    for (int i = 0; i < text.length(); i++)
  {
    newtext[i] = newtext[i] - key;
  }
  cout<< newtext<<"\n";

    return 0;
  }


