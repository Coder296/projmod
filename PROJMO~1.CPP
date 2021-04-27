#include <iostream.h>
#include <graphics.h>
#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <stdlib.h>
#include <time.h>

struct Bar {
 int left, top, right, bottom;
};
 Bar a[90] = {{200, 0, 210, 0}, {100, 100, 128, 100}, {150, 200, 178, 200}, {
   300, 300, 329, 300}, {100, 400, 119, 400}, {150, 500, 169, 500}, {170, 600, 189, 600}, {
   230, 700, 249, 700}, {350, 800, 370, 800}, {400, 900, 419, 900}, {
   600, 1000, 619, 1000}, {500, 1100, 519, 1100}, {300, 1200, 320, 1200}, {
   100, 1300, 120, 1300}, {500, 1400, 520,1400}, {300,1500, 320, 1500}, {
   200, 1600, 220, 1600}, {500, 1700, 520, 1700}, {600, 1800, 620, 1800}, {
   100, 1900, 120, 1900}, {200, 2000, 210, 2000}, {100, 2100, 128, 2100}, {150, 2200, 178, 2200}, {
   300, 2300, 329, 2300}, {100, 2400, 119, 2400}, {150, 2500, 169, 2500}, {170, 2600, 189, 2600}, {
   230, 2700, 249, 2700}, {350, 2800, 370, 2800}, {400, 2900, 419, 2900}, {
   600, 3000, 619, 3000}, {500, 3100, 519, 3100}, {300, 3200, 320, 3200}, {
   100, 3300, 120, 3300}, {500, 3400, 520,3400}, {300,3500, 320, 3500}, {
   200, 3600, 220, 3600}, {500, 3700, 520, 3700}, {400, 3800, 420, 3800}, {
   100, 3900, 120, 3900},
   {600, 0, 619, 0}, {300, 100, 328, 100}, {609, 200, 626, 200}, {
   100, 300, 129, 300}, {100, 400, 119, 400}, {550, 500, 569, 500}, {570, 600, 589, 600}, {
   430, 700, 449, 700}, {250, 800, 270, 800}, {100, 900, 119, 900}, {
   100, 1000, 119, 1000}, {200, 1100, 219, 1100}, {600, 1200, 620, 1200}, {
   600, 1300, 620, 1300}, {500, 1400, 520,1400}, {300,1500, 320, 1500}, {
   500, 1600, 520, 1600}, {100, 1700, 120, 1700}, {200, 1800, 220, 1800}, {
   100, 1900, 120, 1900}, {500, 2000, 520, 2000}, {600, 2100, 628, 2100}, {450, 2200, 478, 2200}, {
   300, 2300, 329, 2300}, {600, 2400, 619, 2400}, {350, 2500, 369, 2500}, {570, 2600, 589, 2600}, {
   230, 2700, 249, 2700}, {150, 2800, 170, 2800}, {100, 2900, 119, 2900}, {
   600, 3000, 619, 3000}, {500, 3100, 519, 3100}, {300, 3200, 320, 3200}, {
   100, 3300, 120, 3300}, {500, 3400, 520,3400}, {300,3500, 320, 3500}, {
   200, 3600, 220, 3600}, {200, 3700, 220, 3700}, {520, 3800, 540, 3800}, {
   100, 3900, 120, 3900} };
int m = 0, n = 10;

