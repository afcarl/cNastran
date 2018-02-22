#include "grid.h"
#include "bdf_card.h"


//---------------------------------------------------------------------------------------
GRID::GRID(int NID, int CP, float XYZ[3], int CD=0, int PS=0, int SEID=0) {
	this->nid = NID;
	this->cp = CP;
	this->xyz = XYZ;
	this->cd = CD;
	this->ps = PS;
	this->seid = SEID;
}

//---------------------------------------------------------------------------------------

CORD2R::CORD2R(int CID, int RID, float ORIGIN[3], float Z_AXIS[3], float XZ_PLANE[3]) {
	this->cid = CID;
	this->rid = RID;
	this->origin = ORIGIN;
	this->z_axis = Z_AXIS;
	this->xz_plane = XZ_PLANE;
}

CORD2R::CORD2R(BDFCard card) {
	CID = 1
	RID = 0
	//std::vector<float> ORIGIN;
	ORIGIN   = [0., 0., 0.];
	Z_AXIS   = [0., 0., 1.];
	XZ_PLANE = [1., 0., 0.];
	return CORD2R(CID, RID, ORIGIN, Z_AXIS, float XZ_PLANE);
}

void COORD::setup() {
}

//---------------------------------------------------------------------------------------

#endif // !_CNASTRAN__CARDS_GRID_H_
