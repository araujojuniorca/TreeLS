//  ===============================================================================
//
//  Developers:
//
//  Tiago de Conto - ti@forlidar.com.br -  https://github.com/tiagodc/
//
//  COPYRIGHT: Tiago de Conto, 2019
//
//  This piece of software is open and free to use, redistribution and modifications
//  should be done in accordance to the GNU General Public License >= 3
//
//  Use this software as you wish, but no warranty is provided whatsoever. For any
//  comments or questions on TreeLS, please contact the developer (prefereably through my github account)
//
//  If publishing any work/study/research that used the tools in TreeLS,
//  please don't forget to cite the proper sources!
//
//  Enjoy!
//
//  ===============================================================================

#ifndef UTILS_HPP
#define UTILS_HPP

#include "classes.hpp"
using namespace Rcpp;

void bringOrigin(vector<vector<double> >& las);

vector<vector<double> > cropCloud(vector<vector<double> > cloud, double xCenter, double yCenter, double len = 1, bool circle = true, bool negative = false);

vector<bool> cropCloudFilter(vector<vector<double> > cloud, double xCenter, double yCenter, double len = 1, bool circle = true, bool negative = false);

vector<vector<vector<double> > > getChunks(vector<vector<double> >& cloud, vector<unsigned int>& identifier);

vector<double> getMinMax(vector<vector<double> >& xyz);

vector<vector<vector<double> > > getSlices(vector<vector<double> >& cloud, double zmin = 1, double zmax=3, double zstep = 0.5);

vector<vector<vector<double> > > getSlices(NumericMatrix& cloud, double zmin = 1, double zmax=3, double zstep = 0.5);

vector<unsigned int> idSortUnique(vector<unsigned int>& identifier, vector<unsigned int>& values);

vector<double> idSortUnique(vector<unsigned int>& identifier, vector<double>& values);

double mad(vector<double> x, double c = 1.4826);

double median(vector<double> x);

vector<vector<unsigned int> > partitionIndex(vector<unsigned int>& identifier, vector<unsigned int>& partitioner);

vector<vector<double> > partitionIndex(vector<unsigned int>& identifier, vector<double>& partitioner);

vector<vector<double> > randomPoints(vector<vector<double> >& cloud, double p = 0.5);

vector<vector<double> > rmatrix2cpp(NumericMatrix& cloud);

void tukeyBiSq(vector<double>& werrors, double b = 5);

vector<bool> voxelFilter(vector<vector<double> >& cloud, double voxel_spacing = 0.025);

vector<double> xprod(vector<double>& a, vector<double>& b);

#endif // UTILS_HPP
