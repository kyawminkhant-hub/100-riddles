
#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<time.h>

int ran;
int low=1,high=2,range=high-low+1;
int ran1;
int low1=1,high1=3,range1=high1-low1+1;
int wrong=0;int scr=0;int chkplyground=0;
int y2=0,x2=0;int y3=0;
int jy2=0;   int jchk=0;     int jwrong=0;int jscr=0;
int jy3=0;   int jy9=0;

char A='a',B='b',C='c',D='d',E='e',F='f',G='g',H='h',I='i';
char J='j',K='k',L='l',M='m',N='n',O='o',P='p',Q='q',R='r';
char S='s',T='t',U='u',V='v',W='w',X='x',Y='y',Z='z';


void easycolor1(int);
void easycolor2(int);
void easycolor3(int);
void mediumcolor1(int);
void mediumcolor2(int);
void mediumcolor3(int);
void hardcolor1(int);
void hardcolor2(int);
void hardcolor3(int);
void easyarray1();
void easyarray2();
void easyarray3();
void mediumarray1();
void mediumarray2();
void mediumarray3();
void hardarray1();
void hardarray2();
void hardarray3();
void rect12x12();
void rect10x10();
void rect9x9();
void interface(int);
void easy1();
void easy2();
void easy3();
void medium1();
void medium2();
void medium3();
void hard1();
void hard2();
void hard3();
void correctORwrong(int,int);
void cwgameover(int);
void cwgamewin(int);
void cwgamelose(int);
void cwmenu();
void board(int);
void jeasy1();
void jeasy2();
void jmedium1();
void jmedium2();
void jhard1();
void jhard2();
void jcorrectORwrong(int,int,int);
void jgameover(int);
void jgamewin(int);
void jgamelose(int);
void scmenu();
void wtwomenu();

void main()
{
int gd=DETECT,gm;
initgraph (&gd,&gm,"c://turboc3//bgi");

wtwomenu()  ;

getch();
closegraph;
}

void wtwomenu()
{
	 char cha;
	 int midx=getmaxx()/2;
	 int midy=getmaxy()/2;
 wrong=0;y2=0;y3=0;scr=0;
 jwrong=0;jy3=0;jscr=0;
 settextstyle(DEFAULT_FONT,HORIZ_DIR,6);
 setcolor(GREEN);

 outtextxy(midx-230,midy-30,"1");
 delay(500);
 outtextxy(midx-180,midy-30,"0");
 delay(500);
 outtextxy(midx-130,midy-30,"0");
 delay(500);
 outtextxy(midx-100,midy-30," ");
 delay(500);
 outtextxy(midx-30,midy-30,"R");
 delay(500);
 outtextxy(midx+20,midy-30,"I");
 delay(500);
 outtextxy(midx+70,midy-30,"D");
 delay(500);
 outtextxy(midx+120,midy-30,"D");
 delay(500);
 outtextxy(midx+170,midy-30,"L");
 delay(500);
 outtextxy(midx+220,midy-30,"E");
 delay(500);
 outtextxy(midx+270,midy-30,"S");





	/*
	setcolor(GREEN);
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 6);
	outtextxy(120, 180 ,"W2 SCHOOL");
	*/
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	setcolor(WHITE);
	outtextxy(230, 300,"(1) CROSSWORD");

	outtextxy(230, 325,"(2) SCRAMBLE");

	outtextxy(230,350,"(X) Exit");

do{
	cha=getch();
	if(cha=='x' || cha=='X')
	{
	cleardevice();
	exit(0);
	}
 switch(cha)
 {
  case '1':
	  cleardevice();
	  cwmenu();
 break;

 case '2':
	  cleardevice();
	  scmenu();
 break;
 }
}while(cha!='1'||cha!='2'||cha!='x'||cha!='X');
 getch();


}

void cwmenu()
{
 wrong=0;y2=0;y3=0;scr=0;
 char cha;
 int midx=getmaxx()/2;
 int midy=getmaxy()/2;
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 setcolor(YELLOW);

 outtextxy(midx-95,midy-50,"C");
 rectangle(215,180,245,210);
 delay(100);
 outtextxy(midx-65,midy-50,"R");
 rectangle(245,180,275,210);
 delay(100);
 outtextxy(midx-35,midy-50,"O");
 rectangle(275,180,305,210);
 delay(100);
 outtextxy(midx-5,midy-50,"S");
 rectangle(305,180,335,210);
 delay(100);
 outtextxy(midx+25,midy-50,"S");
 rectangle(335,180,365,210);
 delay(100);
 outtextxy(midx+55,midy-50,"W");
 rectangle(365,180,395,210);
 delay(100);
 outtextxy(midx+85,midy-50,"O");
 rectangle(395,180,425,210);
 delay(100);
 outtextxy(midx+115,midy-50,"R");
 rectangle(425,180,455,210);
 delay(100);
 outtextxy(midx+145,midy-50,"D");
 rectangle(455,180,485,210);
// settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
// outtextxy(midx-300,midy+10,"(choose the mode)")
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

 outtextxy(20,15,"Back to mainmenu");
 setcolor(RED);
 outtextxy(150,16,"(B)");
 setcolor(YELLOW);
 outtextxy(500,15,"Exit from game");
 setcolor(RED);
 outtextxy(615,16,"(X)");

 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);


 setcolor(GREEN);
 outtextxy(midx-95,260,"(1)EASY");
 setcolor(BLUE);
 outtextxy(midx-95,310,"(2)MEDIUM");
 setcolor(RED);
 outtextxy(midx-95,360,"(3)HARD");


 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
do{
 cha=getch();

 if(cha=='x' || cha=='X')
 {
 cleardevice();
 exit(0);
 }
 if(cha=='b'||cha=='B')
 {
  cleardevice();
  wtwomenu();
 }

 switch(cha)
 {
  case '1':

	  cleardevice();
	  setcolor(GREEN);

	  srand(time(NULL));
	  ran1=low1+rand()%range1;

	  if(ran1==1)
	  {
	  rect12x12();
	  easyarray1();
	  interface(9);
	  easy1();
	  }
	  if(ran1==2)
	  {
	  rect9x9();
	  easyarray2();
	  interface(9);
	  easy2();
	  }
	  if(ran1==3)
	  {
	  rect10x10();
	  easyarray3();
	  interface(9);
	  easy3();
	  }
 break;

 case '2':
	  cleardevice();
	  setcolor(BLUE);

	  srand(time(NULL));
	  ran1=low1+rand()%range1;

	  if(ran1==1)
	  {
	  rect12x12();
	  mediumarray1();
	  interface(10);
	  medium1();
	  }
	  if(ran1==2)
	  {
	  rect12x12();
	  mediumarray2();
	  interface(9);
	  medium2();
	  }
	  if(ran1==3)
	  {
	  rect10x10();
	  mediumarray3();
	  interface(8);
	  medium3();
	  }

 break;

 case '3':

	  cleardevice();
	  setcolor(RED);

	  srand(time(NULL));
	  ran1=low1+rand()%range1;

	  if(ran1==1)
	  {
	  rect12x12();
	  hardarray1();
	  interface(11);
	  hard1();
	  }
	  if(ran1==2)
	  {
	  rect12x12();
	  hardarray2();
	  interface(12);
	  hard2();
	  }
	  if(ran1==3)
	  {
	  rect10x10();
	  hardarray3();
	  interface(9);
	  hard3();
	  }
 break;



 }
  }while(cha!='1'||cha!='2'||cha!='3'||cha!='x'||cha!='X'||cha!='b'||cha!='B');
}

void scmenu()
{
 jwrong=0;jy3=0;jscr=0;
 int midx=getmaxx()/2;
 int midy=getmaxy()/2;
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 setcolor(LIGHTCYAN);

 outtextxy(midx-95,midy-50,"S");
 circle(230,195,15);
 delay(100);
 outtextxy(midx-95+30,midy-50,"C");
 circle(230+29,195,15);
 delay(100);
 outtextxy(midx-95+30*2,midy-50,"R");
 circle(230+29*2,195,15);
 delay(100);
 outtextxy(midx-95+30*3,midy-50,"A");
 circle(230+29*3,195,15);
 delay(100);
 outtextxy(midx-95+30*4,midy-50,"M");
 circle(230+29*4,195,15);
 delay(100);
 outtextxy(midx-95+30*5,midy-50,"B");
 circle(230+29*5,195,15);
 delay(100);
 outtextxy(midx-95+30*6,midy-50,"L");
 circle(230+29*6,195,15);
 delay(100);
 outtextxy(midx-95+30*7,midy-50,"E");
 circle(230+29*7,195,15);
 delay(100);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

 outtextxy(20,15,"Back to mainmenu");
 setcolor(RED);
 outtextxy(150,16,"(B)");
 setcolor(LIGHTCYAN);
 outtextxy(500,15,"Exit from game");
 setcolor(RED);
 outtextxy(615,16,"(X)");

 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);

 setcolor(GREEN);
 outtextxy(240,250,"(1)Easy");
 setcolor(BLUE);
 outtextxy(240,300,"(2)Medium");
 setcolor(RED);
 outtextxy(240,350,"(3)Hard");
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 int choice;
do{
 choice=getch();

 if(choice=='x' || choice=='X')
 {
 cleardevice();
 exit(0);
 }

 if(choice=='b'||choice=='B')
 {
  cleardevice();
  wtwomenu();
 }

     switch(choice)
     {
     case '1':
	cleardevice();

	srand(time(NULL));
	ran=low+rand()%range;

	if(ran==1)
	{
	jchk=1;
	board(jchk);
	jeasy1();
	}
	if(ran==2)
	{

	jchk=2;
	board(jchk);
	jeasy2();
	}

     break;



     case '2':
	cleardevice();

	srand(time(NULL));
	ran=low+rand()%range;

	if(ran==1)
	{
	jchk=3;
	board(jchk);
	jmedium1();
	}
	if(ran==2)
	{

	jchk=4;
	board(jchk);
	jmedium2();
	}

     break;

     case '3':
	 cleardevice();

	srand(time(NULL));
	ran=low+rand()%range;

	if(ran==1)
	{
	jchk=5;
	board(jchk);
	jhard1();
	}
	if(ran==2)
	{

	jchk=6;
	board(jchk);
	jhard2();
	}

     break;


     };
}while(choice!='1'||choice!='2'||choice!='3'||choice!='x'||choice!='X'||choice!='b'||choice!='B');

}

