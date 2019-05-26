#pragma once

#ifndef _OCTREE_H_
#define _OCTREE_H_


#include "stdafx.h"
#include "Color3D.h"


class OctVoxel {
public:

	CVector3d origin;
	double length;
	double height;

	void SetOrigin(CVector3d ori);
	void SetVertexWorld(CVector3d* vertW);

};

class CubeNew
{
private:
	float coordX;
	float coordY;
	float coordZ;

	float directionX;
	float directionY;
	float directionZ;
	bool selected;

public:
	CubeNew(float cX, float cY, float cZ, float dX, float dY, float dZ)
	{
		coordX = cX;
		coordY = cY;
		coordZ = cZ;

		directionX = dX;
		directionY = dY;
		directionZ = dZ;

		selected = false;
	}

	float getCoordX()
	{
		return coordX;
	}
	float getCoordY()
	{
		return coordY;
	}
	float getCoordZ()
	{
		return coordZ;
	}
	float getDirectionX()
	{
		return directionX;
	}
	float getDirectionY()
	{
		return directionY;
	}
	float getDirectionZ()
	{
		return directionZ;
	}
	bool getSelected()
	{
		return selected;
	}
	void setSelected(bool what)
	{
		selected = what;
	}


};

#endif 