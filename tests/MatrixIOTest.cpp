#define BOOST_TEST_DYN_LINK
#include <Eigen/Dense>
#include "matrixIO.hpp"
#include <boost/test/unit_test.hpp>

using namespace Eigen;

BOOST_AUTO_TEST_SUITE(MatrixIOTests)

BOOST_AUTO_TEST_CASE(openDataTest)
{
  MatrixXd expectedMatrix(3, 3);
  expectedMatrix << 0.680375, 0.59688, -0.329554, -0.211234, 0.823295, 0.536459,
      0.566198, -0.604897, -0.444451;

  MatrixXd actualMatrix = matrixIO::openData("../data/m3.csv", 3);

  BOOST_CHECK(actualMatrix.isApprox(expectedMatrix));
}

BOOST_AUTO_TEST_SUITE_END()