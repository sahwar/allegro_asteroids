#include <stdio.h>
#include <math.h>
#include <allegro5/allegro.h>

typedef struct coordinate
{
  float x;
  float y;
}coor; //define an (x,y) coordinate to work with

coor midpoint(coor c1, coor c2)
{//A function to easily get the midpoint between two points
  coor newCoor;
  newCoor.x = (c1.x + c2.x)/2;
  newCoor.y = (c1.y + c2.y)/2;
  return newCoor;
}

bool isInAsteroid(coor objPt, coor astPt, int astSize)
{
  if(abs(objPt.x - astPt.x) < astSize && abs(objPt.y - astPt.y) < astSize)
  {
    return true;
  }
  return false;
}