void introduction () {                    //introducing the game
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 7);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  setcolor(BLUE);
  setfillstyle(SOLID_FILL, RED);
  bar(0, 0, getmaxx(), 20);
  bar(0, getmaxy()-20, getmaxx(), getmaxy());
  bar(0, 0, 20, getmaxy());
  bar(getmaxx()-20, 0, getmaxx(), getmaxy());
  setfillstyle(SOLID_FILL, GREEN);
  bar(20, 20, 40, getmaxy()-20);
  bar(20, 20, getmaxx()-20, 40);
  bar(getmaxx()-40, 20, getmaxx()-20, getmaxy()-20);
  bar(20, getmaxy()-40, getmaxx()-20, getmaxy()-20);
  outtextxy(getmaxx()/2, getmaxy()/2 - 50, "Welcome to the ");
  outtextxy(getmaxx()/2, getmaxy()/2 + 50, "Game");
  delay(2000);
  cleardevice();
  setcolor(GREEN);

   setfillstyle(SOLID_FILL, RED);
   bar(0, 0, getmaxx(), 20);
   bar(0, getmaxy()-20, getmaxx(), getmaxy());
   bar(0, 0, 20, getmaxy());
   bar(getmaxx()-20, 0, getmaxx(), getmaxy());
   setfillstyle(SOLID_FILL, GREEN);
   bar(20, 20, 40, getmaxy()-20);
   bar(20, 20, getmaxx()-20, 40);
   bar(getmaxx()-40, 20, getmaxx()-20, getmaxy()-20);
   bar(20, getmaxy()-40, getmaxx()-20, getmaxy()-20);


  for (int i = 0; i <= 10; i++) {
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, i);
   outtextxy(getmaxx()/2, getmaxy()/2, "ROBOX");
   delay(100);
   if (i < 10)
   setcolor(BLACK);
   outtextxy(getmaxx()/2, getmaxy()/2, "ROBOX");
   setcolor(GREEN);
   /*if (i < 10)
   cleardevice();
   */
  }
  delay(2000);
  cleardevice();
  delay(500);

}

void load () {                                 //The loading part after introduction
 delay(100);
 for (int i = 200; i < getmaxx()-193; i++) {
  setfillstyle(SOLID_FILL, GREEN);
  bar(0, 0, getmaxx(), 20);
  bar(0, getmaxy()-20, getmaxx(), getmaxy());
  bar(0, 0, 20, getmaxy());
  bar(getmaxx()-20, 0, getmaxx(), getmaxy());
  setfillstyle(SOLID_FILL, GREEN);
  rectangle(190, 260, getmaxx()-190, getmaxy()-260);
  bar(193, 257, i, getmaxy()-257);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(getmaxx()/2, getmaxy()-210, "LOADING...");
  delay(10);
 }
 delay(1000);
 cleardevice();
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
}

