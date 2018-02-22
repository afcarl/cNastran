#ifndef _CNASTRAN__CARDS_GRID_H_
#define _CNASTRAN__CARDS_GRID_H_

#include <fstream> // std::ostream


class GRID {
	public:
		int nid;
		int cp;
		int cd;
		float xyz[3];
		int ps;
		int seid;
	public:
		GRID() {};
		~GRID() {};
		GRID(int NID, int CP, float XYZ[3], int CD=0, int PS=0, int SEID=0);
		void write(std::ostream &out) {};
};

class CORD2R {
	public:
		int cid;
		int rid;
		float origin[3];
		float z_axis[3];
		float xz_plane[3];
		float i[3];
		float j[3];
		float k[3];

	public:
		CORD2R();
		~CORD2R();
		CORD2R(int CID, int RID, float ORIGIN[3], float Z_AXIS[3], float XZ_PLANE[3]);
		CORD2R(BDFCard card);
		void write(std::ostream &out) {};
		void setup();
};


#endif // !_CNASTRAN__CARDS_GRID_H_