void rect12x12()
{


int j=0;
int k=0;

for(int i=1;i<=144;i++)
 {
  if(i==13||i==25||i==37||i==49||i==61||i==73||i==85||i==97||i==109||i==121||i==133)
  {
  j=0;k+=32;
  }

  rectangle(0+j,21+k,24+j,53+k);
  j+=24;
 }
}
void rect10x10()
{


int j=0;
int k=0;

for(int i=1;i<=100;i++)
 {
  if(i==11||i==21||i==31||i==41||i==51||i==61||i==71||i==81||i==91)
  {
  j=0;k+=32;
  }

  rectangle(0+j,21+k,24+j,53+k);
  j+=24;
 }
}



void rect9x9()
{


int j=0;
int k=0;

for(int i=1;i<=81;i++)
 {
  if(i==10||i==19||i==28||i==37||i==46||i==55||i==64||i==73)
  {
  j=0;k+=32;
  }

  rectangle(0+j,21+k,24+j,53+k);
  j+=24;
 }
}



void easyarray1()
{
int x=0,y=0;
gotoxy(1,3);
char c[12][12]={
		  {'f' ,'c','g','p','z','l','e','b','j','a','p','x'},
		  {'g' ,'r','c','z','t','f','z','d','r','z','i','w'},
		  {  A ,'w','v', G ,'q', B , O , Y ,'t', S , H , Y },
		  {  I ,'q','a', I ,'p','l', B ,'d','x','z', O ,'q'},
		  {  M ,'l','c', N ,'q','q', E ,'d','r','b', N ,'p'},
		  {  O ,'x','s', G ,'z','m', S ,'c','e','q', E ,'v'},
		  {  D ,'v','q', E ,'p','v', I ,'z','x','p', S ,'e'},
		  {  E ,'z','g', R ,'z','f', T ,'d','r','m', T ,'c'},
		  {  L , E , S , S ,'p', B , Y , E ,'e','c', Y ,'r'},
		  {'o' ,'r','l','b','t','f','z','d','r','z','a','l'},
		  {'q' ,'w','t','r','i','k','f','c','y','o','z','k'},
		  {'v' ,'z','w','r','x','y','g','h','x','l','q','a'},
		};


for(int g=0;g<=11;g++)
 {
  for(int h=0;h<=11;h++)
  {
  gotoxy(2+x,3+y);

  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}

void easyarray2()
{
	 int x=0,y=0;
	 gotoxy(1,3);
	 char c[9][9]={
			{ 'q','k','a','z','q','a','i','j','p' },
			{ 'x','i','w','p','l','u','k','p','g' },
			{  Y ,'b','b', W , H , O , M , A , P  },
			{  O ,'c','z','q', O ,'i', A ,'u','x' },
			{  U ,'x','x','i', R ,'w', J , A , R  },
			{  T ,'k','q','x', S ,'x', O ,'n','z' },
			{  H , U , E , B , E , T , R , A , T  },
			{ 'z','n','l','k','w','k','t','q','z' },
			{ 'p','f','n','p','z','q','c','p','x' },
		      };

 for(int g=0;g<=8;g++)
 {
  for(int h=0;h<=8;h++)
  {
  gotoxy(2+x,3+y);

  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}

void easyarray3()
{
	 int x=0,y=0;
	 gotoxy(1,3);
	 char c[10][10]={
				{'b', B , A , N , D , G , I , F , T ,'l' },
				{'c', A ,'h','x', A , A ,'s','e', O ,'y' },
				{'j', L ,'u','z', W , L ,'m','v', A ,'q' },
				{'t', L , E , A , N , L , O , A , D ,'k' },
				{'x', E ,'z','p','z', E ,'i','y','c','z' },
				{'k', A ,'v','b','o', R ,'g','x','j','g' },
				{'f', V ,'a','l','p', Y ,'f','h','y','r' },
				{'g', E ,'q','j','d', A ,'x','t','x','c' },
				{'r', Y ,'x','w','e', W ,'c','q','v','b' },
				{'d', E ,'z','j','w', N ,'b','x','z','i' },

			 };
 for(int g=0;g<=9;g++)
 {
  for(int h=0;h<=9;h++)
  {
  gotoxy(2+x,3+y);

  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}



void hardarray1()
{
int x=0,y=0;
gotoxy(1,3);
char c[12][12]={
		  {'f' ,'c','g','p','z','l','e','b','j','a','p','x'},
		  {'g' ,'r','c','z','t','f','z','d','r','z','i','w'},
		  {'x' ,'w','v','d','i','a','h','f','t','u','q','b'},
		  {  S , T , A , R , B , I , N , T ,'x','z','x', M },
		  {  T ,'l','c', I , A ,'f', O ,'d', H ,'u', A ,'p'},
		  {  O , P , E , N , T ,'j', I ,'q','e', E ,'q','v'},
		  {  R ,'v','q', G , C ,'l', S ,'d', T ,'p', M ,'e'},
		  {  E , Y , E ,'z', H , U , E , S ,'r','m','w', E },
		  {'a' ,'s','x','r','i','z','p','t','e','c','o','r'},
		  {'o' ,'r','l','b','t','f','z','d','r','z','a','l'},
		  {'q' ,'w','t','r','i','k','f','c','y','o','z','k'},
		  {'v' ,'z','w','r','x','y','g','h','x','l','q','a'},
		};


for(int g=0;g<=11;g++)
 {
  for(int h=0;h<=11;h++)
  {
  gotoxy(2+x,3+y);
  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}

void hardarray2()
{
	 int x=0,y=0;
	 gotoxy(1,3);
	 char c[12][12]={
			 {'d','v','x','i','l','u','x','a','x','d','j','e' },
			 { S ,'d','j','y','b','z','w','f','n','p','m','l' },
			 {'e', C ,'z','q','j','l','q','k','z','b','t','j' },
			 {'c','t', I , M , A , G , E ,'c','e','u','h','a' },
			 {'o','w','q', E ,'k', T , O , O , L ,'b','m','d' },
			 {'g','x','t', E , N , A , P , O ,'b','y','k','z' },
			 {'v','l','p', T ,'g', T ,'r', W , D ,'b','x', L  },
			 {'w','d','m','q','w','r', I , L ,'d','z','y', A  },
			 {'z','u','y','p','k','p','x', S ,'q','x','h', Z  },
			 {'r','q','x','a','n', B , A , T , T , E , R , Y  },
			 {'b', C , A , C , T , I , N , S , I , D , E ,'g' },
			 {'w','r','t','s','i', G ,'e','f','g','b','i','a' },
			};

 for(int g=0;g<=11;g++)
 {
  for(int h=0;h<=11;h++)
  {
  gotoxy(2+x,3+y);

  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}

void hardarray3()
{
	 int x=0,y=0;
	 gotoxy(1,3);
	 char c[10][10]={
				{ D , O , G ,'n','b','v','z','v','w','b' },
				{'k', E ,'q', O ,'x','y','s','u','x','m' },
				{'w','o', L ,'x', R ,'q', T , E , S , T  },
				{'c','p', A , I ,'j', G , R ,'u','q','t' },
				{'q','z', U ,'z', C ,'z', E ,'x','r','o' },
				{'k','i', G ,'r','x', I , E , O ,'f','g' },
				{'h', T , H , U , M , B , O , X , U ,'t' },
				{'x','a','p','v','b','j','x', U ,'x', S  },
				{'k','d','x','l', S , T , R , E , S , S  },
				{'n','c','j','g','y','w','b','c','e','d' },
			    };

 for(int g=0;g<=9;g++)
 {
  for(int h=0;h<=9;h++)
  {
  gotoxy(2+x,3+y);

  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}

void mediumarray1()
{
int x=0,y=0;
gotoxy(1,3);
char c[12][12]={   	   {  R ,'q','t','y','z','q','w','g','q','t','q','k'},
			   { 'z', E ,'y','i','x','k','p','x','z','s','t','r'},
			   { 'q', A , F , R , A , I , D ,'z','o','y','a','b'},
			   { 'p', G ,'x', E, 'q','z','x','k','e','q','q','q'},
			   { 'z', L , I , A,  R ,'g','q','q','k','t','z','x'},
			   { 'x', E ,'i','x','z', E ,'z', W , O , R , K ,'a'},
			   { 'c', D ,'g','s','q','q', N ,'c','q','q','o','t'},
			   { 'r', G , E , N , I , U , S , C , O , D , E ,'v'},
			   { 'l', E ,'q', G , O , O , G , L , E ,'q','z','q'},
			   { 'o','i','w','x', R ,'o','q','i','a','z','x','x'},
			   { 'k','z','q','g', U ,'z','s','l','q','x','q','o'},
			   { 'z','x','s','p', N ,'q','v','x','z','c','b','q'},
	       };



for(int g=0;g<=11;g++)
 {
  for(int h=0;h<=11;h++)
  {
  gotoxy(2+x,3+y);
  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}

void mediumarray2()
{
int x=0,y=0;
gotoxy(1,3);
char c[12][12]={
		  {'f' , W , O , L , F ,'l','e','b','j','a','p','x'},
		  {'g' ,'x', H ,'z','t','f','z','d','r','z','i','w'},
		  {'n' ,'w','v', A ,'q','c','n','x','t','d','e', Y },
		  {'b' ,'q','b','d', L ,'l','g','d','x','z','v','q'},
		  {'t' ,'l','c','k', Z , E , B , R , A ,'b','y','p'},
		  { T  ,'x','s','q','j','m', I , S ,'e','q','o','v'},
		  { F  , I , S , H , U , M , A , N ,'l','u','a','e'},
		  {'o' ,'z', G ,'c', B ,'k','z', A , S ,'m','l','c'},
		  {'z' ,'x','k', E , I ,'h','f', K ,'c', E ,'m','r'},
		  {'b' ,'r','l','b', R ,'j','z', E ,'x','h', C ,'l'},
		  {'y' ,'t','t','r', D ,'z','f','c','y','o','z', T },
		  {'q' ,'d','w','r','x','y','g','h','x','l','q','a'},
		};


for(int g=0;g<=11;g++)
 {
  for(int h=0;h<=11;h++)
  {
  gotoxy(2+x,3+y);

  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}

void mediumarray3()
{
int x=0,y=0;
gotoxy(1,3);
char c[10][10]={   	   {  S ,'b','f','d','y', S ,'e','p','b','a'},
			   { 'x', P , O , T , A , T , O ,'x','w','o'},
			   { 'c','n', A ,'q','z','r','d', U ,'z','m'},
			   { 'p','s', E , G , G ,'f','g','n', P ,'x'},
			   { 'u','l','m','t', H , M ,'z','e', I ,'q'},
			   {  I , C , E , C , R , E , A , M , Z ,'o'},
			   { 'r','t', A ,'z','i', A , T ,'h', Z ,'v'},
			   { 'v','y','i', K ,'l', T ,'k', T , A ,'d'},
			   { 'x','b','t','j', E ,'u','i','j', I ,'x'},
			   { 'y','c','w','b','z','g','x','s','y','c'},
		      };



for(int g=0;g<=9;g++)
 {
  for(int h=0;h<=9;h++)
  {
  gotoxy(2+x,3+y);
  cout<<c[g][h];
  x+=3;
  }
  x=0;
  y+=2;
 }
}

void interface(int num)
{
setcolor(WHITE);
outtextxy(0,450,"BACK TO MAINMENU");
setcolor(RED);
outtextxy(130,450,"(B)");
setcolor(WHITE);
outtextxy(262,450,"BACK TO MENU");
setcolor(RED);
outtextxy(360,450,"(M)");
setcolor(WHITE);
outtextxy(480,450,"EXIT FROM GAME");
setcolor(RED);
outtextxy(600,450,"(X)");

 outtextxy(310,30,"RULES:");
 setcolor(WHITE);
 outtextxy(325,70,"Words should be");
 setcolor(GREEN);
 outtextxy(450,70,"meaingful");
 setcolor(WHITE);
 outtextxy(325,50,"Find the words");
 setcolor(GREEN);
 outtextxy(440,50,"horizotally & vertically");
 setcolor(RED);
 outtextxy(350,60,"(also Diagonally in Medium and Hard)");
 setcolor(WHITE);
 outtextxy(325,110,"Player can be wrong");
 setcolor(GREEN);
 outtextxy(485,110,"only three times");
 setcolor(WHITE);
 outtextxy(325,90,"Words can      one another");
 setcolor(GREEN);
 outtextxy(405,90,"link");
 setcolor(RED);
 outtextxy(310,130,"-----------------------------------------");
 setcolor(WHITE);
 outtextxy(340,150,"Words Puzzle");
 gotoxy(40,10);
 cout<<num;
 outtextxy(540,150,"WRONG:");
 setcolor(RED);
 outtextxy(310,50,"1.");
 outtextxy(310,70,"2.");
 outtextxy(310,90,"3.");
 outtextxy(310,110,"4.");
 setcolor(WHITE);
 outtextxy(310,387,"SCORE:");
}

void easy1()
{
int find1=0;


char easypattern[15][10]={"aim","model","less","ginger","boy","obesity","bye","shy","honesty","mode","sit","one","ones","nest","sty"};
char input[30];

 for(int n=1;n<=9;n++)
 {
  chkplyground=1;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"m")==0||strcmp(input,"M")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }


  for(int p=0;p<15;p++)
  {
   if(strcmp(input,easypattern[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }

 if(scr!=9)
 cwgamelose(chkplyground);

 if(scr==9)
 cwgamewin(chkplyground);

 scr=0;

}

/* Easy2 Pattern= LIE */

void easy2()
{
int find1=0;


char easypattern2[12][10]={"youth","hue","whom","horse","bet","map","major","jar","rat","you","out","be"};
char input[30];

 for(int n=1;n<=9;n++)
 {
  chkplyground=2;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"m")==0||strcmp(input,"M")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }


  for(int p=0;p<12;p++)
  {
   if(strcmp(input,easypattern2[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }

 if(scr!=9)
 cwgamelose(chkplyground);

 if(scr==9)
 cwgamewin(chkplyground);

 scr=0;

}

/* Easy3 Pattern= PP */

void easy3()
{
int find1=0;


char easypattern3[15][10]={"band","ball","leave","eye","dawn","lean","gallery","yawn","gift","toad","load","and","all","eave","gall"};
char input[30];

 for(int n=1;n<=11;n++)
 {
  chkplyground=3;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"m")==0||strcmp(input,"M")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }


  for(int p=0;p<15;p++)
  {
   if(strcmp(input,easypattern3[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }

 if(scr!=11)
 cwgamelose(chkplyground);

 if(scr==11)
 cwgamewin(chkplyground);

 scr=0;

}

void medium1()
{
int find1=0;


char mediumpattern1[14][12]={"reference","afraid","eagle","edge","liar","genius","code","work","google","run","refer","raid","go","ogle"};
char input[30];

 for(int n=1;n<=10;n++)
 {
  chkplyground=4;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"M")==0||strcmp(input,"m")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }



  for(int p=0;p<14;p++)
  {
   if(strcmp(input,mediumpattern1[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }


  if(scr!=10)
  cwgamelose(chkplyground);

  if(scr==10)
  cwgamewin(chkplyground);

  scr=0;
}

/* Medium2 Pattern=  */

void medium2()
{
int find1=0;


char mediumpattern2[13][10]={"wolf","whale","zebra","tiger","fish","human","bird","insect","snake","hale","bra","man","sect"};
char input[30];

 for(int n=1;n<=9;n++)
 {
  chkplyground=5;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"m")==0||strcmp(input,"M")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }


  for(int p=0;p<13;p++)
  {
   if(strcmp(input,mediumpattern2[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }

 if(scr!=9)
 cwgamelose(chkplyground);

 if(scr==9)
 cwgamewin(chkplyground);

 scr=0;

}

/* Medium3 Pattern=  */

void medium3()
{
int find1=0;


char mediumpattern3[13][10]={"spaghetti","potato","soup","egg","icecream","cake","meat","pizza","het","ice","cream","eat","to"};
char input[30];

 for(int n=1;n<=8;n++)
 {
  chkplyground=6;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"m")==0||strcmp(input,"M")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }


  for(int p=0;p<13;p++)
  {
   if(strcmp(input,mediumpattern3[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }

 if(scr!=8)
 cwgamelose(chkplyground);

 if(scr==8)
 cwgamewin(chkplyground);

 scr=0;

}





void hard1()
{
int find1=0;


char hardpattern[22][12]={"store","star","open","eye","ring","batch","bin","hue","noise","theme","steam","tore","tar","pen","bat","no","the","me","them","team","tea","to"};
char input[30];

 for(int n=1;n<=11;n++)
 {
  chkplyground=7;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"M")==0||strcmp(input,"m")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }


  for(int p=0;p<22;p++)
  {
   if(strcmp(input,hardpattern[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }


  if(scr!=11)
  cwgamelose(chkplyground);

  if(scr==11)
  cwgamewin(chkplyground);

  scr=0;
}

/* Hard2 Pattern=  */

void hard2()
{
int find1=0;


char hardpattern2[22][10]={"scientist","image","tool","good","owl","nap","meet","battery","lazy","cacti","inside","big","mage","age","too","to","go","me","bat","act","in","side"};
char input[30];

 for(int n=1;n<=12;n++)
 {
  chkplyground=8;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"m")==0||strcmp(input,"M")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }


  for(int p=0;p<22;p++)
  {
   if(strcmp(input,hardpattern2[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }

 if(scr!=12)
 cwgamelose(chkplyground);

 if(scr==12)
 cwgamewin(chkplyground);

 scr=0;

}

/* Hard3 Pattern=  */

void hard3()
{
int find1=0;


char hardpattern3[14][10]={"dog","delicious","gorgeous","laugh","test","tree","thumb","box","stress","us","orge","geo","hum","tress"};
char input[30];

 for(int n=1;n<=9;n++)
 {
  chkplyground=9;

  gotoxy(42,12+y2);
  cout<<n<<". ";
  cin>>input;

  if(strcmp(input,"x")==0||strcmp(input,"X")==0)
  {
  cleardevice();
  exit(0);
  }
  if(strcmp(input,"m")==0||strcmp(input,"M")==0)
  {
  cleardevice();
  cwmenu();
  }
  if(strcmp(input,"b")==0||strcmp(input,"B")==0)
  {
  cleardevice();
  wtwomenu();
  }


  for(int p=0;p<14;p++)
  {
   if(strcmp(input,hardpattern3[p])==0)
   find1=p+1;
  }

  correctORwrong(find1,chkplyground);
  find1=0;
 }

 if(scr!=9)
 cwgamelose(chkplyground);

 if(scr==9)
 cwgamewin(chkplyground);

 scr=0;

}








void correctORwrong(int find,int getcpg)
{
  if(find!=0)
  {
  if(getcpg==1)
  easycolor1(find);
  if(getcpg==2)
  easycolor2(find);
  if(getcpg==3)
  easycolor3(find);
  if(getcpg==4)
  mediumcolor1(find);
  if(getcpg==5)
  mediumcolor2(find);
  if(getcpg==6)
  mediumcolor3(find);
  if(getcpg==7)
  hardcolor1(find);
  if(getcpg==8)
  hardcolor2(find);
  if(getcpg==9)
  hardcolor3(find);



  setcolor(GREEN);
  outtextxy(540,180+y3,"CORRECT");
  scr++;
  gotoxy(46,25);
  cout<<scr;


  find=0;
  y3+=16;
  y2+=1;
  }

  else
  {
  setcolor(RED);
  gotoxy(70,16+y2);
  outtextxy(540,180+y3,"WRONG");y3+=16;
  y2+=1;
  wrong++;

  if(wrong==1)
  outtextxy(587,150,"X");
  if(wrong==2)
  outtextxy(595,150,"X");
  if(wrong==3)
  outtextxy(605,150,"X");

  cwgameover(wrong);

  }
}




void cwgamelose(int getplyground)
{
int midx=getmaxx()/2;
int midy=getmaxy()/2;
char cha;


  delay(750);
  cleardevice();
  setcolor(RED);
  outtextxy(midx-60,midy,"SORRY, YOU LOSE THE GAME");
  gotoxy(40,14);
  cout<<"YOUR SCORE:"<<scr;
  outtextxy(midx-70,midy+15,"Do you want to try again(y/n)");

  wrong=0;y2=0;y3=0;scr=0;

do{
  cha=getch();

  switch(cha)
  {
  case'y':cleardevice();
	  if(getplyground==1)
	  {
	  setcolor(GREEN);
	  rect12x12();
	  easyarray1();
	  interface(9);
	  easy1();
	  }
	  if(getplyground==2)
	  {
	  setcolor(GREEN);
	  rect9x9();
	  easyarray2();
	  interface(9);
	  easy2();
	  }
	  if(getplyground==3)
	  {
	  setcolor(GREEN) ;
	  rect10x10();
	  easyarray3();
	  interface(10);
	  easy3();
	  }

	  if(getplyground==4)
	  {
	  setcolor(BLUE);
	  rect12x12();
	  mediumarray1();
	  interface(10);
	  medium1();
	  }
	  if(getplyground==5)
	  {
	  setcolor(BLUE);
	  rect12x12();
	  mediumarray2();
	  interface(9);
	  medium2();
	  }
	  if(getplyground==6)
	  {
	  setcolor(BLUE) ;
	  rect10x10();
	  mediumarray3();
	  interface(8);
	  medium3();
	  }

	  if(getplyground==7)
	  {
	  setcolor(RED);
	  rect12x12();
	  hardarray1();
	  interface(11);
	  hard1();
	  }
	  if(getplyground==8)
	  {
	  setcolor(RED);
	  rect12x12();
	  hardarray2();
	  interface(12);
	  hard2();
	  }
	  if(getplyground==9)
	  {
	  setcolor(RED) ;
	  rect10x10();
	  hardarray3();
	  interface(9);
	  hard3();
	  }

  break;
  case'n':cleardevice();
	  cwmenu();
  break;
  }
}while(cha!='y'||cha!='Y'||cha!='n'||cha!='N');
}

void cwgameover(int getwrong)
{
int midx=getmaxx()/2;
int midy=getmaxy()/2;
char cha;

 if(getwrong==3)
 {
  delay(750);
  cleardevice();
  setcolor(RED);
  outtextxy(midx,midy,"GAME OVER");
  outtextxy(midx-81,midy+15,"Do you want to continue(y/n)");

  wrong=0;y2=0;y3=0;scr=0;
do{
  cha=getch();

  switch(cha)
  {
  case'y':cleardevice();
	  cwmenu();
  break;
  case'n':cleardevice();
	  wtwomenu();
  break;
  }
}while(cha!='Y'||cha!='y'||cha!='N'||cha!='n');

 }
}
void cwgamewin(int getplyground)
{ char cha;

  int midx=getmaxx()/2;
  int midy=getmaxy()/2;

  delay(2000);
  cleardevice();
  setcolor(GREEN);
  outtextxy(midx-120,midy,"CONGRATULATION!, YOU WON THE GAME");
  outtextxy(midx-110,midy+15,"Do you want to play again(y/n)");
  wrong=0;y2=0;y3=0;scr=0;
do{
  cha=getch();
  switch(cha)
  {
  case'y':cleardevice();

	  if(getplyground==1)
	  {
	  setcolor(GREEN);
	  rect12x12();
	  easyarray1();
	  interface(9);
	  easy1();
	  }
	  if(getplyground==2)
	  {
	  setcolor(GREEN);
	  rect9x9();
	  easyarray2();
	  interface(9);
	  easy2();
	  }
	  if(getplyground==3)
	  {
	  setcolor(GREEN) ;
	  rect10x10();
	  easyarray3();
	  interface(10);
	  easy3();
	  }

	  if(getplyground==4)
	  {
	  setcolor(BLUE);
	  rect12x12();
	  mediumarray1();
	  interface(10);
	  medium1();
	  }
	  if(getplyground==5)
	  {
	  setcolor(BLUE);
	  rect12x12();
	  mediumarray2();
	  interface(9);
	  medium2();
	  }
	  if(getplyground==6)
	  {
	  setcolor(BLUE) ;
	  rect10x10();
	  mediumarray3();
	  interface(8);
	  medium3();
	  }

	  if(getplyground==7)
	  {
	  setcolor(RED);
	  rect12x12();
	  hardarray1();
	  interface(11);
	  hard1();
	  }
	  if(getplyground==8)
	  {
	  setcolor(RED);
	  rect12x12();
	  hardarray2();
	  interface(12);
	  hard2();
	  }
	  if(getplyground==9)
	  {
	  setcolor(RED) ;
	  rect10x10();
	  hardarray3();
	  interface(9);
	  hard3();
	  }
  break;
  case'n':cleardevice();
	  cwmenu();
  break;
  }
}while(cha!='y'||cha!='Y'||cha!='n'||cha!='N');
}

void easycolor1(int getfind)
{


 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

 char abc[100];

 if(getfind==1)
 {
 char ary[3]={'a','i','m'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2,7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9,99+oy,abc);
 }
 }

 if(getfind==2)
 {
 char ary[5]={'m','o','d','e','l'};
 for(int i=0,gx=0,gy=0,ox=0,oy=64;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+gx,11+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,99+oy,abc);
 }
 }
 if(getfind==10)
 {
 char ary[4]={'m','o','d','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=64;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+gx,11+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,99+oy,abc);
 }
 }


 if(getfind==3)
 {
 char ary[4]={'l','e','s','s'};
 for(int i=0,gx=0,gy=0,ox=0,oy=32*6;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,19+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,99+oy,abc);
 }
 }

 if(getfind==4)
 {
  gotoxy(11,7);
  cout<<"  ";
  outtextxy(9+24*3,99,"g");

  gotoxy(11,9);
  cout<<"  ";
  outtextxy(9+24*3,99+32,"i");

  gotoxy(11,11);
  cout<<"  ";
  outtextxy(9+24*3,99+32*2,"n");

  gotoxy(11,13);
  cout<<"  ";
  outtextxy(9+24*3,99+32*3,"g");

  gotoxy(11,15);
  cout<<"  ";
  outtextxy(9+24*3,99+32*4,"e");

  gotoxy(11,17);
  cout<<"  ";
  outtextxy(9+24*3,99+32*5,"r");
 }

 if(getfind==5)
 {
  gotoxy(17,7);
  cout<<"  ";
  outtextxy(9+24*5,99,"b");

  gotoxy(20,7);
  cout<<"  ";
  outtextxy(9+24*6,99,"o");

  gotoxy(23,7);
  cout<<"  ";
  outtextxy(9+24*7,99,"y");
 }
 if(getfind==6)
 {
  gotoxy(20,7);
  cout<<"  ";
  outtextxy(9+24*6,99,"o");

  gotoxy(20,9);
  cout<<"  ";
  outtextxy(9+24*6,99+32,"b");

  gotoxy(20,11);
  cout<<"  ";
  outtextxy(9+24*6,99+32*2,"e");

  gotoxy(20,13);
  cout<<"  ";
  outtextxy(9+24*6,99+32*3,"s");

  gotoxy(20,15);
  cout<<"  ";
  outtextxy(9+24*6,99+32*4,"i");

  gotoxy(20,17);
  cout<<"  ";
  outtextxy(9+24*6,99+32*5,"t");

  gotoxy(20,19);
  cout<<"  ";
  outtextxy(9+24*6,99+32*6,"y");


 }

 if(getfind==11)
 {

  gotoxy(20,13);
  cout<<"  ";
  outtextxy(9+24*6,99+32*3,"s");

  gotoxy(20,15);
  cout<<"  ";
  outtextxy(9+24*6,99+32*4,"i");

  gotoxy(20,17);
  cout<<"  ";
  outtextxy(9+24*6,99+32*5,"t");



 }
 if(getfind==7)
 {

  gotoxy(17,19);
  cout<<"  ";
  outtextxy(9+24*5,99+32*6,"b");

  gotoxy(20,19);
  cout<<"  ";
  outtextxy(9+24*6,99+32*6,"y");

  gotoxy(23,19);
  cout<<"  ";
  outtextxy(9+24*7,99+32*6,"e");

 }
 if(getfind==8)
 {
  gotoxy(29,7);
  cout<<"  ";
  outtextxy(9+24*9,99,"s");

  gotoxy(32,7);
  cout<<"  ";
  outtextxy(9+24*10,99,"h");

  gotoxy(35,7);
  cout<<"  ";
  outtextxy(9+24*11,99,"y");
 }
 if(getfind==9)
 {
  gotoxy(32,7);
  cout<<"  ";
  outtextxy(9+24*10,99,"h");

  gotoxy(32,9);
  cout<<"  ";
  outtextxy(9+24*10,99+32,"o");

  gotoxy(32,11);
  cout<<"  ";
  outtextxy(9+24*10,99+32*2,"n");

  gotoxy(32,13);
  cout<<"  ";
  outtextxy(9+24*10,99+32*3,"e");

  gotoxy(32,15);
  cout<<"  ";
  outtextxy(9+24*10,99+32*4,"s");

  gotoxy(32,17);
  cout<<"  ";
  outtextxy(9+24*10,99+32*5,"t");

  gotoxy(32,19);
  cout<<"  ";
  outtextxy(9+24*10,99+32*6,"y");

 }
 if(getfind==15)
 {

  gotoxy(32,15);
  cout<<"  ";
  outtextxy(9+24*10,99+32*4,"s");

  gotoxy(32,17);
  cout<<"  ";
  outtextxy(9+24*10,99+32*5,"t");

  gotoxy(32,19);
  cout<<"  ";
  outtextxy(9+24*10,99+32*6,"y");

 }
 if(getfind==14)
 {

  gotoxy(32,11);
  cout<<"  ";
  outtextxy(9+24*10,99+32*2,"n");

  gotoxy(32,13);
  cout<<"  ";
  outtextxy(9+24*10,99+32*3,"e");

  gotoxy(32,15);
  cout<<"  ";
  outtextxy(9+24*10,99+32*4,"s");

  gotoxy(32,17);
  cout<<"  ";
  outtextxy(9+24*10,99+32*5,"t");


 }
 if(getfind==12)
 {

  gotoxy(32,9);
  cout<<"  ";
  outtextxy(9+24*10,99+32,"o");

  gotoxy(32,11);
  cout<<"  ";
  outtextxy(9+24*10,99+32*2,"n");

  gotoxy(32,13);
  cout<<"  ";
  outtextxy(9+24*10,99+32*3,"e");


 }
 if(getfind==13)
 {

  gotoxy(32,9);
  cout<<"  ";
  outtextxy(9+24*10,99+32,"o");

  gotoxy(32,11);
  cout<<"  ";
  outtextxy(9+24*10,99+32*2,"n");

  gotoxy(32,13);
  cout<<"  ";
  outtextxy(9+24*10,99+32*3,"e");

  gotoxy(32,15);
  cout<<"  ";
  outtextxy(9+24*10,99+32*4,"s");

 }
}

void easycolor2(int getfind)
{

 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

 char abc[100];
	// youth","hue","ohm","horse","bet","map","major","jar","rat"};
 if(getfind==1)
 {
 char ary[5]={'y','o','u','t','h'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2,7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9,99+oy,abc);
 }
 }

 if(getfind==10)
 {
 char ary[3]={'y','o','u'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2,7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9,99+oy,abc);
 }
 }

 if(getfind==11)
 {
 char ary[3]={'o','u','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9,99+32+oy,abc);
 }
 }


 if(getfind==2)
 {
 char ary[3]={'h','u','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,7+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*7+oy,abc);
 }
 }

 if(getfind==4)
 {
 char ary[5]={'h','o','r','s','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*4+gx,7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,99+oy,abc);
 }
 }

 if(getfind==5)
 {
 char ary[3]={'b','e','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*3+gx,7+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*7+oy,abc);
 }
 }


 if(getfind==12)
 {
 char ary[2]={'b','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*3+gx,7+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*7+oy,abc);
 }
 }


 if(getfind==6)
 {
 char ary[3]={'m','a','p'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*6+gx,7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,99+oy,abc);
 }
 }

 if(getfind==7)
 {
 char ary[5]={'m','a','j','o','r'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*6+gx,7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6,99+oy,abc);
 }
 }

 if(getfind==3)
 {
 char ary[4]={'w','h','o','m'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*3+gx,7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,99+oy,abc);
 }
 }

 if(getfind==8)
 {
 char ary[3]={'j','a','r'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*6+gx,7+2*2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*5+oy,abc);
 }
 }

 if(getfind==9)
 {
 char ary[3]={'r','a','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*6+gx,7+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*7+oy,abc);
 }
 }
}

void easycolor3(int getfind)
{


 setcolor(RED);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

 char abc[100];

    //   "band","ball","leave","eye","down","lean","gallery","yawn","gift","toad","load"};
 if(getfind==1)
 {
 char ary[4]={'b','a','n','d'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32+oy,abc);
 }
 }

 if(getfind==12)
 {
 char ary[3]={'a','n','d'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*2+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*2+ox,32+oy,abc);
 }
 }


 if(getfind==2)
 {
 char ary[4]={'b','a','l','l'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32+oy,abc);
 }
 }

 if(getfind==13)
 {
 char ary[3]={'a','l','l'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3+gx,3+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32*2+oy,abc);
 }
 }


 if(getfind==5)
 {
 char ary[4]={'d','a','w','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*4+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32+oy,abc);
 }
 }


 if(getfind==9)
 {
 char ary[4]={'g','i','f','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32+oy,abc);
 }
 }

 if(getfind==10)
 {
 char ary[4]={'t','o','a','d'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*8+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*8+ox,32+oy,abc);
 }
 }

 if(getfind==11)
 {
 char ary[4]={'l','o','a','d'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*3
 +gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*4+oy,abc);
 }
 }


 if(getfind==3)
 {
 char ary[5]={'l','e','a','v','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3+gx,7+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,99+32+oy,abc);
 }
 }

 if(getfind==14)
 {
 char ary[4]={'e','a','v','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3+gx,7+2*2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,99+32*2+oy,abc);
 }
 }


 if(getfind==4)
 {
 char ary[3]={'e','y','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3+gx,7+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,99+32*5+oy,abc);
 }
 }

 if(getfind==6)
 {
 char ary[4]={'l','e','a','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3+gx,7+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,99+32+oy,abc);
 }
 }

 if(getfind==7)
 {
 char ary[7]={'g','a','l','l','e','r','y'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<7;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*5+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32+oy,abc);
 }
 }

 if(getfind==15)
 {
 char ary[4]={'g','a','l','l'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*5+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32+oy,abc);
 }
 }

 if(getfind==8)
 {
 char ary[4]={'y','a','w','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*5+gx,3+2*7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*7+oy,abc);
 }
 }


}



void mediumcolor1(int getfind)
{
 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
//"reference","afraid","eagle","edge","leer","genius","code","network","google","run
 char abc[100];

 if(getfind==1)
 {
 gotoxy(2,3);
 cout<<"  ";
 outtextxy(10,32,"r");

 gotoxy(5,5);
 cout<<"  ";
 outtextxy(32,32*2,"e");

 gotoxy(5+3,5+2);
 cout<<"  ";
 outtextxy(32+24,32*3,"f");

 gotoxy(5+3*2,5+2*2);
 cout<<"  ";
 outtextxy(32+25*2,32*4,"e");

 gotoxy(5+3*3,5+2*3);
 cout<<"  ";
 outtextxy(32+25*3,32*5,"r");

 gotoxy(5+3*4,5+2*4);
 cout<<"  ";
 outtextxy(32+25*4,32*6,"e");

 gotoxy(5+3*5,5+2*5);
 cout<<"  ";
 outtextxy(32+24*5,32*7,"n");

 gotoxy(5+3*6,5+2*6);
 cout<<"  ";
 outtextxy(32+24*6,32*8,"c");

 gotoxy(5+3*7,5+2*7);
 cout<<"  ";
 outtextxy(32+24*7,32*9,"e");
 }

 if(getfind==11)
 {
 gotoxy(2,3);
 cout<<"  ";
 outtextxy(10,32,"r");

 gotoxy(5,5);
 cout<<"  ";
 outtextxy(32,32*2,"e");

 gotoxy(5+3,5+2);
 cout<<"  ";
 outtextxy(32+24,32*3,"f");

 gotoxy(5+3*2,5+2*2);
 cout<<"  ";
 outtextxy(32+25*2,32*4,"e");

 gotoxy(5+3*3,5+2*3);
 cout<<"  ";
 outtextxy(32+25*3,32*5,"r");

 }

 if(getfind==2)
 {
  gotoxy(5,5+2);
  cout<<"  ";
  outtextxy(32,32*3,"a");

  gotoxy(5+3,5+2);
  cout<<"  ";
  outtextxy(32+24,32*3,"f");

  gotoxy(5+3*2,5+2);
  cout<<"  ";
  outtextxy(32+24*2,32*3,"r");

  gotoxy(5+3*3,5+2);
  cout<<"  ";
  outtextxy(32+24*3,32*3,"a");

  gotoxy(5+3*4,5+2);
  cout<<"  ";
  outtextxy(32+24*4,32*3,"i");

  gotoxy(5+3*5,5+2);
  cout<<"  ";
  outtextxy(32+24*5,32*3,"d");


 }

 if(getfind==12)
 {

  gotoxy(5+3*2,5+2);
  cout<<"  ";
  outtextxy(32+24*2,32*3,"r");

  gotoxy(5+3*3,5+2);
  cout<<"  ";
  outtextxy(32+24*3,32*3,"a");

  gotoxy(5+3*4,5+2);
  cout<<"  ";
  outtextxy(32+24*4,32*3,"i");

  gotoxy(5+3*5,5+2);
  cout<<"  ";
  outtextxy(32+24*5,32*3,"d");


 }

 if(getfind==3)
 {
  gotoxy(5,5);
  cout<<"  ";
  outtextxy(32,32*2,"e");

  gotoxy(5,5+2);
  cout<<"  ";
  outtextxy(32,32*3,"a");

  gotoxy(5,5+4);
  cout<<"  ";
  outtextxy(32,32*4,"g");

  gotoxy(5,5+6);
  cout<<"  ";
  outtextxy(32,32*5,"l");

  gotoxy(5,5+8);
  cout<<"  ";
  outtextxy(32,32*6,"e");

 }
 if(getfind==4)
 {
  gotoxy(5,5+8);
  cout<<"  ";
  outtextxy(32,32*6,"e");

  gotoxy(5,5+10);
  cout<<"  ";
  outtextxy(32,32*7,"d");

  gotoxy(5,5+12);
  cout<<"  ";
  outtextxy(32,32*8,"g");

  gotoxy(5,5+14);
  cout<<"  ";
  outtextxy(32,32*9,"e");

 }
 if(getfind==5)
 {
  gotoxy(5,5+6);
  cout<<"  ";
  outtextxy(32,32*5,"l");

  gotoxy(5+3,5+6);
  cout<<"  ";
  outtextxy(32+24,32*5,"i");

  gotoxy(5+3*2,5+6);
  cout<<"  ";
  outtextxy(32+24*2,32*5,"a");

  gotoxy(5+3*3,5+6);
  cout<<"  ";
  outtextxy(32+24*3,32*5,"r");

 }
 if(getfind==6)
 {
  gotoxy(5,5+12);
  cout<<"  ";
  outtextxy(32,32*8,"g");

  gotoxy(5+3,5+12);
  cout<<"  ";
  outtextxy(32+24,32*8,"e");

  gotoxy(5+6,5+12);
  cout<<"  ";
  outtextxy(32+24*2,32*8,"n");

  gotoxy(5+9,5+12);
  cout<<"  ";
  outtextxy(32+24*3,32*8,"i");

  gotoxy(5+12,5+12);
  cout<<"  ";
  outtextxy(32+24*4,32*8,"u");

  gotoxy(5+15,5+12);
  cout<<"  ";
  outtextxy(32+24*5,32*8,"s");

 }
 if(getfind==7)
 {
  gotoxy(5+18,5+12);
  cout<<"  ";
  outtextxy(32+24*6,32*8,"c");

  gotoxy(5+21,5+12);
  cout<<"  ";
  outtextxy(32+24*7,32*8,"o");

  gotoxy(5+24,5+12);
  cout<<"  ";
  outtextxy(32+24*8,32*8,"d");

  gotoxy(5+27,5+12);
  cout<<"  ";
  outtextxy(32+24*9,32*8,"e");

 }
 if(getfind==8)
 {


 char ary[4]={'w','o','r','k'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(5+3*6+gx,5+8+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(32+24*6+ox,32*6+oy,abc);
 }
 }

 if(getfind==9)
 {

 char ary[6]={'g','o','o','g','l','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<6;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(5+6+gx,5+14+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(32+24*2+ox,32*9+oy,abc);
 }
 }
 if(getfind==14)
 {

 char ary[4]={'o','g','l','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(5+9+gx,5+14+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(32+24*3+ox,32*9+oy,abc);
 }
 }

 if(getfind==13)
 {

 char ary[2]={'g','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(5+6+gx,5+14+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(32+24*2+ox,32*9+oy,abc);
 }
 }


 if(getfind==10)
 {

 char ary[3]={'r','u','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(5+9+gx,5+16+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(32+24*3+ox,32*10+oy,abc);
 }
 }

}

void mediumcolor2(int getfind)
{


 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

 char abc[100];
// "wolf","whale","zebra","tiger","fish","human","bird","insect","snake"};

 if(getfind==1)
 {
 char ary[4]={'w','o','l','f'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32+oy,abc);
 }
 }

 if(getfind==2)
 {
 char ary[5]={'w','h','a','l','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32+oy,abc);
 }
 }

 if(getfind==10)
 {
 char ary[4]={'h','a','l','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+6+gx,3+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*2+ox,32*2+oy,abc);
 }
 }

 if(getfind==8)
 {
 char ary[6]={'i','n','s','e','c','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<6;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*6+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*6+oy,abc);
 }
 }
 if(getfind==13)
 {
 char ary[4]={'s','e','c','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*8+gx,3+2*7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*8+ox,32*8+oy,abc);
 }
 }
 if(getfind==4)
 {
 char ary[5]={'t','i','g','e','r'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*6+oy,abc);
 }
 }


 if(getfind==5)
 {
 char ary[4]={'f','i','s','h'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,3+2*6+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*7+oy,abc);
 }
 }


 if(getfind==6)
 {
 char ary[5]={'h','u','m','a','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*3+gx,3+2*6+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*7+oy,abc);
 }
 }

 if(getfind==12)
 {
 char ary[3]={'m','a','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*6+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*7+oy,abc);
 }
 }

 if(getfind==7)
 {
 char ary[4]={'b','i','r','d'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*4+gx,3+2*7+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*8+oy,abc);
 }
 }

 if(getfind==9)
 {
 char ary[5]={'s','n','a','k','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*7+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*7+ox,32*6+oy,abc);
 }
 }


 if(getfind==3)
 {
 char ary[5]={'z','e','b','r','a'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*4+gx,3+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*5+oy,abc);
 }
 }

 if(getfind==11)
 {
 char ary[3]={'b','r','a'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*6+gx,3+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*5+oy,abc);
 }
 }
}

void mediumcolor3(int getfind)

{
 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

 char abc[100];
//"spaghetti","potato","soup","egg","icecream","cake","meat","pizza"
 if(getfind==1)
 {
 char ary[9]={'s','p','a','g','h','e','t','t','i'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<9;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32+oy,abc);
 }
 }

 if(getfind==9)
 {
 char ary[3]={'h','e','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*4+gx,3+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*5+oy,abc);
 }
 }

 if(getfind==5)
 {
 char ary[8]={'i','c','e','c','r','e','a','m'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<8;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*6+oy,abc);
 }
 }

 if(getfind==10)
 {
 char ary[3]={'i','c','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*6+oy,abc);
 }
 }

 if(getfind==11)
 {
 char ary[5]={'c','r','e','a','m'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*3+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*6+oy,abc);
 }
 }


 if(getfind==6)
 {
 char ary[4]={'c','a','k','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32*6+oy,abc);
 }
 }


 if(getfind==3)
 {
 char ary[4]={'s','o','u','p'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*5+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32+oy,abc);
 }
 }

 if(getfind==8)
 {
 char ary[5]={'p','i','z','z','a'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*8+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*8+ox,32*4+oy,abc);
 }
 }


 if(getfind==2)
 {
 char ary[6]={'p','o','t','a','t','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<6;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3+gx,3+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32*2+oy,abc);
 }
 }

 if(getfind==13)
 {
 char ary[2]={'t','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*2+oy,abc);
 }
 }

 if(getfind==4)
 {
 char ary[3]={'e','g','g'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*2+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*2+ox,32*4+oy,abc);
 }
 }

 if(getfind==7)
 {
 char ary[4]={'m','e','a','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*5+gx,3+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*5+oy,abc);
 }
 }
 if(getfind==12)
 {
 char ary[3]={'e','a','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*6+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*6+oy,abc);
 }
 }
}




void hardcolor1(int getfind)
{
 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 char abc[300];
// "store","star","open","eyes","rings","batch","bin","hue","noise","theme","steam"

 if(getfind==1)
 {

 char ary[5]={'s','t','o','r','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*4+oy,abc);
 }
 }

 if(getfind==12)
 {

 char ary[4]={'t','o','r','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+gx,9+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*5+oy,abc);
 }
 }

 if(getfind==22)
 {

 char ary[2]={'t','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+gx,9+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*5+oy,abc);
 }
 }


 if(getfind==3)
 {

 char ary[4]={'o','p','e','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,9+2*2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*6+oy,abc);
 }
 }

 if(getfind==14)
 {

 char ary[3]={'p','e','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3+gx,9+2*2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32*6+oy,abc);
 }
 }

 if(getfind==4)
 {

 char ary[3]={'e','y','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,9+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*8+oy,abc);
 }
 }

 if(getfind==8)
 {

 char ary[3]={'h','u','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*4+gx,9+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*8+oy,abc);
 }
 }

 if(getfind==11)
 {

 char ary[5]={'s','t','e','a','m'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy-=32,gx+=3,gy-=2)
 {
 gotoxy(2+3*7+gx,9+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*7+ox,32*8+oy,abc);
 }
 }

 if(getfind==20)
 {

 char ary[4]={'t','e','a','m'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy-=32,gx+=3,gy-=2)
 {
 gotoxy(2+3*8+gx,9+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*8+ox,32*7+oy,abc);
 }
 }

 if(getfind==21)
 {

 char ary[3]={'t','e','a'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy-=32,gx+=3,gy-=2)
 {
 gotoxy(2+3*8+gx,9+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*8+ox,32*7+oy,abc);
 }
 }


 if(getfind==2)
 {

 char ary[4]={'s','t','a','r'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*4+oy,abc);
 }
 }

 if(getfind==13)
 {

 char ary[3]={'t','a','r'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32*4+oy,abc);
 }
 }


 if(getfind==5)
 {

 char ary[4]={'r','i','n','g'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*3+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*4+oy,abc);
 }
 }

 if(getfind==7)
 {

 char ary[3]={'b','i','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*4+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*4+oy,abc);
 }
 }

 if(getfind==10)
 {

 char ary[5]={'t','h','e','m','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*7+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*7+ox,32*4+oy,abc);
 }
 }

 if(getfind==19)
 {

 char ary[4]={'t','h','e','m'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*7+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*7+ox,32*4+oy,abc);
 }
 }

 if(getfind==17)
 {

 char ary[3]={'t','h','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*7+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*7+ox,32*4+oy,abc);
 }
 }
 if(getfind==18)
 {

 char ary[2]={'m','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*10+gx,9+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*10+ox,32*7+oy,abc);
 }
 }




 if(getfind==6)
 {

 char ary[5]={'b','a','t','c','h'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*4+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*4+oy,abc);
 }
 }

 if(getfind==15)
 {

 char ary[3]={'b','a','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*4+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*4+oy,abc);
 }
 }


 if(getfind==9)
 {

 char ary[5]={'n','o','i','s','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*6+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*4+oy,abc);
 }
 }

 if(getfind==16)
 {

 char ary[2]={'n','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*6+gx,9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*4+oy,abc);
 }
 }
}

