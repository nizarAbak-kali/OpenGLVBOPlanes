#ifndef MAIN
#define MAIN
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct obstacle{
  GLfloat x,y,z,size;
};
typedef struct obstacle obstacle;
obstacle *tobstacle;
GLUquadricObj *quadAtmosphere;

void collision(void);
void initObstacle(void);
void dessineSol(void);
void dessineFond(void);
void dessineObstacle(void);
void display(void);
void keyboard(int key, int x, int y);
void init (void);
void idle(void);
void reshape (int w, int h);

#endif

