#include <iostream>
#include "Eigen/Eigen"
#include <fstream>
#include "map"

using namespace std;
using namespace Eigen;

struct PolygonalMesh
{
};

///\brief Import the Polygonal mesh and test if the mesh is correct
///\param mesh: a PolygonalMesh struct
///\return the result of the reading, true if is success, false otherwise
bool ImportMesh(PolygonalMesh& mesh);

///\brief Import the Cell0D properties from Cell0Ds.csv file
///\param mesh: a PolygonalMesh struct
///\return the result of the reading, true if is success, false otherwise
bool ImportCell0Ds(PolygonalMesh& mesh);

///\brief Import the Cell1D properties from Cell1Ds.csv file
///\param mesh: a PolygonalMesh struct
///\return the result of the reading, true if is success, false otherwise
bool ImportCell1Ds(PolygonalMesh& mesh);

///\brief Import the Cell2D properties from Cell2Ds.csv file
///\param mesh: a PolygonalMesh struct
///\return the result of the reading, true if is success, false otherwise
bool ImportCell2Ds(PolygonalMesh& mesh);

// ***************************************************************************
int main()
{

  PolygonalMesh mesh;

  if(!ImportMesh(mesh))
  {
    return 1;
  }

  return 0;
}
// ***************************************************************************
bool ImportMesh(PolygonalMesh& mesh)
{



  return false;

}
// ***************************************************************************
bool ImportCell0Ds(PolygonalMesh& mesh)
{

  return false;
}
// ***************************************************************************
bool ImportCell1Ds(PolygonalMesh& mesh)
{

  return false;
}
// ***************************************************************************
bool ImportCell2Ds(PolygonalMesh& mesh)
{


  return false;
}