void hardcolor2(int getfind)
{
 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 char abc[300];
// "scientist","image","tool","good","owl","nap","meet","battery","lazy","cacti","inside","big"};

 if(getfind==1)
 {

 char ary[9]={'s','c','i','e','n','t','i','s','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<9;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+gx,3+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32*2+oy,abc);
 }
 }
 if(getfind==2)
 {

 char ary[5]={'i','m','a','g','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*2+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*2+ox,32*4+oy,abc);
 }
 }

 if(getfind==13)
 {

 char ary[4]={'m','a','g','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*3+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*4+oy,abc);
 }
 }

 if(getfind==14)
 {

 char ary[3]={'a','g','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*4+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*4+oy,abc);
 }
 }


 if(getfind==10)
 {

 char ary[5]={'c','a','c','t','i'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3+gx,3+2*10+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32*11+oy,abc);
 }
 }

 if(getfind==20)
 {

 char ary[3]={'a','c','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*2+gx,3+2*10+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*2+ox,32*11+oy,abc);
 }
 }


 if(getfind==11)
 {

 char ary[6]={'i','n','s','i','d','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<6;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*10+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*11+oy,abc);
 }
 }

 if(getfind==21)
 {

 char ary[2]={'i','n'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*10+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*11+oy,abc);
 }
 }

 if(getfind==22)
 {

 char ary[4]={'s','i','d','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*7+gx,3+2*10+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*7+ox,32*11+oy,abc);
 }
 }


 if(getfind==12)
 {

 char ary[3]={'b','i','g'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*5+gx,3+2*9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*10+oy,abc);
 }
 }


 if(getfind==8)
 {

 char ary[7]={'b','a','t','t','e','r','y'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<7;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*10+oy,abc);
 }
 }

 if(getfind==19)
 {

 char ary[3]={'b','a','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*9+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*10+oy,abc);
 }
 }

 if(getfind==9)
 {

 char ary[4]={'l','a','z','y'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*11+gx,3+2*6+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*11+ox,32*7+oy,abc);
 }
 }


 if(getfind==6)
 {

 char ary[3]={'n','a','p'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*4+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*6+oy,abc);
 }
 }



 if(getfind==7)
 {

 char ary[4]={'m','e','e','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*3+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*4+oy,abc);
 }
 }


 if(getfind==18)
 {

 char ary[2]={'m','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*3+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*4+oy,abc);
 }
 }




 if(getfind==3)
 {

 char ary[4]={'t','o','o','l'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*5+oy,abc);
 }
 }

 if(getfind==15)
 {

 char ary[3]={'t','o','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*5+oy,abc);
 }
 }

 if(getfind==16)
 {

 char ary[2]={'t','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*4+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*5+oy,abc);
 }
 }



 if(getfind==5)
 {

 char ary[3]={'o','w','l'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*7+gx,3+2*5+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*7+ox,32*6+oy,abc);
 }
 }



 if(getfind==4)
 {

 char ary[4]={'g','o','o','d'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*5+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*4+oy,abc);
 }
 }

 if(getfind==17)
 {

 char ary[2]={'g','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*5+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*4+oy,abc);
 }
 }


}


