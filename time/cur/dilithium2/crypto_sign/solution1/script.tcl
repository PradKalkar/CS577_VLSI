############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
############################################################
open_project crypto_sign
set_top crypto_sign
add_files aes.c
add_files aes256ctr.c
add_files fips202.c
add_files ntt.c
add_files packing.c
add_files poly.c
add_files polyvec.c
add_files reduce.c
add_files rng.c
add_files rounding.c
add_files sign.c
add_files symmetric-aes.c
add_files symmetric-shake.c
add_files -tb PQCgenKAT_sign.c
open_solution "solution1" -flow_target vivado
set_part {xc7a200tfbg676-2}
create_clock -period 10000 -name default
#source "./crypto_sign/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
