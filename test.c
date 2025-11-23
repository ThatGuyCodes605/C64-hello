#include <stdio.h>
#include <conio.h>
#include <c64.h>
#include <string.h>
#include <unistd.h>

unsigned char tc = 0;
unsigned char bgc = 0;
unsigned char bc = 0;
char* text = "Hello, World";
size_t text_len = 0;
size_t i = 0;
int main(void){
  clrscr(); //clears screen
  bgc = bgcolor(COLOR_BLACK);
  bc = bordercolor(COLOR_BLACK);
  tc = textcolor(COLOR_WHITE); //sets text colour
  //printf(text); //prints hello world
  text_len = strlen(text);
  for (i = 0; i < text_len; i++) {
    textcolor(1 + (i % 15));
    cputc(text[i]);
    if (text[i] != ' ') sleep(1);
  }
  cgetc(); //wait until any key is pressed
  textcolor(tc);
  bordercolor(bc);
  bgcolor(bgc);
  clrscr();
  return 0;
}