void hardcolor3(int getfind)
{
 setcolor(GREEN);
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 char abc[300];

 //"dog","delicious","gorgeous","laugh","test","tree","thumb","box","stress"};
 if(getfind==1)
 {

 char ary[3]={'d','o','g'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32+oy,abc);
 }
 }

 if(getfind==2)
 {

 char ary[9]={'d','e','l','i','c','i','o','u','s'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<9;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+ox,32+oy,abc);
 }
 }

 if(getfind==3)
 {

 char ary[8]={'g','o','r','g','e','o','u','s'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<8;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*2+gx,3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*2+ox,32+oy,abc);
 }
 }
 if(getfind==11)
 {

 char ary[4]={'o','r','g','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*3+gx,3+2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*3+ox,32*2+oy,abc);
 }
 }

 if(getfind==12)
 {

 char ary[3]={'g','e','o'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*5+gx,3+2*3+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*4+oy,abc);
 }
 }


 if(getfind==10)
 {

 char ary[2]={'u','s'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<2;i++,ox+=24,oy+=32,gx+=3,gy+=2)
 {
 gotoxy(2+3*8+gx,3+2*6+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*8+ox,32*7+oy,abc);
 }
 }


 if(getfind==4)
 {

 char ary[5]={'l','a','u','g','h'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*2+gx,3+2*2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*2+ox,32*3+oy,abc);
 }
 }

  if(getfind==6)
 {

 char ary[4]={'t','r','e','e'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=0,oy+=32,gx+=0,gy+=2)
 {
 gotoxy(2+3*6+gx,3+2*2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*3+oy,abc);
 }
 }


 if(getfind==7)
 {

 char ary[5]={'t','h','u','m','b'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<5;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3+gx,3+2*6+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24+ox,32*7+oy,abc);
 }
 }

  if(getfind==13)
 {

 char ary[3]={'h','u','m'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*2+gx,3+2*6+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*2+ox,32*7+oy,abc);
 }
 }


 if(getfind==8)
 {

 char ary[3]={'b','o','x'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<3;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*6+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*7+oy,abc);
 }
 }

 if(getfind==5)
 {

 char ary[4]={'t','e','s','t'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<4;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*6+gx,3+2*2+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*6+ox,32*3+oy,abc);
 }
 }

 if(getfind==9)
 {

 char ary[6]={'s','t','r','e','s','s'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<6;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*4+gx,3+2*8+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*4+ox,32*9+oy,abc);
 }
 }

  if(getfind==14)
 {

 char ary[5]={'t','r','e','s','s'};
 for(int i=0,gx=0,gy=0,ox=0,oy=0;i<6;i++,ox+=24,oy+=0,gx+=3,gy+=0)
 {
 gotoxy(2+3*5+gx,3+2*8+gy);
 cout<<"  ";
 sprintf(abc,"%c",ary[i]);
 outtextxy(9+24*5+ox,32*9+oy,abc);
 }
 }



}





