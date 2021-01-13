#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
//new header file here
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <math.h>
#include<stdio.h>

static GLfloat spin = 0.0;//initial degree for spinning

static float	tx	=  -68.5;
static float	ty	=  -7.0;
int pu=0;
static float  p =0.5;
static float  q =0.5;

int tn=0;
int k=0;

int count=0;
int count1=0;

int tp=0;


static float	tx1	=  -81.0;
static float	ty1	=  30.0;


int st=0;
void run();

void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void rodbox()
{
      glColor3f(0.0,0.0,0.0);
            glBegin(GL_POLYGON);
                glVertex2f(0,0 );
                  glVertex2f(6,0);
                glVertex2f(6, -3);
                 glVertex2f(0,-3);
            glEnd();

}
void division()
{
    glColor3f(0.0, 0.74, 0.99);
            glBegin(GL_POLYGON);
                glVertex2f(-50, 50);

                glVertex2f(50, 50);
                glVertex2f(50, 25);
                glVertex2f(-50, 25);
            glEnd();

        glColor3f(0.80, 0.63, 0.58);
            glBegin(GL_POLYGON);
                glVertex2f(-50, 25);

                glVertex2f(50, 25);
                glVertex2f(50, -20);
                glVertex2f(-50, -20);
            glEnd();


}
void tree()
{
     glColor3f(0.0, 1.0, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(0, 0);
                glVertex2f(-6, -10);
                glVertex2f(6, -10);
            glEnd();
             glBegin(GL_POLYGON);
                glVertex2f(0, 3);
                glVertex2f(-6, -6);
                glVertex2f(6, -6);
            glEnd();
             glBegin(GL_POLYGON);
                glVertex2f(0, 6);
                glVertex2f(-6, -2);
                glVertex2f(6, -2);
            glEnd();
             glColor3f(0.54,0.26,0.07);
            glBegin(GL_POLYGON);
                glVertex2f(-1,-10 );
                glVertex2f(1, -10);
                glVertex2f(1, -18);
                glVertex2f(-1, -18);
            glEnd();




}
//hare

void hare()
{


     glPushMatrix();

     glRotatef(0,1,0,0);

    glScalef(p,q,1);

   //head

    glPushMatrix();


    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
	glTranslatef(tx1+2.5,ty1+4.5,0);
    glRotatef(135,0,0,1);
    circle(5.5,7.5);
	glPopMatrix();


	//eye

	 glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx1+3.5,ty1+6.5,0);
	glRotatef(-135,1,0,0);
    circle(0.5,1.5);
	glPopMatrix();


    //ear
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
	glTranslatef(tx1-1.5,ty1+10,0);
    glRotatef(-150,0,0,1);
    circle(1.5,5.6);
	glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
	glTranslatef(tx1+1.5,ty1+10,0);
    glRotatef(-135,0,1,0);
    circle(1.5,5.6);
	glPopMatrix();

	glPopMatrix();


	//leg
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
	glTranslatef(tx1+4.5,ty1-20.5,0);
    glRotatef(45,1,0,0);
    circle(2.5,1.6);
	glPopMatrix();

	glPushMatrix();
    glColor3f(1.0,1.0,1.0);
	glTranslatef(tx1+1,ty1-20.5,0);
	 glRotatef(135,1,0,0);
    circle(2.5,1.6);
	glPopMatrix();

	//body
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
	glTranslatef(tx1+2.5,ty1-9.5,0);
    glRotatef(45,0,1,0);
    circle(9.5,10.5);
	glPopMatrix();
    //body inner circle
    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
	glTranslatef(tx1+2.5,ty1-9.5,0);
    glRotatef(45,0,1,0);
    circle(1.5,8.5);
	glPopMatrix();



glPopMatrix();
	glFlush();



}







