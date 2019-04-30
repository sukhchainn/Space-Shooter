//Ojects IDS
enum IDS{PLAYER, BULLET, ENEMY};

//Our Player
struct SpaceShip
{
	int ID,
		x = 0,
		y = 0,
	lives = 0,
	boundx = 0,
	boundy = 0,
	score = 0,
	speed = 0;
};

struct Bullet
{
	int ID,
		x = 0,
		y = 0;
	bool live;
	int speed;
};

struct Comet
{
	int ID,
		x = 0,
		y = 0,
	live = 0,
	boundx = 0,
	boundy = 0,
	speed = 0;
};