void board(int getjchk)
{
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

setcolor(CYAN);
rectangle(40,30,270,420);  //input
rectangle(280,80,590,300); //board
rectangle(40,30,270,80);

setcolor(CYAN);
rectangle(280,55,370,80);
setcolor(RED);
outtextxy(285,64,"WRONG:");
setcolor(CYAN);
rectangle(500,55,590,80);
setcolor(GREEN);
outtextxy(505,66,"SCORE:");

setcolor(WHITE);
outtextxy(42,450,"BACK TO MAINMENU");
setcolor(RED);
outtextxy(172,450,"(B)");
setcolor(WHITE);
outtextxy(252,450,"BACK TO MENU");
setcolor(RED);
outtextxy(350,450,"(M)");
setcolor(WHITE);
outtextxy(450,450,"EXIT FROM GAME");
setcolor(RED);
outtextxy(565,450,"(X)");

 if(getjchk==1)//easy1
 {
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   setcolor(WHITE);
   outtextxy(120,50,"You must put");
   setcolor(RED);
   outtextxy(70,60,"only 3 OR 4 characters");

   settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
   setcolor(WHITE);
   outtextxy(300,150,"MLEOLW");
 }

 if(getjchk==2)//easy2
 {
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   setcolor(WHITE);
   outtextxy(120,50,"You must put");
   setcolor(RED);
   outtextxy(70,60,"only 3 OR 4 characters");

   settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
   setcolor(WHITE);
   outtextxy(300,150,"GSIFTH");
 }


 if(getjchk==3)//medium1
 {

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(100,50,"You must put");
 setcolor(RED);
 outtextxy(80,60,"only 4 characters");

 settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
 setcolor(WHITE);
 outtextxy(300,150,"ANCYOR");
 }

 if(getjchk==4)//medium2
 {

 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(100,50,"You must put");
 setcolor(RED);
 outtextxy(80,60,"only 4 characters");

 settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
 setcolor(WHITE);
 outtextxy(300,150,"LSESIM");
 }

 if(getjchk==5)//hard1
 {
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(50,40,"Find 2 words as");
 setcolor(RED);
 outtextxy(180,40,"same length");
 setcolor(WHITE);
 outtextxy(50,60,"as given 2 scrambled words");

 settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
 setcolor(GREEN);
 line(300,150,560,150);
 setcolor(WHITE);
 outtextxy(300,100,"CUROPNNIITONA");
 setcolor(GREEN);
 line(300,250,550,250);
 setcolor(WHITE);
 outtextxy(300,200,"NEYCLCOEIDAP");

 }

 if(getjchk==6)//hard2
 {
 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 setcolor(WHITE);
 outtextxy(50,40,"Find 2 words as");
 setcolor(RED);
 outtextxy(180,40,"same length");
 setcolor(WHITE);
 outtextxy(50,60,"as given 2 scrambled words");

 settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
 setcolor(GREEN);
 line(300,150,560,150);
 setcolor(WHITE);
 outtextxy(300,100,"IGRAEROTREF");
 setcolor(GREEN);
 line(300,250,550,250);
 setcolor(WHITE);
 outtextxy(300,200,"SIVELTINOE");

 }

}

