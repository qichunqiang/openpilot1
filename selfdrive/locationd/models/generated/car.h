#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_8079609560336100764);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_1284810348195938209);
void car_H_mod_fun(double *state, double *out_953904026523301598);
void car_f_fun(double *state, double dt, double *out_8989674808938825344);
void car_F_fun(double *state, double dt, double *out_6052562979390439626);
void car_h_25(double *state, double *unused, double *out_4049168441112938360);
void car_H_25(double *state, double *unused, double *out_5323251919241418601);
void car_h_24(double *state, double *unused, double *out_688455281409910982);
void car_H_24(double *state, double *unused, double *out_4482820135059373609);
void car_h_30(double *state, double *unused, double *out_3832104209641110825);
void car_H_30(double *state, double *unused, double *out_7841584877748667228);
void car_h_26(double *state, double *unused, double *out_8631716024762299038);
void car_H_26(double *state, double *unused, double *out_1581748600367362377);
void car_h_27(double *state, double *unused, double *out_952504826547907285);
void car_H_27(double *state, double *unused, double *out_5666821565948242317);
void car_h_29(double *state, double *unused, double *out_4573552610003115828);
void car_H_29(double *state, double *unused, double *out_8351816222063059412);
void car_h_28(double *state, double *unused, double *out_4805480087445830671);
void car_H_28(double *state, double *unused, double *out_3269417204993528838);
void car_h_31(double *state, double *unused, double *out_7686617969366960710);
void car_H_31(double *state, double *unused, double *out_955540498134010901);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}