void tortoise()
{
      //upar hand leg

    glPushMatrix();
    glScalef(0.6,0.6,1);

    glPushMatrix();
    glColor3f(0.54,0.26,0.07);
	glTranslatef(tx+2.5,ty+3.5,0);
    glRotatef(45,0,0,1);

    circle(2.5,1.6);
	glPopMatrix();

	glPushMatrix();
    glColor3f(0.54,0.26,0.07);
	glTranslatef(tx-4,ty+3.5,0);
	 glRotatef(135,0,0,1);
    circle(2.5,1.6);
	glPopMatrix();

    //lower hand leg

	glPushMatrix();
    glColor3f(0.54,0.26,0.07);
	glTranslatef(tx+2.5,ty-3.5,0);
	  glRotatef(315,0,0,1);
    circle(2.5,1.6);
	glPopMatrix();


	glPushMatrix();
    glColor3f(0.54,0.26,0.07);
	glTranslatef(tx-4,ty-3.5,0);
	 glRotatef(225,0,0,1);
    circle(2.5,1.6);
	glPopMatrix();



	//kolaa :V

	glPushMatrix();
    glColor3f(0.54,0.26,0.07);
	glTranslatef(tx+5.5,ty,0);
    circle(3,2.75);
	glPopMatrix();



   //lez
     glPushMatrix();
    glColor3f(0.54,0.26,0.07);
	glTranslatef(tx-4,ty,0);
	// glRotatef(225,0,0,1);
    circle(4,1);
	glPopMatrix();


   //eye
   glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx+7,ty-0.78,0);
    circle(0.5,0.5);
	glPopMatrix();


   glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx+7,ty+0.78,0);
    circle(0.5,0.5);
	glPopMatrix();


    //tortoise green upper part

    glPushMatrix();
	glColor3f(0.132, 0.54, 0.13);
	glTranslatef(tx,ty,0);
    circle(5.5,4);
	glPopMatrix();



	glPushMatrix();
	glColor3f(0.60, 0.80, 0.19);
	glTranslatef(tx,ty,0);
    circle(4,3);
	glPopMatrix();

	glPopMatrix();


}
void start()
{
     glColor3f(0.57,0.0,0.82);
     glBegin(GL_POLYGON);
                glVertex2f(-38, 25);
                glVertex2f(-36, 25);
                glVertex2f(-36, -20);
                glVertex2f(-38, -20);
            glEnd();
}

void end()
{
    //end poster
        glColor3f(255/255,255/255,255/255);
     glBegin(GL_POLYGON);

                glVertex2f(38, 25);
                glVertex2f(34, 25);
                glVertex2f(34, 13);
                glVertex2f(38, 13);
            glEnd();


}

void end2()
{
    //end poster
        glColor3f(255/255,48/255,48/255);
     glBegin(GL_POLYGON);

                glVertex2f(38, 25);
                glVertex2f(34, 25);
                glVertex2f(34, 13);
                glVertex2f(38, 13);
            glEnd();


}
 void changeposi()
 {


 }

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);




     glPushMatrix();
     division();
     //starting line
     if(count1==0)
     {


      start();
     }
     //end count
    if(count==1 || count1==2)
    {

    glPushMatrix();
	glTranslatef(-3,0,0);
    end();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3,-12,0);
    end2();
	glPopMatrix();

	 glPushMatrix();
	glTranslatef(-3,-24,0);
    end();
	glPopMatrix();



