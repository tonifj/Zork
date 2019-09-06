#pragma once
#include <string>
#include <list>

using namespace std;

enum Type {
	ROOM,
	ITEM,
	EXIT,
	DOOR,
	CREATURE,
	PLAYER
};

class Entity {
public:
	Entity();
	Entity(const char*, const char*, Entity*);
	virtual ~Entity();

	Entity* Find(Entity* entity);

	Type type;
	string name;
	string desc;
	Entity* parent;
	list<Entity*> container;

	virtual void Update();
};