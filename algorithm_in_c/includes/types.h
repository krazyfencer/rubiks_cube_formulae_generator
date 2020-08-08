#ifndef _YPES_H
#define _YPES_H
/* File Description: All object types of game*/

#define CUBE_SIZE (3)
#define CUBE_SIDES (6)

#define SIDE_ROWS CUBE_SIZE
#define SIDE_COLUMNS CUBE_SIZE

#define WHITE 	'w'
#define RED			'r'
#define GREEN		'g'
#define BLUE		'b'
#define YELLOW	'y'
#define ORANGE	'o'

#define FRONT	(0)
#define BACK	(1)
#define LEFT	(2)
#define RIGHT	(3)
#define UP		(4)
#define	DOWN	(5)

typedef struct cube_side_t
{
	char colour[3][3];
}cube_side_t;

typedef struct sides_t
{
	cube_side_t front;
	cube_side_t back;
	cube_side_t left;
	cube_side_t right;
	cube_side_t up;
	cube_side_t down;
}sides_t;

typedef union cube_t
{
	sides_t sides;
	char cube_map[18][3];
}cube_t;

#endif