void jeasy1()
{
int jfind1=0;


char jeasy1[12][5]={"elm","low","mow","woe","owe","owl","mew","moll","well","meow","mewl","mole"};

char jinput[50];
   //numb
   for(int numb=1,jy2=0, jy=0;numb<=12;jy+=2,numb++)
   {
       if(numb>10)
       {
       gotoxy(20,7+jy2);
       cout<<numb<<".";
       jy2+=2;
       }
       else
       {
       gotoxy(7,7+jy);
       cout<<numb<<".";
       }
   }
   //input
   for(int k=1,jy3=0,jy1=0;k<=12;jy1+=2,k++)
   {

    if(k>10)
    {
    gotoxy(23,7+jy3);
    cin>>jinput;
    jy3+=2;
    }

    else
    {
    gotoxy(10,7+jy1);
    cin>>jinput;
    }
    //pattern match
    if(strcmp(jinput,"x")==0||strcmp(jinput,"X")==0)
    exit(0);

    if(strcmp(jinput,"b")==0||strcmp(jinput,"B")==0)
    {
    cleardevice();
    wtwomenu();
    }

    if(strcmp(jinput,"m")==0||strcmp(jinput,"M")==0)
    {

    cleardevice();
    scmenu();
    }

    for(int f=0;f<=12;f++)
    {
    if(strcmp(jinput,jeasy1[f])==0)
    jfind1=k+1;
    }

    jcorrectORwrong(jfind1,k,jchk);


    jfind1=0;
   }

   if(jscr!=12)
   jgamelose(jchk);

   if(jscr==12)
   jgamewin(jchk);

// jscr=0;

}
void jeasy2()
{
int jfind1=0;


char jeasy2[17][5]={"fig","hit","sit","fit","ifs","his","its",
		    "figs","gist","fish","hits","fist","sift","fits","sigh","gift","this"};

char jinput[50];
   //numb
   for(int numb=1,jy2=0, jy=0;numb<=17;jy+=2,numb++)
   {
       if(numb>10)
       {
       gotoxy(20,7+jy2);
       cout<<numb<<".";
       jy2+=2;
       }
       else
       {
       gotoxy(7,7+jy);
       cout<<numb<<".";
       }
   }
   //input
   for(int k=1,jy3=0,jy1=0;k<=17;jy1+=2,k++)
   {

    if(k>10)
    {
    gotoxy(23,7+jy3);
    cin>>jinput;
    jy3+=2;
    }

    else
    {
    gotoxy(10,7+jy1);
    cin>>jinput;
    }
    //pattern match
    if(strcmp(jinput,"x")==0||strcmp(jinput,"X")==0)
    exit(0);

    if(strcmp(jinput,"b")==0||strcmp(jinput,"B")==0)
    {
    cleardevice();
    wtwomenu();
    }

    if(strcmp(jinput,"m")==0||strcmp(jinput,"M")==0)
    {

    cleardevice();
    scmenu();
    }

    for(int f=0;f<=17;f++)
    {
    if(strcmp(jinput,jeasy2[f])==0)
    jfind1=k+1;
    }

 jcorrectORwrong(jfind1,k,jchk);


    jfind1=0;
   }

   if(jscr!=17)
   jgamelose(jchk);

   if(jscr==17)
   jgamewin(jchk);

// jscr=0;

}