glPushMatrix();
	glTranslatef(-3,-33,0);
    end2();
	glPopMatrix();

     }
     //2nd count

     glTranslatef(-55,13,0);
     rodbox();
     glPopMatrix();

	glPushMatrix();
     glTranslatef(-45,13,0);
     rodbox();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-35,13,0);
     rodbox();
     glPopMatrix();

      glPushMatrix();
     glTranslatef(-25,13,0);
     rodbox();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-15,13,0);
     rodbox();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-5,13,0);
     rodbox();
     glPopMatrix();


      glPushMatrix();
     glTranslatef(5,13,0);
     rodbox();
     glPopMatrix();

       glPushMatrix();
     glTranslatef(15,13,0);
     rodbox();
     glPopMatrix();

      glPushMatrix();
     glTranslatef(25,13,0);
     rodbox();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(35,13,0);
     rodbox();
     glPopMatrix();


      glPushMatrix();
     glTranslatef(45,13,0);
     rodbox();
     glPopMatrix();

    //2nd rod blox code


       glPushMatrix();
     glTranslatef(-55,-3,0);
     rodbox();
     glPopMatrix();

	glPushMatrix();
     glTranslatef(-45,-3,0);
     rodbox();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-35,-3,0);
     rodbox();
     glPopMatrix();

      glPushMatrix();
     glTranslatef(-25,-3,0);
     rodbox();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-15,-3,0);
     rodbox();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-5,-3,0);
     rodbox();
     glPopMatrix();


      glPushMatrix();
     glTranslatef(5,-3,0);
     rodbox();
     glPopMatrix();

       glPushMatrix();
     glTranslatef(15,-3,0);
     rodbox();
     glPopMatrix();

      glPushMatrix();
     glTranslatef(25,-3,0);
     rodbox();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(35,-3,0);
     rodbox();
     glPopMatrix();


      glPushMatrix();
     glTranslatef(45,-3,0);
     rodbox();
     glPopMatrix();







     glPushMatrix();
	glColor3f(0.0, 1.0, 0.0);
	glTranslatef(0,40,0);
	tree();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(20,40,0);
	tree();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(40,40,0);
	tree();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-20,40,0);
	tree();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-40,40,0);
	tree();
	glPopMatrix();



   	glPushMatrix();
    if(count1==0)
    {
        tortoise();
    }
    glPopMatrix();

    glPushMatrix();
    if(st==1)
    {




        tortoise();

    }

   glPopMatrix();
   printf("count %d",count);
   if(count==0 || k==1)
   {


	 hare();


   }

	glFlush();
}


void init(void)
{
	glClearColor (0.00, 0.00, 0.80, 0.0);

	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}

//spin head hare
/*void spinDisplay_left(void)
{
   spin = spin + 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 1;
   if (spin < 0.0)
      spin = spin +360.0;
   glutPostRedisplay();
}
*/
//kolla ghurbe :V :V

void run()
{
    double speed = 3.0;


    //tortoise run

     	tx +=0.5/45* speed;
     //	printf("tx = %f\n",tx);
            //    PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_FILENAME| SND_ASYNC);
                if(tx>90)
                {
                    tx	=  -39.0;
                    count++;
                   // printf("%d",count);

                }

     //hare run
             // printf("tx1 = %f\n",tx1);
               if(count1==0 || tx1<40)
               {


               tx1 +=0.5/15 * speed;
            //    PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_FILENAME| SND_ASYNC);
                if(tx1>90)
                {
                    tx1	=  -39.0;
                    count1++;
                   // printf("%d",count);

                }
               }









                if(count1==1 && tx1>26 && tn==0)
                {    ty1+=0.5/15;


                     if(ty1>40)
                     {

                           p=0.25;
                           q=0.25;
                           ty1=105;
                           tx1=65;
                           st=1;
                           st=1;
                           tn=1;

                           tx	=  -70.0;



                         //   PlaySound("1Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_FILENAME| SND_ASYNC);



                     }

                }
               if(count==0 && tx>-5 && tp==0 && ty1==105)
               {

                    PlaySound("1Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_FILENAME| SND_ASYNC);
                    tp=1;

               }
                if(count==1 &&  tx>10 && k==0) //3rd round a hare run
                {
                    tx1= -90.0;
                    ty1	= 30.0;
                    p=0.5;
                    q=0.5;
                    k=1;

                }
                if(count==1 &&  tx>47)    //tortoise touch the end position
                {
                    PlaySound("win.wav", NULL, SND_FILENAME| SND_ASYNC);
                     glutIdleFunc(NULL);
                }
                if(count==1 && pu==0)
                {
                     PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_FILENAME| SND_ASYNC);
                     pu=1;
                }
				glutPostRedisplay();
}
void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			//spinDisplay_left();
			//glutIdleFunc(spinDisplay_left);
			break;

		case 'r':
			//spinDisplay_right();
		//	PlaySound("2Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_FILENAME| SND_ASYNC);
			glutIdleFunc(run);
		//	run();
			break;

		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}

int main()
{


   PlaySound("Horn Honk-SoundBible.com-1162546405.wav", NULL, SND_FILENAME| SND_ASYNC);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1800, 1800);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Translating Circle");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	//glutSpecialFunc(spe_key);//up,down,left,right
	//glutSpecialFunc(spe_key1);//up,down,left,right
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