void first() {                         //First level of the game
   int q = 0, s, v = 0;
   char p[10];
   cleardevice();
   for (s = 40; s < 80; s++) a[s].top+=4000, a[s].bottom+=4000;
   for (int j = 0;;)
   {
   int h;
   setcolor(GREEN);
   setfillstyle(SOLID_FILL+6, LIGHTCYAN);
   for (s = 0; s < 80; s++) {
    bar(a[s].left, m-a[s].top, a[s].right, n-a[s].bottom);
   }
   line(0, 310, getmaxx(), 310);
   line(0, 370, getmaxx(), 370);
   int c;
   setfillstyle(INTERLEAVE_FILL, YELLOW);
   outtextxy(getmaxx()-90, 5, "Score:");
   outtextxy(3, getmaxy()-10, "Press 'E' to exit");
   outtextxy(3, getmaxy()-25, "Press 'P' to pause the game");
   itoa(q, p, 10);
   outtextxy(getmaxx()-40, 5, p);
    bar (j, 350, j+40, 330);
   delay(10);
   for (s =0; s < 80; s++) {
    if (((a[s].left <= j+40 && a[s].left >= j) || (a[s].right >= j && a[s].right <= j+40)) && ((n-a[s].bottom<=350 && n-a[s].bottom>=330) || (m-a[s].top>=330 && m-a[s].top<=350)))
    {a[s].bottom = 0;
    a[s].top = a[s].bottom;
    a[s].left = 0;
    a[s].right = 0;
    q+=5;
   }
    else if (n-a[s].bottom >= 370 && a[s].left != 0) {
     a[s].bottom = 0;
    a[s].top = a[s].bottom;
    a[s].left = 0;
    a[s].right = 0;
    v++;
    }
   }
   if (kbhit())
{   c = getch();
    if (c == 77) j+=7;
    else if (c == 75) j-=7;
    else if (c == 'e') goto loo;
    else if (c == 'p') {
     cleardevice();
     setfillstyle(SOLID_FILL, WHITE);
     setcolor(WHITE);
     int i;
     for (i = 50; i <=55; i++)
     circle(getmaxx()/2, 100, i);
     bar(getmaxx()/2-15, 70, getmaxx()/2-5, 130);
     bar(getmaxx()/2+5, 70, getmaxx()/2+15, 130);
     settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
     settextjustify(CENTER_TEXT, LEFT_TEXT);
     outtextxy(getmaxx()/2, 200, "GAME PAUSED");
     settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
     setcolor(YELLOW);
     outtextxy(getmaxx()/2, 300, "Press 'R' to resume");
     outtextxy(getmaxx()/2, 325, "Press 'E' to exit the game");
     t:
     c = getch();
     if (c == 'r') {
      cleardevice();
      setfillstyle(SOLID_FILL, WHITE);

      setcolor(WHITE);
      for (i = 50; i <=55; i++)
      circle(getmaxx()/2, 100, i);
      for (i = 0, j = (getmaxx()/2+3)+20; j >= (getmaxx()/2+3)-20; i++, j--)
       line (j, 100-i, j, 100+i);
       settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       outtextxy(getmaxx()/2, 200, "Resuming in...");
       delay(2000);
      cleardevice();
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 6);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      outtextxy(getmaxx()/2, getmaxy()/2, "3");
      delay(1000);
      cleardevice();
      outtextxy(getmaxx()/2, getmaxy()/2, "2");
      delay(1000);
      cleardevice();
      outtextxy(getmaxx()/2, getmaxy()/2, "1");
      delay(1000);
      cleardevice();
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
      settextjustify(LEFT_TEXT, LEFT_TEXT);
      goto l; }
      else if (c == 'e') goto loo;
    }
  }
   l:
   setcolor(YELLOW);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   settextjustify(LEFT_TEXT, CENTER_TEXT);
   if (j != 239) cleardevice();
   m++, n++;
  }
  loo:
  cleardevice();
  setcolor (GREEN);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 8);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(getmaxx()/2, getmaxy()/2, "WELL PLAYED!!");
  delay(2000);
  cleardevice();
  setcolor(WHITE);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 7);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(getmaxx()/2, 15, "STATS:-");
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  setcolor(LIGHTCYAN);
  outtextxy((getmaxx()/2)-30, 95, "Score: ");
  itoa(q, p, 10);
  settextjustify(LEFT_TEXT, CENTER_TEXT);
  outtextxy((getmaxx()/2)+83, 95, p);
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(LEFT_TEXT, CENTER_TEXT);
  setcolor(YELLOW);
  outtextxy(10, 160, "No. of bars collected: ");
  itoa(q/5, p, 10);
  outtextxy(540, 160, p);
  outtextxy(10, 200,"No. of bars missed: ");
  itoa(v, p, 10);
  outtextxy(470, 200, p);
  setcolor(RED);
  outtextxy(10, 300, "Press any key to exit...");
  getch();

}