void jmedium1()
{
int jfind1=0;

//char j2[15][5]={"fig","fit","hits","hit","his","figs","fish","fits","fist","ifs","gist","gift","sift","sigh","this"};
//char j2[12][5]={"elm","low","mow","woe","owe","owl","mew","moll","well","meow","mewl","mole"};
char j1[10][5]={"cony","nary","corn","orca","cran","racy","cyan","roan","narc","yarn"};
char jinput[50];
   //numb
   for(int numb=1,jy2=0, jy=0;numb<=10;jy+=2,numb++)
   {
       if(numb>10)
       {
       gotoxy(20,7+jy2);
       cout<<numb<<".";
       jy2+=2;
       }
       else
       {
       gotoxy(7,7+jy);
       cout<<numb<<".";
       }
   }
   //input
   for(int k=1,jy3=0,jy1=0;k<=10;jy1+=2,k++)
   {

    if(k>10)
    {
    gotoxy(23,7+jy3);
    cin>>jinput;
    jy3+=2;
    }

    else
    {
    gotoxy(10,7+jy1);
    cin>>jinput;
    }
    //pattern match
    if(strcmp(jinput,"x")==0||strcmp(jinput,"X")==0)
    exit(0);

    if(strcmp(jinput,"b")==0||strcmp(jinput,"B")==0)
    {

    cleardevice();
    wtwomenu();
    }

    if(strcmp(jinput,"m")==0||strcmp(jinput,"M")==0)
    {

    cleardevice();

    scmenu();
    }

    for(int f=0;f<=10;f++)
    {
    if(strcmp(jinput,j1[f])==0)
    jfind1=k+1;
    }

    jcorrectORwrong(jfind1,k,jchk);

    jfind1=0;
   }

   if(jscr!=10)
   jgamelose(jchk);

   if(jscr==10)
   jgamewin(jchk);

// jscr=0;

}

