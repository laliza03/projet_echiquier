#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class Piece {
public:
	
	Piece(bool couleurPiece, int x, int y) : deCouleurBlanche(couleurPiece), positionX(x), positionY(y) {}
	virtual ~Piece() {}
	void setPosition(int positionX, int positionY);
	int getPositionX() const { return positionX; };
	int getPositionY() const { return positionY; };
	virtual void deplacerPiece(int positionX, int positionY) const = 0;
	virtual string getTypePiece() const = 0;

protected:
	bool deCouleurBlanche = true;
	int positionX = 0;
	int positionY = 0;

};


/*classe Pion --------------------------------------------------------------------------------------------------------*/
class Pion : public Piece {
public:
	Pion(bool couleurPiece, int x, int y) : Piece(deCouleurBlanche, x, y) {}
	~Pion() = default;
	void deplacerPiece(int positionX, int positionY) const override;
	string getTypePiece() const override { return "Pion"; }
};

/*classe fou --------------------------------------------------------------------------------------------------------*/
class Fou : public Piece {
public:
	Fou(bool couleurPiece, int x, int y) : Piece(deCouleurBlanche, x, y) {}
	~Fou() = default;
	void deplacerPiece(int positionX, int positionY) const override;
	string getTypePiece() const override { return "Fou"; }
};


/*classe tour --------------------------------------------------------------------------------------------------------*/
class Tour : public Piece {
public:
	Tour(bool couleurPiece, int x, int y) : Piece(deCouleurBlanche, x, y) {}
	~Tour() = default;
	void deplacerPiece(int positionX, int positionY) const override;
	string getTypePiece() const override { return "Tour"; }
};



/*classe cavalier --------------------------------------------------------------------------------------------------------*/
class Cavalier : public Piece {
public:
	Cavalier(bool couleurPiece, int x, int y) : Piece(deCouleurBlanche, x, y) {}
	~Cavalier() = default;
	void deplacerPiece(int positionX, int positionY) const override;
	string getTypePiece() const override { return "Cavalier"; }
};



/*classe Reine --------------------------------------------------------------------------------------------------------*/
class Reine : public Piece {
public:
	Reine(bool couleurPiece, int x, int y) : Piece(deCouleurBlanche, x, y) {}
	~Reine() = default;
	void deplacerPiece(int positionX, int positionY) const override;
	string getTypePiece() const override { return "Reine"; }
};




/*classe Roi --------------------------------------------------------------------------------------------------------*/
class Roi : public Piece {
public:
	Roi(bool couleurPiece, int x, int y) : Piece(deCouleurBlanche, x, y) {}
	~Roi() = default;
	void deplacerPiece(int positionX, int positionY) const override;
	string getTypePiece() const override { return "Roi"; }
};



