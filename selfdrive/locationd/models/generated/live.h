#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_35(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_3707607618008827735);
void live_err_fun(double *nom_x, double *delta_x, double *out_8889596012539456022);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_8186084282363663709);
void live_H_mod_fun(double *state, double *out_9033535444268355538);
void live_f_fun(double *state, double dt, double *out_1762701924325579085);
void live_F_fun(double *state, double dt, double *out_8716173806635394316);
void live_h_4(double *state, double *unused, double *out_8087953207895349006);
void live_H_4(double *state, double *unused, double *out_4744242339123377731);
void live_h_9(double *state, double *unused, double *out_1825179239564897048);
void live_H_9(double *state, double *unused, double *out_2542976596141069739);
void live_h_10(double *state, double *unused, double *out_4472518312072445038);
void live_H_10(double *state, double *unused, double *out_815010115426517490);
void live_h_12(double *state, double *unused, double *out_22462373038904352);
void live_H_12(double *state, double *unused, double *out_2922885974559072761);
void live_h_35(double *state, double *unused, double *out_6878205388396896994);
void live_H_35(double *state, double *unused, double *out_1377580281750770355);
void live_h_32(double *state, double *unused, double *out_1174559319048268550);
void live_H_32(double *state, double *unused, double *out_2708155406346152745);
void live_h_13(double *state, double *unused, double *out_4509974783768870980);
void live_H_13(double *state, double *unused, double *out_3646922939416555141);
void live_h_14(double *state, double *unused, double *out_1825179239564897048);
void live_H_14(double *state, double *unused, double *out_2542976596141069739);
void live_h_33(double *state, double *unused, double *out_146926177404743019);
void live_H_33(double *state, double *unused, double *out_1772976722888087249);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}