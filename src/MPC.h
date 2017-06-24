#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;


#define W_cte 9
#define W_epsi 0.3
#define W_v 1.0
#define W_delta 8000
#define W_a 15
#define W_Ddelta 0.01
#define W_Da 0.00001
#define ref_v  80*1.6/3.6

class MPC {
 public:

  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
  vector<double> mpc_x;
  vector<double> mpc_y;
};

#endif /* MPC_H */