void jmedium2()
{
int jfind1=0;


char j1[12][5]={"elms","mess","isle","mile","lets","mise","less","miss","lies","semi","lime","slim"};
char jinput[50];
   //numb
   for(int numb=1,jy2=0, jy=0;numb<=12;jy+=2,numb++)
   {
       if(numb>10)
       {
       gotoxy(20,7+jy2);
       cout<<numb<<".";
       jy2+=2;
       }
       else
       {
       gotoxy(7,7+jy);
       cout<<numb<<".";
       }
   }
   //input
   for(int k=1,jy3=0,jy1=0;k<=12;jy1+=2,k++)
   {

    if(k>10)
    {
    gotoxy(23,7+jy3);
    cin>>jinput;
    jy3+=2;
    }

    else
    {
    gotoxy(10,7+jy1);
    cin>>jinput;
    }
    //pattern match
    if(strcmp(jinput,"x")==0||strcmp(jinput,"X")==0)
    exit(0);

    if(strcmp(jinput,"b")==0||strcmp(jinput,"B")==0)
    {

    cleardevice();
    wtwomenu();
    }

    if(strcmp(jinput,"m")==0||strcmp(jinput,"M")==0)
    {

    cleardevice();

    scmenu();
    }

    for(int f=0;f<=10;f++)
    {
    if(strcmp(jinput,j1[f])==0)
    jfind1=k+1;
    }

    jcorrectORwrong(jfind1,k,jchk);

    jfind1=0;
   }

   if(jscr!=12)
   jgamelose(jchk);

   if(jscr==12)
   jgamewin(jchk);

// jscr=0;

}




void jhard1()
{
int jfind1=0;
char Hword1[]="pronunciation";
char Hword2[]="encyclopedia";

char jinput[20];
   //numb
   for(int numb=1,jy2=0, jy=0;numb<=2;jy+=2,numb++)
   {
       if(numb>10)
       {
       gotoxy(20,7+jy2);
       cout<<numb<<".";
       jy2+=2;
       }
       else
       {
       gotoxy(7,7+jy);
       cout<<numb<<".";
       }
   }
   //input
   for(int k=1,jy3=0,jy1=0;k<=2;jy1+=2,k++)
   {

    if(k>10)
    {
    gotoxy(23,7+jy3);
    cin>>jinput;
    jy3+=2;
    }

    else
    {
    gotoxy(10,7+jy1);
    cin>>jinput;
    }
    //pattern match
    if(strcmp(jinput,"x")==0||strcmp(jinput,"X")==0)
    exit(0);

    if(strcmp(jinput,"b")==0||strcmp(jinput,"B")==0)
    {
    cleardevice();
    wtwomenu();
    }

    if(strcmp(jinput,"m")==0||strcmp(jinput,"M")==0)
    {
    cleardevice();
    scmenu();
    }



    if(strcmp(jinput,Hword1)==0)
    jfind1=k+1;

    if(strcmp(jinput,Hword2)==0)
    jfind1=k+1;


    jcorrectORwrong(jfind1,k,jchk);

    jfind1=0;
   }

   if(jscr!=2)
   jgamelose(jchk);

   if(jscr==2)
   jgamewin(jchk);

// jscr=0;

}

void jhard2()
{
int jfind1=0;
char Hword1[]="refrigerator";
char Hword2[]="television";

char jinput[20];
   //numb
   for(int numb=1,jy2=0, jy=0;numb<=2;jy+=2,numb++)
   {
       if(numb>10)
       {
       gotoxy(20,7+jy2);
       cout<<numb<<".";
       jy2+=2;
       }
       else
       {
       gotoxy(7,7+jy);
       cout<<numb<<".";
       }
   }
   //input
   for(int k=1,jy3=0,jy1=0;k<=2;jy1+=2,k++)
   {

    if(k>10)
    {
    gotoxy(23,7+jy3);
    cin>>jinput;
    jy3+=2;
    }

    else
    {
    gotoxy(10,7+jy1);
    cin>>jinput;
    }
    //pattern match
    if(strcmp(jinput,"x")==0||strcmp(jinput,"X")==0)
    exit(0);

    if(strcmp(jinput,"b")==0||strcmp(jinput,"B")==0)
    {
    cleardevice();
    wtwomenu();
    }

    if(strcmp(jinput,"m")==0||strcmp(jinput,"M")==0)
    {
    cleardevice();
    scmenu();
    }



    if(strcmp(jinput,Hword1)==0)
    jfind1=k+1;

    if(strcmp(jinput,Hword2)==0)
    jfind1=k+1;


    jcorrectORwrong(jfind1,k,jchk);

    jfind1=0;
   }

   if(jscr!=2)
   jgamelose(jchk);

   if(jscr==2)
   jgamewin(jchk);

// jscr=0;

}



void jcorrectORwrong(int jfind,int getk,int getjchk)
{

 if(jfind!=0)
 {

  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
  if(getk<=10)
  {
	if(getjchk==3)
	{
	setcolor(GREEN);
	outtextxy(180,90+jy3,"/");
	jy3+=32;

	}
	else
	{
	setcolor(GREEN);
	outtextxy(117,90+jy3,"/");
	jy3+=32;

	}
  }
  else
  {
  setcolor(GREEN);

  if(getk==11)
  outtextxy(220,90,"/");
  if(getk==12)
  outtextxy(220,90+32,"/");
  if(getk==13)
  outtextxy(220,90+32*2,"/");
  if(getk==14)
  outtextxy(220,90+32*3,"/");
  if(getk==15)
  outtextxy(220,90+32*4,"/");
  if(getk==16)
  outtextxy(220,90+32*5,"/");
  }

  jscr++;
  gotoxy(71,5);
  cout<<jscr;


  jfind=0;


 }

 else
 {
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
  setcolor(RED);
   if(getk<=10)
   {
	if(getjchk==3)
	{
	outtextxy(180,90+jy3,"X");
	jy3+=32;
	}
	else
	{
	outtextxy(117,90+jy3,"X");
	jy3+=32;
	}
   }
   else
   {
   if(getk==11)
   outtextxy(220,90,"X");
   if(getk==12)
   outtextxy(220,90+32,"X");
   if(getk==13)
   outtextxy(220,90+32*2,"X");
   if(getk==14)
   outtextxy(220,90+32*3,"X");
   if(getk==15)
   outtextxy(220,90+32*4,"X");
   if(getk==16)
   outtextxy(220,90+32*5,"X");
   }

  jwrong++;
  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  if(jwrong==1)
  outtextxy(335,64,"X");
  if(jwrong==2)
  outtextxy(345,64,"X");
  if(jwrong==3)
  outtextxy(355,64,"X");

  jgameover(jwrong);

 }
}

void jgameover(int getjwrong)
{
int midx=getmaxx()/2;
int midy=getmaxy()/2;
char jcha;

  if(getjwrong==3)
  {
  delay(750);
  cleardevice();
  setcolor(RED);
  outtextxy(midx,midy,"GAME OVER");
  outtextxy(midx-81,midy+15,"Do you want to continue(y/n)");
  setcolor(WHITE);
  jwrong=0;jy3=0;jscr=0;
do{
  jcha=getch();

  switch(jcha)
  {
  case'y':cleardevice();
	  scmenu();

  break;
  case'n':cleardevice();
	  wtwomenu();
  break;
  }
}while(jcha!='y'||jcha!='Y'||jcha!='n'||jcha!='N');

 }
}

void jgamewin(int getjchk)
{
  char cha;

  int midx=getmaxx()/2;
  int midy=getmaxy()/2;

  delay(2000);
  cleardevice();
  setcolor(GREEN);

  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(midx-120,midy,"GOOD JOB!, YOU FOUND ALL THE WORDS");
  outtextxy(midx-110,midy+15,"Do you want to play again(y/n)");

  setcolor(WHITE);
  jwrong=0;jy3=0;jscr=0;
do{
  cha=getch();
  switch(cha)
  {
  case'y':cleardevice();

	  if(getjchk==1)
	  {
	  jchk=1;

	  board(jchk);
	  jeasy1();
	  }
	  if(getjchk==2)
	  {
	  jchk=2;

	  board(jchk);
	  jeasy2();
	  }
	  if(getjchk==3)
	  {
	  jchk=3;

	  board(jchk);
	  jmedium1();
	  }

	  if(getjchk==4)
	  {
	  jchk=4;

	  board(jchk);
	  jmedium2();
	  }
	  if(getjchk==5)
	  {
	  jchk=5;

	  board(jchk);
	  jhard1();
	  }
	  if(getjchk==6)
	  {
	  jchk=6;

	  board(jchk);
	  jhard2();
	  }


  break;

  case'n':cleardevice();
	  scmenu();
  break;
  }
}while(cha!='y'||cha!='Y'||cha!='n'||cha!='N');
}


void jgamelose(int getjchk)
{
int midx=getmaxx()/2;
int midy=getmaxy()/2;
char cha;


  delay(750);
  cleardevice();
  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  setcolor(RED);

  outtextxy(midx-60,midy,"BETTER LUCK NEXT TIME!");
  gotoxy(40,14);
  cout<<"YOUR SCORE:"<<jscr;
  outtextxy(midx-70,midy+15,"Do you want to try again(y/n)");

  setcolor(WHITE);
  jwrong=0;jy3=0;jscr=0;
do{
  cha=getch();

  switch(cha)
  {
  case'y':cleardevice();
	  if(getjchk==1)
	  {
	  jchk=1;

	  board(jchk);
	  jeasy1();
	  }
	  if(getjchk==2)
	  {
	  jchk=2;

	  board(jchk);
	  jeasy2();
	  }
	  if(getjchk==3)
	  {
	  jchk=3;

	  board(jchk);
	  jmedium1();
	  }

	  if(getjchk==4)
	  {
	  jchk=4;

	  board(jchk);
	  jmedium2();
	  }
	  if(getjchk==5)
	  {
	  jchk=5;

	  board(jchk);
	  jhard1();
	  }
	  if(getjchk==6)
	  {
	  jchk=6;

	  board(jchk);
	  jhard2();
	  }



  break;

  case'n':cleardevice();
	  scmenu();
  break;
  }
}while(cha!='y'||cha!='Y'||cha!='n'||cha!='N');

}