void second () {                  //Second level of the game
   int time = 0, i, q = 3, j, a1;
   for (i = 40; i < 80; i++) a[i].top+=4000, a[i].bottom+=4000;
   char p[10];
    cleardevice();
    clock_t start, end, mid1, mid2;
    start = clock();
   for (j = 0;;)
   {
   if (q < 1)
    {
     delay(1000);
     a1 = 0;
     goto loop;
    }
   int h;
   setcolor(GREEN);
   setfillstyle(SOLID_FILL+6, LIGHTCYAN);
   for (int s = 0, g = 0; s < 80; s++) {
    bar(a[s].left-5, m-a[s].top, a[s].right+5, n-a[s].bottom);
   }
   line(0, 310, getmaxx(), 310);
   line(0, 370, getmaxx(), 370);
   int c;
   setfillstyle(INTERLEAVE_FILL, YELLOW);
   outtextxy(getmaxx()-200, 5, "No. of lives left:");
   outtextxy(3, getmaxy()-10, "Press 'E' to exit");
   outtextxy(3, getmaxy()-25, "Press 'P' to pause the game");
   itoa(q, p, 10);
   outtextxy(getmaxx()-40, 5, p);

    bar (j, 350, j+40, 330);
   delay(10);
   for (s =0; s < 80; s++) {
    if (((a[s].left <= j+40 && a[s].left >= j) || (a[s].right >= j && a[s].right <= j+40)) && ((n-a[s].bottom<=350 && n-a[s].bottom>=330) || (m-a[s].top>=330 && m-a[s].top<=350)))
    {a[s].bottom = 0;
    a[s].top = a[s].bottom;
    a[s].left = 0;
    a[s].right = 0;
    q--;
   }
   }
   if (kbhit())
{   c = getch();
    if (c == 77) j+=10;
    else if (c == 75) j-=10;
    else if (c == 'e') goto loo;
    else if (c == 'p') {
     mid1 = clock();
     cleardevice();
     setfillstyle(SOLID_FILL, WHITE);
     setcolor(WHITE);
     for (i = 50; i <=55; i++)
     circle(getmaxx()/2, 100, i);
     bar(getmaxx()/2-15, 70, getmaxx()/2-5, 130);
     bar(getmaxx()/2+5, 70, getmaxx()/2+15, 130);
     settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
     settextjustify(CENTER_TEXT, LEFT_TEXT);
     outtextxy(getmaxx()/2, 200, "GAME PAUSED");
     settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
     setcolor(YELLOW);
     outtextxy(getmaxx()/2, 300, "Press 'R' to resume");
     outtextxy(getmaxx()/2, 325, "Press 'E' to exit the game");
     t:
     c = getch();
     if (c == 'e') {
     mid2 = clock();
      time+=(mid2-mid1);
      goto loo;
     }
     else if (c == 'r') {
      cleardevice();
      setfillstyle(SOLID_FILL, WHITE);

      setcolor(WHITE);
      for (i = 50; i <=55; i++)
      circle(getmaxx()/2, 100, i);
      for (i = 0, j = (getmaxx()/2+3)+20; j >= (getmaxx()/2+3)-20; i++, j--)
       line (j, 100-i, j, 100+i);
       settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       outtextxy(getmaxx()/2, 200, "Resuming in...");
       delay(2000);
      cleardevice();
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 6);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      outtextxy(getmaxx()/2, getmaxy()/2, "3");
      delay(1000);
      cleardevice();
      outtextxy(getmaxx()/2, getmaxy()/2, "2");
      delay(1000);
      cleardevice();
      outtextxy(getmaxx()/2, getmaxy()/2, "1");
      delay(1000);
      cleardevice();
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
      settextjustify(LEFT_TEXT, LEFT_TEXT);
      mid2 = clock();
      time+=(mid2-mid1);
      goto l; }

    }
  }
   l:
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   settextjustify(LEFT_TEXT, CENTER_TEXT);
   if (j != 239) cleardevice();
   m+=2, n+=2;
  }
  loo:
  a1 = 1;
  loop:
  end = clock();
  cleardevice();
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 8);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  if (a1 == 0) outtextxy(getmaxx()/2, getmaxy()/2, "GAME OVER");
  else {
   outtextxy(getmaxx()/2, getmaxy()/2, "WELL PLAYED");

  }
  delay(2000);
  cleardevice();
  setcolor(WHITE);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 7);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(getmaxx()/2, 15, "STATS:-");
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  setcolor(LIGHTCYAN);
  outtextxy((getmaxx()/2)-30, 95, "Score: ");
  itoa(((end-start)*2)-(2*(3-q)), p, 10);
  settextjustify(LEFT_TEXT, CENTER_TEXT);
  outtextxy((getmaxx()/2)+83, 95, p);
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(LEFT_TEXT, CENTER_TEXT);
  setcolor(YELLOW);
  outtextxy(10, 160, "Lives wasted: ");
  itoa(3-q, p, 10);
  settextjustify(RIGHT_TEXT, CENTER_TEXT);
  outtextxy(430, 160, p);
  settextjustify(LEFT_TEXT, CENTER_TEXT);
  outtextxy(10, 200,"Time elapsed: ");
  itoa((end-start-time)/CLK_TCK, p, 10);
  settextjustify(RIGHT_TEXT, CENTER_TEXT);
  outtextxy(430, 200, p);
  settextjustify(LEFT_TEXT, CENTER_TEXT);
  outtextxy(460, 200, "sec");
  setcolor(RED);
  outtextxy(10, 300, "Press any key to exit...");
  getch();

}

