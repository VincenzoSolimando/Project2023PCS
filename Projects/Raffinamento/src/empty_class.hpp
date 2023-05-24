#ifndef __EMPTY_H
#define __EMPTY_H

#include <iostream>
#include "Eigen/Eigen"
#include <fstream>

using namespace std;
using namespace Eigen;

namespace Cells{

    class 0DCell{
    private:
        int marker0D;

    public:
        int id0D;
        double X;
        double Y;

        0DCell(); //(const int& id0D = 0, const double& X = 0.0, const double& Y = 0.0);
    }


    class 1DCell{
    private:
        int marker1D;

    public:
        int id1D;
        0DCell origin;
        0DCell end;

        1DCell(); //(const int& origin = 0, const int& end = 0);

        double distanza(const double& origin.X, const double& end.X, const double& origin.Y, const double& end.Y){
            return(sqrt(pow(origin.X - end.X, 2) + pow(origin.Y - end.Y, 2))
        }
    }


    class 2DCell{
    public:
        int id2D;
        0DCell vertix_1;
        0DCell vertix_2;
        0DCell vertix_3;

        1DCell edge_1;
        1DCell edge_2;
        1DCell edge_3;

        2DCell();

        double semiper(const double& edge_1.distanza, const double& edge_2.distanza, const double& edge_3.distanza){
            return(edge_1 + edge_2 + edge_3)
        }

        double area(const double& edge_1.distanza, const double& edge_2.distanza, const double& edge_3.distanza){
            return(sqrt(semiper*(semiper - edge_1)*(semiper - edge_2)*(semiper - edge_3)))
        }


    }

 }
