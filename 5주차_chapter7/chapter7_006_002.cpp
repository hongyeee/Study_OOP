#include "chapter7_006_002.h"
class MyImage : virtual public MyObject
{

};

class MyShape : virtual public MyObject
{

};

class MyPicture : public MyImage, public MyShape
{

};