void third () {                   //Third level of the game
   int z = 0, x = 0, s, q = 0, f = 0, left[639], right[639], top[639], bottom[639];
   for (int i = 0; i < 639; i++) left[i] = 0, right[i] = 0, top[i] = 0, bottom[i] = 0;
   for (s = 40; s < 80; s++) a[s].top+= 4000, a[s].bottom+=4000;
   char p[10];
   cleardevice();
   for (int j = 0;;)
   {
   int h;
   setcolor(GREEN);
   setfillstyle(SOLID_FILL+6, LIGHTCYAN);
   for (int s = 0; s < 80; s++) bar(a[s].left, m-a[s].top, a[s].right, n-a[s].bottom);
   line(0, 310, getmaxx(), 310);
   line(0, 370, getmaxx(), 370);
   int c;
   setfillstyle(INTERLEAVE_FILL, YELLOW);
   outtextxy(getmaxx()-190, 5, "No. of bars shot:");
   itoa(z, p, 10);
   outtextxy(589, 5, p);
   outtextxy(3, getmaxy()-10, "Press 'E' to exit");
   outtextxy(3, getmaxy()-25, "Press 'P' to pause the game");
    bar (j, 350, j+40, 330);
    bar(j+17, 320, j+24, 328);
   delay(10);
   for (s =0; s < 80; s++)
    for (i = 0; i < 639; i++) {
    if ((((right[i] > a[s].left && right[i] < a[s].right) || (left[i] < a[s].right && left[i] > a[s].left)) && ((top[i] < n-a[s].bottom && top[i] > m-a[s].top) || (bottom[i] > m-a[s].top && bottom[i] < n-a[s].bottom)) && left[i] != right[i]) || n-a[s].bottom>=310)
    {
    if(n-a[s].bottom < 310)
    q+=5, z++;
    else if (n-a[s].bottom >= 310 && a[s].left != 0)
    x++;

    if (s < 79) {
    a[s].bottom = 0;
    a[s].top = a[s].bottom;
    a[s].left = 0;
    a[s].right = 0;

    }
    else if (s == 79) goto loo;
   }
   }
   if (kbhit())
{   c = getch();
    if (c == 77) j+=7;
    else if (c == 75) j-=7;
    else if (c == 'e') {
     goto loo;
    }
    else if (c == ' ') {
     i = j+20;
     left[i] = j+15, right[i] = j+25, bottom[i] = 350, top[i] = 354;

    }
    else if (c == 'p') {
     cleardevice();
     setfillstyle(SOLID_FILL, WHITE);
     setcolor(WHITE);
     for (i = 50; i <=55; i++)
     circle(getmaxx()/2, 100, i);
     bar(getmaxx()/2-15, 70, getmaxx()/2-5, 130);
     bar(getmaxx()/2+5, 70, getmaxx()/2+15, 130);
     settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
     settextjustify(CENTER_TEXT, LEFT_TEXT);
     outtextxy(getmaxx()/2, 200, "GAME PAUSED");
     settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
     setcolor(YELLOW);
     outtextxy(getmaxx()/2, 300, "Press 'R' to resume");
     outtextxy(getmaxx()/2, 325, "Press 'E' to exit the game");
     t:
     c = getch();
     if (c == 'r') {
      cleardevice();
      setfillstyle(SOLID_FILL, WHITE);

      setcolor(WHITE);
      for (i = 50; i <=55; i++)
      circle(getmaxx()/2, 100, i);
      for (i = 0, j = (getmaxx()/2+3)+20; j >= (getmaxx()/2+3)-20; i++, j--)
       line (j, 100-i, j, 100+i);
       settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       outtextxy(getmaxx()/2, 200, "Resuming in...");
       delay(2000);
      cleardevice();
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 6);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      outtextxy(getmaxx()/2, getmaxy()/2, "3");
      delay(1000);
      cleardevice();
      outtextxy(getmaxx()/2, getmaxy()/2, "2");
      delay(1000);
      cleardevice();
      outtextxy(getmaxx()/2, getmaxy()/2, "1");
      delay(1000);
      cleardevice();
      settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
      settextjustify(LEFT_TEXT, LEFT_TEXT);
      goto l; }
      else if (c == 'e') goto loo;
    }
  }
   l:
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   settextjustify(LEFT_TEXT, CENTER_TEXT);
   for (i = 0; i < getmaxx(); i++) {
    setfillstyle(SOLID_FILL, LIGHTRED);
    bar(left[i], top[i], right[i], bottom[i]);
    top[i]-=3;
    bottom[i]-=3;
    if (top[i] == 0) left[i] = 0, right[i] = 0, top[i] = 0, bottom[i] = 0;
   }

   cleardevice();
   m++ , n++;
   if (m - a[79].top == getmaxy() && a[s].left != 0) goto loo;
  }
  loo:
  cleardevice();
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 8);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(getmaxx()/2, getmaxy()/2, "WELL PLAYED!!");
  delay(2000);
  cleardevice();
  setcolor(WHITE);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 7);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(getmaxx()/2, 15, "STATS:-");
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  setcolor(LIGHTCYAN);
  outtextxy((getmaxx()/2)-30, 95, "Score: ");
  itoa(z*5, p, 10);
  settextjustify(LEFT_TEXT, CENTER_TEXT);
  outtextxy((getmaxx()/2)+83, 95, p);
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(LEFT_TEXT, CENTER_TEXT);
  setcolor(YELLOW);
  outtextxy(10, 160, "No. of bars shot: ");
  itoa(z, p, 10);
  outtextxy(470, 160, p);
  outtextxy(10, 200,"No. of bars missed: ");
  itoa(x, p, 10);
  outtextxy(470, 200, p);
  setcolor(RED);
  outtextxy(10, 300, "Press any key to exit...");
  getch();
}

