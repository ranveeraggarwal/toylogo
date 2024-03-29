/*
 * CS475/CS675 - Computer Graphics
 *  ToyLOGO Assignment Base Code
 *
 * Copyright 2009-2014, Parag Chaudhuri, Department of CSE, IIT Bombay
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "render_drawing.hpp"
/*
void triline(turtle_t &turt, double length)
{
   if (length <= 0.01)
   {
      turt.forward(length);
   }
   else
   {
     double newlength = length/3.0;
     triline(turt, newlength);
     turt.turn_left(60);
     triline(turt, newlength);
     turt.turn_right(120);
     triline(turt, newlength);
     turt.turn_left(60);
     triline(turt, newlength);
   }
}

//Drawing a Koch Snowflake
void koch(turtle_t &turt, double x)
{
   turt.reset();
   turt.clear();
   turt.set_pos(-0.3, 0.5);
   turt.turn_right(30);

   for (int i = 0; i<3; i++)
     {
       triline(turt, x);
       turt.turn_right(120);
     }
}

void render_drawing(turtle_t &turt)
{
  koch(turt, 1.0);
}
*/

void dragon(turtle_t &turt, int n) 
{
	if (n == 0) turt.forward(0.005);
	else {
		dragon(turt, n-1);
		turt.turn_left(90);
		nogard(turt, n-1);
	}
}

void nogard(turtle_t &turt, int n)
{
        if (n == 0) turt.forward(0.005);
        else {
                dragon(turt, n-1);
                turt.turn_right(90);
                nogard(turt, n-1);
        }
}

void render_drawing (turtle_t &turt)
{
  turt.reset();
  turt.clear();
	turt.set_bgcol(1,1,1);
	turt.set_col(0,0,0);
	turt.set_pos(-0.2, 0.3);
	dragon(turt, 15);
}
