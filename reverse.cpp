#include <iostream>

char* reverse(char* word, int size);

char* reverse(char* word, int size){
  char* finalWord = new char[size];
  for(int i=0; i < size; i++){
    //Harry
    finalWord[i] = word[size - 1 - i];
  }
  return finalWord;
}

int main(){
  char words[] = "Harry";
  char* reversed = reverse(words, 5);
  std::cout << reversed;
  return 0;
}