void instructions1 () {              //Displays instructions for 1st level of the game
 setcolor(LIGHTCYAN);
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(getmaxx()/2, 25, "INSTRUCTIONS:-");
 setcolor(YELLOW);
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
 outtextxy(30, 70, "Use the left and right arrow keys to");
 outtextxy(30, 100, "control your bar.");
 outtextxy(30, 130, "Use the spacebar key to shoot.");
 setfillstyle(SOLID_FILL, WHITE);
 setcolor(WHITE);
 bar(264, 270, 294, 280);
 bar(344, 270, 374, 280);
 for (int i = 0, j = 254; j <= 264; j++, i++) line(j, 275+i, j, 275-i);
 for (i = 0, j = 384; j >= 374; j--, i++) line (j, 275+i, j, 275-i);
 rectangle(getmaxx()/2-100, 165, getmaxx()/2+100, 195);
 rectangle(251, 248, 298, 302);
 rectangle(340, 248, 390, 302);
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
 outtextxy(342, 310, "To move ");
 outtextxy(253, 310, "To move ");
 outtextxy(348, 322, "right");
 outtextxy(257, 322, "left");
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(getmaxx()/2, 205, "To shoot");
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
 outtextxy(getmaxx()/2, 180, "SPACEBAR");
 getch();
 cleardevice();
 setcolor(LIGHTCYAN);
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(getmaxx()/2, 25, "INSTRUCTIONS:-");
 setcolor(GREEN);
 line(0, 310, getmaxx(), 310);
 line(0, 370, getmaxx(), 370);
 setfillstyle(INTERLEAVE_FILL, YELLOW);
 bar(30, 335, 70, 355);
 bar(47, 325, 53, 335);
 setfillstyle(SOLID_FILL+6, LIGHTCYAN);
 bar(40, 250, 60, 260);
 bar(130, 290, 150, 300);
 bar(400, 150, 420, 160);
 setcolor(WHITE);
 line(200, 300, 200, 280);
 line(200, 280, 300, 280);
 line(410, 147, 410, 130);
 line(410, 130, 460, 130);
 line(73, 345, 120, 345);
 for (i = 0, j = 307; j >= 300; j--, i++) line (200-i, j, 200+i, j);
 for (i = 0, j = 148; j >= 141; j--, i++) line (410-i, j, 410+i, j);
 for (i = 0, j = 73; j <= 80; j++, i++) line (j, 345-i, j, 345+i);
 setcolor(LIGHTCYAN);
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
 outtextxy(304, 280, "Shoot the falling bars before");
 outtextxy(304, 293, "they touch this line");
 outtextxy(463, 130, "Falling");
 outtextxy(463, 143, "bar");
 outtextxy(123, 345, "Horizontal bar");
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
 getch();
}

