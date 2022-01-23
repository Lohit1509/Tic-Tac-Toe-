#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k=0,end=1;
void welcome(){
int i;
window(1,1,80,25);
textbackground(11);
clrscr();
gotoxy(32,3);
textcolor(RED);
cprintf("TIC TAC TOE GAME");
gotoxy(34,5);
textcolor(BLUE);
cprintf("Version : 1.0");
gotoxy(28,11);
textcolor(YELLOW);
cprintf("Developed by : Lohit Jhajhria");
gotoxy(28,13);
cprintf("Reg no. : RA2111026010303");
gotoxy(5,20);
textcolor(RED);
cprintf("Please wait ");
textcolor(0);
for (i=1;i<=50;i++)
{printf("%c",220);
 delay(200);
}
delay(1000);

}
void game(){
window(1,1,80,25);
textbackground(11);
clrscr();
window(30,1,50,4);
textbackground(BLACK);
clrscr();
gotoxy(2,1);
textcolor(3);
cprintf("x -----> Player one");
gotoxy(2,2);
textcolor(3);
cprintf("\n0 -----> Player two");
}
void draw(){
window(32,10,48,16);
textbackground(BLACK);
clrscr();
gotoxy(5,2);
textcolor(GREEN);
cprintf("%c | %c | %c ",a[0],a[1],a[2]);
gotoxy(4,3);
cprintf("---|---|---");
gotoxy(5,4);
cprintf("%c | %c | %c ",a[3],a[4],a[5]);
gotoxy(4,5);
cprintf("---|---|---");
gotoxy(5,6);
cprintf("%c | %c | %c ",a[6],a[7],a[8]);
}
void getInput(){
char ch;
int i;
textcolor(BLACK);
gotoxy(15,20);
printf("\n\n\n\n\n\n\t\tEnter the position: / Want to exit->Y ");
scanf("%c",&ch);
if(ch=='Y' || ch=='y')
exit(0);
else{
if (k==0){
for (i=0;i<=8;i++){
if (a[i]==ch){
a[i]='x';
k=1;
break;
}
}     }
else {
for (i=0;i<=8;i++){
if (a[i]==ch){
a[i]='0';
k=0;
break;
}    }
}
}
}
int gameOver(){
	if(a[0]=='x' && a[1]=='x' && a[2]=='x')
	return(1);
	else if (a[0]=='x' && a[3]=='x' && a[6]=='x')
	return (1);
	else if (a[0]=='x' && a[4]=='x' && a[8]=='x')
	return (1);
	else if (a[1]=='x' && a[4]=='x' && a[7]=='x')
	return (1);
	else if (a[2]=='x' && a[5]=='x' && a[8]=='x')
	return (1);
	else if (a[2]=='x' && a[4]=='x' && a[6]=='x')
	return (1);
	else if (a[3]=='x' && a[4]=='x' && a[5]=='x')
	return (1);
	else if (a[6]=='x' && a[7]=='x' && a[8]=='x')
	return (1);

	else if (a[0]=='0' && a[1]=='0' && a[2]=='0')
	return (2);
	else if (a[0]=='0' && a[3]=='0' && a[6]=='0')
	return (2);
	else if (a[0]=='0' && a[4]=='0' && a[8]=='0')
	return (2);
	else if (a[1]=='0' && a[4]=='0' && a[7]=='0')
	return (2);
	else if (a[2]=='0' && a[5]=='0' && a[8]=='0')
	return (2);
	else if (a[2]=='0' && a[4]=='0' && a[6]=='0')
	return (2);
	else if (a[3]=='0' && a[4]=='0' && a[5]=='0')
	return (2);
	else if (a[6]=='0' && a[7]=='0' && a[8]=='0')
	return (2);
	else
	return 3;
}
void final(){
int var;
var=gameOver();
if (var==1){
printf("\n\n\n\n\n\n\n\n\t\tPlayer one has won the game! (Enter any key)");
getch();
end=0;
}
else if(var==2){
printf("\n\n\n\n\n\n\n\n\t\t\tPlayer two has won the game! (Enter any key)");
getch();
end=0;
}
else;

}
void main(){
  char c;
  clrscr();
  welcome();
  label:
  clrscr();
  game();
  draw();
  while (end){

  getInput();
  delay(200);
  clrscr();
  draw();
  final();
  }
  printf("\n\n\t\t\tDo you wanna play again-> Y/N ");
  fflush(stdin);
  scanf("%c",&c);
  if (c=='y' || c=='y'){
  a[0]='1';a[1]='2';a[2]='3';a[3]='4';a[4]='5';a[5]='6';
  a[6]='7';a[7]='8';a[8]='9';
  k=0; end=1;
  goto label;
  }
  printf("\n\n\t\t\tThank You For Playing The Game");
  getch();
}
