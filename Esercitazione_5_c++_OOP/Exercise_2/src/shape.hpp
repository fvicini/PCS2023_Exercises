#ifndef __SHAPE_H
#define __SHAPE_H

#include <iostream>
#include "Eigen/Eigen"

using namespace std;

namespace ShapeLibrary {

  class Polygon {
    public:
      Polygon() = default;
      Polygon(Eigen::MatrixXd& points) {};
      string Show() {return ""; }
      double Area(){ return 0.0; }
  };


  class Triangle : public Polygon
  {
    public:
      Triangle() = default;
      Triangle(double& base,
               double& height) {};

      Triangle(Eigen::MatrixXd& points) {};
  };


  class TriangleEquilateral final : public Triangle
  {
    public:
      TriangleEquilateral(double& edgeLength) {};
      TriangleEquilateral(double& base,
                          double& height) {};
  };

  class Quadrilateral : public Polygon
  {
    public:
      Quadrilateral() = default;
      Quadrilateral(Eigen::MatrixXd& points) {};
      Quadrilateral(Triangle& t1, Triangle& t2) {};
  };

  class Rectangle : public Quadrilateral
  {
    public:
      Rectangle() = default;
      Rectangle(Eigen::MatrixXd& points) {};
      Rectangle(Triangle& t1, Triangle& t2) {};
      Rectangle(double& base, double& height) {};
  };

  class Square final: public Rectangle
  {
    public:
      Square(Eigen::MatrixXd& points) {};
      Square(Triangle& t1, Triangle& t2) {};
      Square(double& base, double& height) {};
      Square(double& edgeLength) {};
  };
}

#endif // __SHAPE_H