void instructions2 () {                //instructions for 2nd level
 setcolor(LIGHTCYAN);
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(getmaxx()/2, 25, "INSTRUCTIONS:-");
 setcolor(YELLOW);
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
 outtextxy(30, 70, "Use the left and right arrow keys to");
 outtextxy(30, 100, "control the horizontal bar.");
 setfillstyle(SOLID_FILL, WHITE);
 setcolor(WHITE);
 bar(264, 180, 294, 190);
 bar(344, 180, 374, 190);
 for (int i = 0, j = 254; j <= 264; j++, i++) line(j, 185+i, j, 185-i);
 for (i = 0, j = 384; j >= 374; j--, i++) line (j, 185+i, j, 185-i);
 rectangle(251, 158, 298, 212);
 rectangle(340, 158, 387, 212);
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
 outtextxy(342, 220, "To move ");
 outtextxy(253, 220, "To move ");
 outtextxy(348, 232, "right");
 outtextxy(257, 232, "left");
 setfillstyle(SOLID_FILL+6, LIGHTCYAN);
 setcolor(YELLOW);
 outtextxy(110, 270, "Falling Bars:-");
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(165, 435, "Make sure you collect these bars");
 outtextxy(410, 300, "Horizontal bar:-");
 setcolor(RED);
 rectangle(90, 290, 240, 420);
 bar(100, 400, 120, 410);
 bar(130, 330, 150, 340);
 bar(170, 300, 190, 310);
 bar(210, 360, 230, 370);
 setfillstyle(INTERLEAVE_FILL, YELLOW);
 bar(400, 350, 440, 370);
 getch();
}

void instructions3 () {                //instructions for 3rd level
 setcolor(LIGHTCYAN);
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(getmaxx()/2, 25, "INSTRUCTIONS:-");
 setcolor(YELLOW);
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
 outtextxy(30, 70, "Use the left and right arrow keys to");
 outtextxy(30, 100, "control the horizontal bar.");
 setfillstyle(SOLID_FILL, WHITE);
 setcolor(WHITE);
 bar(264, 180, 294, 190);
 bar(344, 180, 374, 190);
 for (int i = 0, j = 254; j <= 264; j++, i++) line(j, 185+i, j, 185-i);
 for (i = 0, j = 384; j >= 374; j--, i++) line (j, 185+i, j, 185-i);
 rectangle(251, 158, 298, 212);
 rectangle(340, 158, 387, 212);
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
 settextjustify(LEFT_TEXT, CENTER_TEXT);
 outtextxy(342, 220, "To move ");
 outtextxy(253, 220, "To move ");
 outtextxy(348, 232, "right");
 outtextxy(257, 232, "left");
 setfillstyle(SOLID_FILL+6, LIGHTCYAN);
 setcolor(YELLOW);
 outtextxy(110, 270, "Falling Bars:-");
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(165, 435, "Make sure you avoid these bars");
 outtextxy(410, 300, "Horizontal bar:-");
 setcolor(RED);
 rectangle(90, 290, 240, 420);
 bar(100, 400, 120, 410);
 bar(130, 330, 150, 340);
 bar(170, 300, 190, 310);
 bar(210, 360, 230, 370);
 setfillstyle(INTERLEAVE_FILL, YELLOW);
 bar(400, 350, 440, 370);
 getch();
}

void levels() {                       //Displaying the 3 levels to be chosen

int i = 250;
settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
settextjustify(LEFT_TEXT, CENTER_TEXT);
delay(2);
 lo:
 setcolor(CYAN);
 cleardevice();
 outtextxy(30, 40, "Use the arrow keys to");
 outtextxy(30, 70, "choose your level.");
 outtextxy(30, 120, "Press 'Enter' to select");
 outtextxy(30, 150, "the level.");
 setcolor(WHITE);
 outtextxy(30, 250, "Level 1: Collecting bars");
 outtextxy(30, 300, "Level 2: Avoiding bars");
 outtextxy(30, 350, "Level 3: Shooting bars");
 loo:
 outtextxy(2, i, ">");
 rectangle(25, i-20, 610, i+20);
 if (kbhit()) {
  char c = getch();
       if (c == 72 && i == 250) i = 250;
  else if (c == 80 && i == 350) i = 300;
  else if (c == 72 && i != 250) i -= 50;
  else if (c == 80 && i != 350) i += 50;
  else if (c == 80 && i == 350) i = 350;
  else if (c == '\r') {
   cleardevice();

   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   switch(i/50) {
    case 5:
     instructions2();
     first();
     goto loop;
    case 6:
     instructions3();
     second();
     goto loop;
    default:
     instructions1();
     third();
     goto loop;
   }
  }
  goto lo;
 }
 else goto loo;
 loop:
}

void main()

{
  int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int s;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   int q = 0;
   char p[20];

   introduction();
   load();
   levels();

   closegraph();

}
