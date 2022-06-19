//2022-06-12 12:54:58.826924
#ifndef QPAIR_NET_PARAMS_H
#define QPAIR_NET_PARAMS_H

#include <stdint.h>
#include <stdbool.h>

#define GESN 12
struct Conv1d_Params {
	int input_width;
	int in_channels;
	int out_channels;
	int kernel_size;
	int stride_size;
	int padding_front;
	int padding_back;
	int output_width;
	double out_scale;
	double s1;
	double s2;
	double sb;
	double s4;
	int z1;
	int z2;
	int zb;
	int z4;
	};
struct Dense_Params {
	//I=BATCH_SIZE;
	int K;
	int J;
	double out_scale;
	double s1;
	double s2;
	double sb;
	double s3;
	int z1;
	int z2;
	int zb;
	int z3;
	};
static const elem_t QConv_BN1[3][6][16]=
{{{-24,-4,127,-12,-111,0,-54,5,71,-5,-16,-29,-107,-37,64,-12},{-2,-1,14,13,-14,31,-6,-44,127,27,12,-24,75,-19,-29,69},{41,-24,55,9,-128,-12,-5,-4,11,-16,-21,-14,53,43,-56,-80},{18,-2,55,-6,55,0,14,9,21,-2,-21,-5,19,-45,-20,-24},{8,20,59,-16,-11,9,-19,10,-14,-17,3,20,11,22,12,-19},{14,1,-51,-14,42,-22,1,10,17,-6,9,3,6,11,-17,-13}},{{13,-11,127,-13,-128,17,-16,-5,10,-11,8,-17,-38,-31,52,19},{-49,6,-31,20,-98,30,4,-23,127,27,-8,-56,71,-18,-73,10},{34,-29,72,11,-115,13,27,-8,36,-16,-26,-4,46,28,3,-65},{-2,-10,-65,-11,-49,-35,22,-18,-19,-14,-9,16,-6,-4,15,8},{19,-2,-68,-12,-7,-28,5,8,-18,-14,-27,28,-33,-18,-5,34},{12,12,-32,-6,-37,-18,26,14,15,14,28,17,-18,25,21,-14}},{{-25,-44,127,-6,-128,17,-3,8,78,38,12,3,-100,-68,27,-5},{-56,42,13,26,20,5,46,-24,127,20,-10,-63,123,-12,-90,8},{46,-29,42,1,-94,-7,52,-6,39,0,-26,-2,30,4,-26,-67},{12,2,2,-1,35,-20,-21,-23,-14,-7,-18,1,3,12,16,16},{6,14,-29,-18,13,-20,-3,-18,31,-16,18,-22,-7,39,-34,17},{5,24,47,-5,41,20,26,16,16,9,1,24,-36,-41,35,-28}}};
static const elem_t QConv_BN_mc2_1[18][16]=
{{-24,-4,127,-12,-111,0,-54,5,71,-5,-16,-29,-107,-37,64,-12},{-2,-1,14,13,-14,31,-6,-44,127,27,12,-24,75,-19,-29,69},{41,-24,55,9,-128,-12,-5,-4,11,-16,-21,-14,53,43,-56,-80},{18,-2,55,-6,55,0,14,9,21,-2,-21,-5,19,-45,-20,-24},{8,20,59,-16,-11,9,-19,10,-14,-17,3,20,11,22,12,-19},{14,1,-51,-14,42,-22,1,10,17,-6,9,3,6,11,-17,-13},{13,-11,127,-13,-128,17,-16,-5,10,-11,8,-17,-38,-31,52,19},{-49,6,-31,20,-98,30,4,-23,127,27,-8,-56,71,-18,-73,10},{34,-29,72,11,-115,13,27,-8,36,-16,-26,-4,46,28,3,-65},{-2,-10,-65,-11,-49,-35,22,-18,-19,-14,-9,16,-6,-4,15,8},{19,-2,-68,-12,-7,-28,5,8,-18,-14,-27,28,-33,-18,-5,34},{12,12,-32,-6,-37,-18,26,14,15,14,28,17,-18,25,21,-14},{-25,-44,127,-6,-128,17,-3,8,78,38,12,3,-100,-68,27,-5},{-56,42,13,26,20,5,46,-24,127,20,-10,-63,123,-12,-90,8},{46,-29,42,1,-94,-7,52,-6,39,0,-26,-2,30,4,-26,-67},{12,2,2,-1,35,-20,-21,-23,-14,-7,-18,1,3,12,16,16},{6,14,-29,-18,13,-20,-3,-18,31,-16,18,-22,-7,39,-34,17},{5,24,47,-5,41,20,26,16,16,9,1,24,-36,-41,35,-28}};
static const acc_t QConv_BN_bias1[16] = 
{1210,-310,-1612,-889,2260,-1214,-2228,306,-4109,-1359,-20,1138,-1685,848,1536,16};
const struct Conv1d_Params QConv_BN1_params = {.input_width=50, .in_channels=6,.out_channels = 16,.kernel_size =3,.stride_size=1,.padding_front= 0,.padding_back= 0,.output_width=48,.out_scale=0.012231614814353461,.s1=0.9189412337744948,.z1=-1,.s2=0.0002701257738996955,.z2=-1,.sb=0.008982686215362672,.zb=-3,.s4=0.020294107990580745,.z4=-6};
static const elem_t QConv_BN2[2][16][16]=
{{{52,77,-12,73,6,1,2,27,-35,-35,-10,15,-42,38,33,18},{-71,-85,36,38,-56,-13,16,11,38,-66,21,-78,86,48,-80,10},{105,-19,1,54,-10,78,-49,-38,-35,61,-12,25,108,33,21,-64},{-18,57,33,42,31,-3,-27,-31,-24,22,-19,-4,24,-30,29,61},{-91,-29,18,55,47,31,32,2,36,-17,-59,-98,92,-80,-102,-51},{48,-34,-25,-45,65,-19,-14,-2,-45,33,33,-15,7,-84,-88,4},{-50,-56,61,-55,13,-72,-16,3,-63,63,-27,82,-22,-43,-51,-11},{-42,-56,-7,18,-39,-52,-33,-11,-26,14,46,-1,76,-8,-22,25},{16,58,51,-79,26,23,46,20,-6,10,-48,-25,29,52,-61,-72},{32,-60,-48,-28,21,12,-50,-27,-28,43,-52,-33,-3,-26,-75,50},{-51,0,-74,42,43,22,4,-43,26,-18,14,-17,-8,44,24,-11},{-81,-40,-53,30,37,-33,-23,24,-36,23,-29,39,-115,67,-103,-20},{-90,68,54,-8,56,-12,-30,-20,-60,39,14,-25,109,-5,31,74},{-44,-44,18,-61,46,-45,-24,16,-29,40,7,-9,-26,28,36,-22},{24,-64,-46,-48,-36,-14,19,19,19,-6,-64,-55,-83,-4,36,6},{61,23,29,6,21,-5,-57,-9,-68,-25,35,27,-54,-20,-125,-71}},{{-3,18,-71,69,41,-27,59,15,-42,-59,31,89,-41,23,41,88},{-42,-7,-41,-14,68,58,19,-39,2,-34,32,16,113,5,-51,-64},{-27,52,32,9,-3,-3,23,-47,-35,30,13,-87,-19,69,12,7},{34,-88,43,0,34,-1,24,-28,29,-11,-6,37,83,-87,-9,51},{37,-23,44,-18,12,-77,11,1,51,-31,-40,-48,24,27,-36,67},{-94,-53,51,3,60,-23,34,-28,32,65,-38,58,-105,-42,9,80},{13,91,32,-15,29,-84,60,-41,38,-39,30,83,117,-40,-54,40},{-51,-23,-58,81,3,-21,-3,3,-31,50,-12,-71,-48,-53,51,49},{-86,21,-47,31,53,67,58,21,2,23,-64,71,124,-16,-48,16},{48,-51,-7,0,30,15,-42,-45,-11,11,-48,-49,-123,-7,64,26},{44,13,-14,26,49,29,37,19,53,-6,-34,-76,8,23,-38,4},{99,-33,-56,64,43,-72,-11,19,28,13,-36,-64,-9,46,49,91},{-14,74,-28,-45,60,40,-67,-29,-45,-13,-46,56,78,-23,-43,103},{-38,-70,14,3,-14,61,35,38,-33,15,-18,59,-30,18,56,49},{-35,-1,52,62,23,1,0,-1,29,-40,-62,-36,-71,-73,61,-64},{-19,-54,0,103,-52,72,-3,13,-102,24,-9,75,19,-86,-71,-81}}};
static const elem_t QConv_BN_mc2_2[32][16]=
{{52,77,-12,73,6,1,2,27,-35,-35,-10,15,-42,38,33,18},{-71,-85,36,38,-56,-13,16,11,38,-66,21,-78,86,48,-80,10},{105,-19,1,54,-10,78,-49,-38,-35,61,-12,25,108,33,21,-64},{-18,57,33,42,31,-3,-27,-31,-24,22,-19,-4,24,-30,29,61},{-91,-29,18,55,47,31,32,2,36,-17,-59,-98,92,-80,-102,-51},{48,-34,-25,-45,65,-19,-14,-2,-45,33,33,-15,7,-84,-88,4},{-50,-56,61,-55,13,-72,-16,3,-63,63,-27,82,-22,-43,-51,-11},{-42,-56,-7,18,-39,-52,-33,-11,-26,14,46,-1,76,-8,-22,25},{16,58,51,-79,26,23,46,20,-6,10,-48,-25,29,52,-61,-72},{32,-60,-48,-28,21,12,-50,-27,-28,43,-52,-33,-3,-26,-75,50},{-51,0,-74,42,43,22,4,-43,26,-18,14,-17,-8,44,24,-11},{-81,-40,-53,30,37,-33,-23,24,-36,23,-29,39,-115,67,-103,-20},{-90,68,54,-8,56,-12,-30,-20,-60,39,14,-25,109,-5,31,74},{-44,-44,18,-61,46,-45,-24,16,-29,40,7,-9,-26,28,36,-22},{24,-64,-46,-48,-36,-14,19,19,19,-6,-64,-55,-83,-4,36,6},{61,23,29,6,21,-5,-57,-9,-68,-25,35,27,-54,-20,-125,-71},{-3,18,-71,69,41,-27,59,15,-42,-59,31,89,-41,23,41,88},{-42,-7,-41,-14,68,58,19,-39,2,-34,32,16,113,5,-51,-64},{-27,52,32,9,-3,-3,23,-47,-35,30,13,-87,-19,69,12,7},{34,-88,43,0,34,-1,24,-28,29,-11,-6,37,83,-87,-9,51},{37,-23,44,-18,12,-77,11,1,51,-31,-40,-48,24,27,-36,67},{-94,-53,51,3,60,-23,34,-28,32,65,-38,58,-105,-42,9,80},{13,91,32,-15,29,-84,60,-41,38,-39,30,83,117,-40,-54,40},{-51,-23,-58,81,3,-21,-3,3,-31,50,-12,-71,-48,-53,51,49},{-86,21,-47,31,53,67,58,21,2,23,-64,71,124,-16,-48,16},{48,-51,-7,0,30,15,-42,-45,-11,11,-48,-49,-123,-7,64,26},{44,13,-14,26,49,29,37,19,53,-6,-34,-76,8,23,-38,4},{99,-33,-56,64,43,-72,-11,19,28,13,-36,-64,-9,46,49,91},{-14,74,-28,-45,60,40,-67,-29,-45,-13,-46,56,78,-23,-43,103},{-38,-70,14,3,-14,61,35,38,-33,15,-18,59,-30,18,56,49},{-35,-1,52,62,23,1,0,-1,29,-40,-62,-36,-71,-73,61,-64},{-19,-54,0,103,-52,72,-3,13,-102,24,-9,75,19,-86,-71,-81}};
static const acc_t QConv_BN_bias2[16] = 
{5389,5692,2051,-6900,-13423,-1438,534,4630,9181,-1438,11609,3113,-3411,4782,9485,-5535};
const struct Conv1d_Params QConv_BN2_params = {.input_width=48, .in_channels=16,.out_channels = 16,.kernel_size =2,.stride_size=2,.padding_front= 0,.padding_back= 0,.output_width=24,.out_scale=0.005085238813365921,.s1=0.020294107990580745,.z1=-6,.s2=0.005131459341329688,.z2=2,.sb=0.015798869733172773,.zb=-16,.s4=0.020478564300363662,.z4=-5};
static const elem_t QConv_BN3[2][16][16]=
{{{40,24,39,30,71,-14,25,10,100,69,-5,7,81,-4,52,45},{-54,52,-11,-55,1,50,-18,25,60,-33,18,4,1,-10,15,30},{20,27,-78,45,40,-29,10,-61,-10,-16,7,-9,18,19,-91,-43},{-27,20,76,70,6,39,63,-29,57,-67,12,-42,-7,-47,-21,-84},{12,67,-52,-22,57,-89,35,26,-30,-88,35,41,8,1,13,-58},{-43,64,43,29,58,-1,-58,-36,54,49,18,25,-48,-62,8,12},{20,14,8,-26,36,10,-21,18,-18,61,-50,20,-60,-13,26,62},{-45,-28,25,-1,34,11,25,-28,-75,80,-3,-18,20,34,52,-10},{40,36,-25,-15,-13,-19,30,28,47,50,22,-70,28,-73,42,10},{25,-60,-40,-27,24,33,34,-14,16,-66,-44,26,28,-21,-4,13},{-28,-42,-82,-18,5,-54,-27,49,92,-8,0,49,-43,-32,-86,-38},{1,43,-5,60,-59,20,-28,19,-13,-80,-72,-20,-53,-7,41,26},{-30,-6,-40,5,24,-48,-15,-64,14,19,-4,39,8,40,16,7},{-57,65,45,22,50,7,-40,8,80,98,-14,-3,-5,58,-5,-29},{15,-1,-19,-115,28,13,-16,-29,47,39,-35,43,39,117,86,32},{3,-38,-69,-71,8,-15,34,-21,-48,0,49,14,18,28,-33,48}},{{13,-2,-29,-14,-42,-75,43,-52,104,44,-24,35,-34,33,-61,18},{37,53,-56,-91,-32,29,-11,13,24,65,8,27,-19,-52,-54,-38},{-12,-33,27,29,72,27,47,-59,-60,-42,-30,-4,-62,-78,-73,65},{11,31,-8,30,-71,54,45,57,37,-6,-103,-1,-17,-2,-61,23},{-26,-33,49,-5,-29,-62,-33,27,2,79,-71,-9,2,32,23,-53},{45,40,-17,51,19,33,-44,-12,-52,-7,-31,57,-27,-76,62,30},{-3,-23,-28,-24,35,38,76,-28,75,-47,-3,-47,-86,-71,44,-28},{-58,33,79,19,-14,55,36,-37,-32,-27,-51,-32,0,-16,-77,-52},{20,59,40,64,-26,-64,-18,35,17,-34,42,-69,-82,-80,92,24},{56,-76,62,-39,-39,-17,25,2,-57,-25,-38,-1,43,-81,69,8},{-1,86,-53,34,-15,-22,-109,57,34,-19,-25,-12,-15,13,-40,14},{6,71,-56,-64,-17,59,-6,13,54,-65,-24,17,-94,-32,-2,50},{21,-13,-8,-32,67,-9,-29,-64,-25,28,-21,-11,-22,-7,-58,-81},{-21,-50,-54,7,64,50,4,52,-37,98,-36,-10,77,-10,-44,-46},{-43,-13,-54,-58,12,38,-41,51,-10,-31,-34,22,-31,105,32,55},{38,56,4,1,77,41,-57,-26,-5,4,-25,-25,28,87,-65,-67}}};
static const elem_t QConv_BN_mc2_3[32][16]=
{{40,24,39,30,71,-14,25,10,100,69,-5,7,81,-4,52,45},{-54,52,-11,-55,1,50,-18,25,60,-33,18,4,1,-10,15,30},{20,27,-78,45,40,-29,10,-61,-10,-16,7,-9,18,19,-91,-43},{-27,20,76,70,6,39,63,-29,57,-67,12,-42,-7,-47,-21,-84},{12,67,-52,-22,57,-89,35,26,-30,-88,35,41,8,1,13,-58},{-43,64,43,29,58,-1,-58,-36,54,49,18,25,-48,-62,8,12},{20,14,8,-26,36,10,-21,18,-18,61,-50,20,-60,-13,26,62},{-45,-28,25,-1,34,11,25,-28,-75,80,-3,-18,20,34,52,-10},{40,36,-25,-15,-13,-19,30,28,47,50,22,-70,28,-73,42,10},{25,-60,-40,-27,24,33,34,-14,16,-66,-44,26,28,-21,-4,13},{-28,-42,-82,-18,5,-54,-27,49,92,-8,0,49,-43,-32,-86,-38},{1,43,-5,60,-59,20,-28,19,-13,-80,-72,-20,-53,-7,41,26},{-30,-6,-40,5,24,-48,-15,-64,14,19,-4,39,8,40,16,7},{-57,65,45,22,50,7,-40,8,80,98,-14,-3,-5,58,-5,-29},{15,-1,-19,-115,28,13,-16,-29,47,39,-35,43,39,117,86,32},{3,-38,-69,-71,8,-15,34,-21,-48,0,49,14,18,28,-33,48},{13,-2,-29,-14,-42,-75,43,-52,104,44,-24,35,-34,33,-61,18},{37,53,-56,-91,-32,29,-11,13,24,65,8,27,-19,-52,-54,-38},{-12,-33,27,29,72,27,47,-59,-60,-42,-30,-4,-62,-78,-73,65},{11,31,-8,30,-71,54,45,57,37,-6,-103,-1,-17,-2,-61,23},{-26,-33,49,-5,-29,-62,-33,27,2,79,-71,-9,2,32,23,-53},{45,40,-17,51,19,33,-44,-12,-52,-7,-31,57,-27,-76,62,30},{-3,-23,-28,-24,35,38,76,-28,75,-47,-3,-47,-86,-71,44,-28},{-58,33,79,19,-14,55,36,-37,-32,-27,-51,-32,0,-16,-77,-52},{20,59,40,64,-26,-64,-18,35,17,-34,42,-69,-82,-80,92,24},{56,-76,62,-39,-39,-17,25,2,-57,-25,-38,-1,43,-81,69,8},{-1,86,-53,34,-15,-22,-109,57,34,-19,-25,-12,-15,13,-40,14},{6,71,-56,-64,-17,59,-6,13,54,-65,-24,17,-94,-32,-2,50},{21,-13,-8,-32,67,-9,-29,-64,-25,28,-21,-11,-22,-7,-58,-81},{-21,-50,-54,7,64,50,4,52,-37,98,-36,-10,77,-10,-44,-46},{-43,-13,-54,-58,12,38,-41,51,-10,-31,-34,22,-31,105,32,55},{38,56,4,1,77,41,-57,-26,-5,4,-25,-25,28,87,-65,-67}};
static const acc_t QConv_BN_bias3[16] = 
{1044,-7330,6418,3043,-6830,-1081,2168,1044,-7205,-1081,12292,919,7168,6543,4293,4043};
const struct Conv1d_Params QConv_BN3_params = {.input_width=24, .in_channels=16,.out_channels = 16,.kernel_size =2,.stride_size=2,.padding_front= 0,.padding_back= 0,.output_width=12,.out_scale=0.006039276261648478,.s1=0.020478564300363662,.z1=-5,.s2=0.006313609913283705,.z2=1,.sb=0.01615898056423709,.zb=-15,.s4=0.021408801481338738,.z4=-2};
static const elem_t QConv_BN4[2][16][32]=
{{{-32,43,7,-2,-71,-118,47,-72,6,58,24,23,43,-6,81,-48,77,32,61,6,-17,-62,-53,-67,42,38,23,-19,-12,13,34,27},{-62,-58,-34,-26,69,73,-47,-36,48,-50,49,22,-44,-18,-97,59,-65,-95,-38,22,31,-9,-79,14,-32,-13,13,-19,-62,-19,-14,-9},{-16,-28,2,18,64,62,34,-29,72,41,-24,-26,-18,-3,-2,53,12,15,31,-26,-19,-72,43,-48,30,62,26,-26,49,-56,26,40},{31,-66,-48,-42,88,31,-21,-42,22,58,-6,39,71,-3,-11,41,-2,87,80,10,-56,-88,-52,32,-8,37,-14,-26,48,-16,4,68},{-33,30,-32,-40,20,-68,36,-32,-6,19,-18,-55,-13,-39,51,38,-97,-26,4,-51,25,-12,-29,-75,-49,52,48,-18,15,35,-83,84},{46,-29,61,-41,-32,79,-89,-42,-24,-5,-37,26,15,21,35,-25,25,85,18,8,-34,-29,-14,49,20,4,-78,-33,57,3,-40,-1},{-5,-9,31,17,-36,-10,-49,25,30,40,-33,23,-17,-7,83,31,-105,40,25,10,-2,-55,-5,-24,46,40,-18,-1,24,3,-29,54},{-45,37,-24,4,67,-61,20,14,-15,-38,57,-9,-51,15,6,18,12,-5,38,-24,14,-36,14,-39,-93,-6,-21,-24,-46,-71,58,-9},{-72,26,-51,-49,-41,-108,8,65,-8,16,3,54,-51,-20,53,-7,-72,-33,-107,7,-8,43,-20,-64,-79,-33,-32,-25,-84,-29,-59,71},{55,-33,-4,26,-23,6,-55,-14,72,-54,20,40,17,-30,113,-16,-42,20,24,51,22,5,-55,-22,-21,57,28,-21,34,-63,-40,16},{-38,78,-23,-1,-4,66,16,-84,-17,-11,25,-61,19,28,39,-128,-11,79,-2,13,-5,-16,1,-33,29,5,12,70,38,6,54,-19},{32,38,-5,-30,-77,-15,42,-38,66,82,-39,15,-29,-24,-23,47,-5,70,24,-22,70,-46,30,4,-38,-18,26,-19,-27,-26,-35,-49},{24,-31,-30,5,-14,-10,32,-51,61,-2,21,-27,-54,-22,46,-55,-9,19,38,33,35,109,-87,104,0,27,-38,27,49,-2,4,-108},{17,-39,64,15,23,15,-25,3,26,13,-7,-23,23,-33,-105,-48,2,22,-28,-12,34,-44,-21,53,48,35,30,17,8,-45,9,-35},{44,-109,10,-34,33,-26,-68,-51,-5,53,44,25,-25,38,-61,55,-77,-14,-63,12,72,-14,47,71,-4,-34,-42,18,-88,-11,-54,-41},{-14,19,46,48,51,-46,-50,32,21,78,54,-29,3,-13,106,98,32,62,4,-82,69,10,60,26,-5,-41,76,-1,16,20,51,102}},{{20,-24,-91,27,-39,-75,47,53,34,-31,42,36,41,-49,-2,18,63,55,55,-41,-82,-124,47,-50,49,10,34,-64,-6,14,-68,9},{15,-2,-33,29,-56,-37,56,-110,38,2,-44,15,-9,9,57,42,32,-46,4,92,-102,2,-70,-76,-11,59,46,-18,-5,-37,-2,-13},{-92,57,47,13,19,-55,16,100,58,-10,-16,39,-11,29,26,5,13,79,12,-36,6,-41,13,-59,-23,-44,40,34,-17,-34,-22,-50},{-92,-98,48,6,57,-22,10,-65,-33,70,-24,1,24,-32,68,65,23,31,48,-4,81,25,10,45,38,56,-4,-21,8,-7,28,-25},{-26,-7,-60,26,-11,-7,9,-37,-55,-13,8,-4,36,-17,-28,-9,-23,-44,14,21,28,-41,34,-49,-52,8,22,21,-31,29,-9,-7},{31,-78,34,-13,2,-74,-49,45,-122,15,-44,17,-55,-19,-68,-96,-5,-64,69,29,-18,-13,-9,68,63,55,-54,-16,29,-44,-35,-50},{0,-31,-36,52,19,-18,-10,-32,35,-8,-47,16,-4,-18,-54,-16,54,-50,-54,41,94,34,-58,-48,56,-74,26,28,78,27,-76,49},{-92,-36,-13,-54,34,-128,57,-107,-21,6,-65,28,-61,5,-75,-26,3,13,88,19,83,49,-75,-73,68,-75,-1,47,9,-59,-4,-39},{-5,37,-64,-25,-12,-23,-21,-43,45,-58,-14,59,-61,14,-93,-28,-1,19,-12,5,95,-41,48,47,-19,-17,20,-3,-2,-36,-53,-23},{-48,-11,26,29,5,47,-66,35,30,-33,-3,35,27,-2,69,-11,87,-16,-46,-4,17,21,21,58,76,42,11,10,37,51,-9,17},{4,-7,8,40,-25,-27,33,-6,26,-55,4,7,40,-5,-28,-101,-121,79,-59,-8,-33,37,-25,20,-34,10,1,57,53,45,-19,-106},{40,1,-16,-55,22,66,-12,-78,10,55,-12,-6,-20,-26,-113,-74,-33,-27,66,11,56,29,26,2,-33,24,68,-47,36,-29,-71,83},{31,-49,-73,48,48,94,-45,11,50,-36,8,40,63,-44,-51,59,-45,57,-36,-13,-2,3,-84,-12,57,-102,32,-27,48,-59,20,24},{-77,65,33,39,61,-26,-34,16,41,-84,26,-13,22,-34,-14,51,75,44,-55,-85,45,-91,-38,-81,-23,-50,-61,-23,-55,-91,8,30},{-73,-38,28,8,42,77,33,-9,12,67,33,-6,-31,9,-72,-11,-86,-67,15,-59,-9,9,74,24,-16,28,2,34,64,74,-84,53},{6,-66,-49,10,-63,34,-4,-14,51,55,-9,42,-37,-38,115,77,-19,91,-5,-9,10,41,-27,-72,43,7,-44,-29,70,-3,33,-26}}};
static const elem_t QConv_BN_mc2_4[32][32]=
{{-32,43,7,-2,-71,-118,47,-72,6,58,24,23,43,-6,81,-48,77,32,61,6,-17,-62,-53,-67,42,38,23,-19,-12,13,34,27},{-62,-58,-34,-26,69,73,-47,-36,48,-50,49,22,-44,-18,-97,59,-65,-95,-38,22,31,-9,-79,14,-32,-13,13,-19,-62,-19,-14,-9},{-16,-28,2,18,64,62,34,-29,72,41,-24,-26,-18,-3,-2,53,12,15,31,-26,-19,-72,43,-48,30,62,26,-26,49,-56,26,40},{31,-66,-48,-42,88,31,-21,-42,22,58,-6,39,71,-3,-11,41,-2,87,80,10,-56,-88,-52,32,-8,37,-14,-26,48,-16,4,68},{-33,30,-32,-40,20,-68,36,-32,-6,19,-18,-55,-13,-39,51,38,-97,-26,4,-51,25,-12,-29,-75,-49,52,48,-18,15,35,-83,84},{46,-29,61,-41,-32,79,-89,-42,-24,-5,-37,26,15,21,35,-25,25,85,18,8,-34,-29,-14,49,20,4,-78,-33,57,3,-40,-1},{-5,-9,31,17,-36,-10,-49,25,30,40,-33,23,-17,-7,83,31,-105,40,25,10,-2,-55,-5,-24,46,40,-18,-1,24,3,-29,54},{-45,37,-24,4,67,-61,20,14,-15,-38,57,-9,-51,15,6,18,12,-5,38,-24,14,-36,14,-39,-93,-6,-21,-24,-46,-71,58,-9},{-72,26,-51,-49,-41,-108,8,65,-8,16,3,54,-51,-20,53,-7,-72,-33,-107,7,-8,43,-20,-64,-79,-33,-32,-25,-84,-29,-59,71},{55,-33,-4,26,-23,6,-55,-14,72,-54,20,40,17,-30,113,-16,-42,20,24,51,22,5,-55,-22,-21,57,28,-21,34,-63,-40,16},{-38,78,-23,-1,-4,66,16,-84,-17,-11,25,-61,19,28,39,-128,-11,79,-2,13,-5,-16,1,-33,29,5,12,70,38,6,54,-19},{32,38,-5,-30,-77,-15,42,-38,66,82,-39,15,-29,-24,-23,47,-5,70,24,-22,70,-46,30,4,-38,-18,26,-19,-27,-26,-35,-49},{24,-31,-30,5,-14,-10,32,-51,61,-2,21,-27,-54,-22,46,-55,-9,19,38,33,35,109,-87,104,0,27,-38,27,49,-2,4,-108},{17,-39,64,15,23,15,-25,3,26,13,-7,-23,23,-33,-105,-48,2,22,-28,-12,34,-44,-21,53,48,35,30,17,8,-45,9,-35},{44,-109,10,-34,33,-26,-68,-51,-5,53,44,25,-25,38,-61,55,-77,-14,-63,12,72,-14,47,71,-4,-34,-42,18,-88,-11,-54,-41},{-14,19,46,48,51,-46,-50,32,21,78,54,-29,3,-13,106,98,32,62,4,-82,69,10,60,26,-5,-41,76,-1,16,20,51,102},{20,-24,-91,27,-39,-75,47,53,34,-31,42,36,41,-49,-2,18,63,55,55,-41,-82,-124,47,-50,49,10,34,-64,-6,14,-68,9},{15,-2,-33,29,-56,-37,56,-110,38,2,-44,15,-9,9,57,42,32,-46,4,92,-102,2,-70,-76,-11,59,46,-18,-5,-37,-2,-13},{-92,57,47,13,19,-55,16,100,58,-10,-16,39,-11,29,26,5,13,79,12,-36,6,-41,13,-59,-23,-44,40,34,-17,-34,-22,-50},{-92,-98,48,6,57,-22,10,-65,-33,70,-24,1,24,-32,68,65,23,31,48,-4,81,25,10,45,38,56,-4,-21,8,-7,28,-25},{-26,-7,-60,26,-11,-7,9,-37,-55,-13,8,-4,36,-17,-28,-9,-23,-44,14,21,28,-41,34,-49,-52,8,22,21,-31,29,-9,-7},{31,-78,34,-13,2,-74,-49,45,-122,15,-44,17,-55,-19,-68,-96,-5,-64,69,29,-18,-13,-9,68,63,55,-54,-16,29,-44,-35,-50},{0,-31,-36,52,19,-18,-10,-32,35,-8,-47,16,-4,-18,-54,-16,54,-50,-54,41,94,34,-58,-48,56,-74,26,28,78,27,-76,49},{-92,-36,-13,-54,34,-128,57,-107,-21,6,-65,28,-61,5,-75,-26,3,13,88,19,83,49,-75,-73,68,-75,-1,47,9,-59,-4,-39},{-5,37,-64,-25,-12,-23,-21,-43,45,-58,-14,59,-61,14,-93,-28,-1,19,-12,5,95,-41,48,47,-19,-17,20,-3,-2,-36,-53,-23},{-48,-11,26,29,5,47,-66,35,30,-33,-3,35,27,-2,69,-11,87,-16,-46,-4,17,21,21,58,76,42,11,10,37,51,-9,17},{4,-7,8,40,-25,-27,33,-6,26,-55,4,7,40,-5,-28,-101,-121,79,-59,-8,-33,37,-25,20,-34,10,1,57,53,45,-19,-106},{40,1,-16,-55,22,66,-12,-78,10,55,-12,-6,-20,-26,-113,-74,-33,-27,66,11,56,29,26,2,-33,24,68,-47,36,-29,-71,83},{31,-49,-73,48,48,94,-45,11,50,-36,8,40,63,-44,-51,59,-45,57,-36,-13,-2,3,-84,-12,57,-102,32,-27,48,-59,20,24},{-77,65,33,39,61,-26,-34,16,41,-84,26,-13,22,-34,-14,51,75,44,-55,-85,45,-91,-38,-81,-23,-50,-61,-23,-55,-91,8,30},{-73,-38,28,8,42,77,33,-9,12,67,33,-6,-31,9,-72,-11,-86,-67,15,-59,-9,9,74,24,-16,28,2,34,64,74,-84,53},{6,-66,-49,10,-63,34,-4,-14,51,55,-9,42,-37,-38,115,77,-19,91,-5,-9,10,41,-27,-72,43,7,-44,-29,70,-3,33,-26}};
static const acc_t QConv_BN_bias4[32] = 
{9739,8869,4999,-1290,-4095,6353,4515,11577,-9900,-3902,1903,-4289,4805,7417,-129,549,6837,-9706,-3515,3451,-9416,8772,7804,6257,-3418,-516,-1967,1516,-6320,9352,10126,-1967};
const struct Conv1d_Params QConv_BN4_params = {.input_width=12, .in_channels=16,.out_channels = 32,.kernel_size =2,.stride_size=2,.padding_front= 0,.padding_back= 0,.output_width=6,.out_scale=0.00620904923822707,.s1=0.021408801481338738,.z1=-2,.s2=0.006594336640601067,.z2=2,.sb=0.013658115779508774,.zb=-21,.s4=0.022737272426600702,.z4=-2};
static const elem_t QConv_BN5[2][32][32]=
{{{-71,24,-17,-1,5,32,52,60,75,-19,38,18,5,-57,25,46,67,74,34,-14,2,10,6,29,84,95,92,-128,-82,14,-117,-72},{20,95,-17,-26,-75,20,-14,-59,60,73,107,-51,-114,-50,-28,-44,-74,-32,-66,-54,5,94,-23,-82,-81,16,-10,-33,14,-42,-27,-112},{36,7,127,-15,-37,91,-50,-53,2,-3,4,-66,-19,17,-4,95,62,14,-20,67,95,-8,75,4,-42,36,-39,-61,-30,77,109,-100},{-8,-15,-125,-43,69,-13,36,0,34,53,-126,59,50,-12,47,-26,-50,43,17,-8,-35,-52,-63,-6,-57,-6,-8,-43,-54,-12,-3,-96},{24,-57,46,-6,-52,-43,-44,51,60,-49,-42,-1,-7,88,-70,35,58,13,19,11,-77,-64,-15,-92,-47,105,-67,-86,-19,23,-42,-79},{-40,127,-41,-23,-76,27,-52,-122,-97,-15,-6,-16,-74,-9,-89,89,13,28,-27,9,31,11,5,77,105,-22,70,-92,-79,-3,-14,-6},{-27,-15,50,-4,-27,127,-32,127,5,16,70,-26,20,-6,-29,56,57,60,33,-11,42,-88,9,-121,-63,24,-46,-65,58,33,-73,74},{34,-30,64,-25,-3,-31,18,58,-6,-29,43,-38,-28,-11,-56,-33,64,-6,29,-4,-9,-2,82,1,44,-85,-90,111,-85,30,-49,-12},{-37,-46,44,38,33,24,-40,-54,15,56,-22,-1,25,45,-51,-37,67,-11,30,0,20,-62,-49,69,-44,5,68,-94,-71,2,-47,-41},{51,-41,44,-17,13,19,-4,31,59,32,26,-37,-39,40,-78,-99,53,50,17,59,-24,-98,-23,12,-34,127,-33,-84,-56,-19,-22,-27},{44,-5,-56,48,-75,75,-24,125,-25,55,43,1,-46,50,-61,-62,-128,-29,-49,-44,-128,109,-27,54,-24,45,-6,-16,48,-14,16,109},{15,-20,-54,48,-85,-19,-40,0,-31,1,-73,-90,-56,31,8,15,44,41,9,23,37,10,-60,-64,-100,14,-83,-79,62,-18,30,-99},{-74,-41,5,22,-34,50,-36,-24,-50,-14,-111,-47,-58,-32,-59,80,22,76,31,-9,-55,-97,79,73,41,-128,-32,64,35,16,43,19},{74,98,-16,-93,120,17,86,-45,41,-6,5,-66,-84,-23,-30,9,-41,25,-34,87,-117,-38,-32,28,25,-84,-18,-90,-43,53,-76,-39},{26,-60,5,-36,-21,-20,-6,-45,50,-48,15,84,40,-39,13,-25,13,-58,21,42,-19,-4,50,39,54,102,36,-62,4,-46,-54,122},{-78,44,46,-51,-68,65,69,101,68,63,-52,116,12,-46,30,-8,40,65,-33,-44,-40,33,-13,-3,102,37,46,15,74,-66,-77,83},{-60,14,-15,127,83,68,12,13,10,59,-24,-78,92,18,-66,29,1,-21,13,27,13,9,44,4,58,78,-33,-30,30,112,-23,90},{-95,-25,51,24,24,76,67,52,-26,-1,36,9,-15,5,-76,63,-2,-13,69,58,11,-84,-30,-31,-57,58,-56,12,48,33,-8,-74},{80,-32,-44,7,-89,-26,45,71,-50,-40,19,-76,-22,87,-50,-15,-58,49,2,42,-17,94,-19,-9,-5,-19,-41,65,-28,30,-36,-1},{11,8,-1,-68,-8,23,-47,21,34,-17,-42,60,-26,-75,30,-3,-78,-60,-37,34,-35,22,18,-25,56,12,-36,2,-45,9,73,18},{-3,113,90,-23,-16,-22,20,-3,38,-82,55,101,-64,-7,-38,74,-3,13,-20,-62,12,32,31,-41,54,-39,48,19,-11,-22,-24,-42},{60,84,22,-9,102,-33,-37,-69,-41,7,-122,63,-128,-65,-64,-80,-23,60,55,-45,72,44,19,-45,37,-72,74,-30,-40,-37,-11,9},{-4,4,-61,-36,-78,-128,43,-17,53,35,-44,-20,-41,72,127,-73,-39,-43,16,127,70,-23,-45,87,-15,-11,55,-41,-104,18,-26,57},{-81,-16,-59,-39,37,38,-69,-14,13,4,-50,30,125,10,-36,42,19,21,77,-20,-36,62,6,9,94,6,54,-71,-65,54,53,-19},{9,-7,-33,-56,13,35,124,-67,18,74,-9,-26,-52,4,-64,-15,-64,24,0,14,-27,-27,27,-37,-56,6,45,-37,-46,-24,39,-19},{-89,-23,30,-47,-19,49,42,59,-36,7,-60,15,-39,75,-56,-1,-22,47,-7,-18,32,-64,-12,102,8,-25,51,18,22,40,7,-23},{35,-21,50,-6,40,-77,2,-50,-32,-52,-12,79,70,-9,18,-22,-22,-43,-20,-23,7,-21,68,11,-61,99,33,51,27,22,-42,46},{10,28,35,6,-89,3,-11,10,1,-85,-23,-30,-92,-41,17,48,-52,7,-42,72,-33,39,-24,-38,-29,61,25,-8,63,-31,-6,-46},{-90,37,-45,22,-2,-43,114,16,52,95,48,44,-73,-79,62,-18,61,29,41,16,72,-85,68,36,66,3,-21,51,-63,35,42,-29},{-35,114,-22,23,45,0,127,21,60,-25,-128,-62,86,19,5,-17,-50,-56,-71,55,-83,48,-58,104,-27,84,-40,-25,76,-6,83,127},{76,-2,10,70,127,-26,0,43,-22,11,-19,-39,-35,18,-65,-3,-22,-29,1,-47,-87,-43,-53,-64,64,-113,-77,-5,-128,-7,-128,-24},{78,-19,81,-44,-9,-41,39,-76,36,-65,-18,-42,75,-88,11,-25,36,-68,0,23,-46,21,-21,-14,52,-96,-45,-21,7,12,-20,46}},{{-82,-69,-59,-4,79,10,29,82,15,-23,-14,30,-68,14,85,14,-93,3,5,-33,71,54,39,-128,35,100,105,79,-21,-75,-128,-23},{-25,17,-86,-12,-73,113,-20,64,62,67,74,-30,-128,-5,22,-34,-122,14,21,30,127,-31,31,-128,-38,47,-73,-53,1,-21,69,-112},{60,99,25,73,-38,-25,1,5,0,34,93,28,-45,-18,37,119,-4,-119,16,72,109,5,-7,34,-51,-28,-13,14,28,56,3,4},{74,33,-78,-58,-59,0,-69,20,-74,69,-11,-78,-58,-31,-1,-26,23,43,67,60,7,71,7,46,35,95,14,-89,99,-40,-26,56},{11,89,-68,-25,-56,22,-51,74,35,-3,-12,44,38,21,-62,89,-8,13,-39,-10,26,-25,0,-21,1,63,49,-128,54,49,-89,56},{-21,-47,17,22,18,14,-65,26,-69,-50,108,96,-64,-1,1,60,-16,22,-14,-70,-16,94,-46,-48,127,-107,55,28,-25,-6,-31,-100},{10,3,44,-6,-40,0,-27,3,5,-28,38,102,-49,63,-72,78,-10,-21,-55,8,-25,-107,-14,-1,22,30,22,38,26,-2,-4,97},{54,-6,23,49,-35,16,36,8,-16,-69,48,33,-1,-23,-11,67,17,-83,-16,-39,56,49,-14,-71,80,-46,-58,31,-27,-70,-100,-22},{66,64,-43,-20,53,50,-29,-23,6,124,-52,-106,62,45,-118,-39,13,-63,86,-52,75,-24,12,-75,-21,62,-91,-88,13,13,-90,-82},{-18,-46,-30,6,75,-27,52,69,53,15,-122,4,78,115,-63,-10,12,53,-44,40,-72,-52,-8,-87,21,107,-60,-30,74,8,-68,-47},{56,-66,-58,-60,-17,74,40,127,-32,23,-32,-104,-22,64,-48,-11,0,7,3,-24,-89,125,14,32,31,33,52,87,-90,84,23,42},{51,44,-6,18,4,-71,40,-51,19,49,-120,64,-113,19,-16,-6,7,10,28,21,7,-42,-17,-18,33,-30,6,-66,90,-72,-40,-6},{-35,14,23,-11,-4,102,-26,69,-65,78,-28,23,58,-43,-28,4,-52,-48,61,-29,-74,50,68,-91,58,-92,-48,88,74,-69,32,56},{64,-6,-38,-44,2,-18,44,-103,58,-13,14,51,-3,-62,95,46,71,-77,-44,75,-66,-47,-55,4,46,-58,27,-2,37,8,-57,-111},{-30,17,77,4,40,17,-31,26,2,-52,19,90,-19,-47,-1,-43,70,-38,65,-25,15,-37,71,30,42,-6,51,-87,-69,-109,-78,6},{-11,-15,-71,-64,11,89,-39,-6,12,-3,-1,115,89,-4,-23,-4,15,72,-37,7,-3,-17,17,-5,20,57,54,117,48,8,25,8},{-16,-33,92,67,-27,-43,83,4,5,-9,61,3,114,50,-128,49,63,81,25,-17,55,-87,-15,7,-65,66,-7,-74,-66,60,44,-3},{116,-1,15,58,107,55,41,-113,31,33,114,4,-67,-45,-25,-99,6,-128,87,-24,27,61,-9,-76,-110,-63,-10,-97,-52,-10,22,79},{14,-35,-105,-95,-35,16,7,127,-31,39,-98,-53,-18,36,-3,-16,-46,77,-8,-14,-7,17,23,-33,-49,-2,-47,63,41,55,-5,17},{-87,-75,25,-50,48,95,74,2,-26,-18,52,-15,14,-104,75,-12,-96,44,-2,-47,-80,-25,-13,36,-10,-58,18,127,116,16,12,22},{-27,-4,127,56,-48,65,-35,27,-39,-77,30,23,-9,-13,-7,-15,58,-77,17,33,65,-43,28,-7,47,-86,-15,-84,-73,-78,64,-18},{-11,9,-86,-71,-62,-13,-81,13,-64,-51,-128,44,71,14,-46,-19,49,47,-7,-99,43,-34,-38,95,65,60,105,-83,1,3,79,-46},{9,-5,-1,-35,38,33,31,18,88,11,117,-19,-47,61,82,-66,-23,-85,40,44,70,31,31,-48,-48,-44,39,24,-46,73,-36,40},{-128,30,47,18,-3,-26,-55,-74,-21,44,21,-19,43,-66,13,96,-28,17,-40,-14,7,79,-17,-38,85,27,105,17,-54,68,-2,35},{-50,58,81,-19,-40,-58,127,-42,0,109,-34,58,-106,68,37,-87,39,-30,34,28,7,16,35,23,-2,90,-71,11,16,-36,127,-49},{20,51,-68,15,0,108,70,102,-78,65,87,-81,12,13,-67,-24,-42,64,-49,-36,-103,8,-32,58,-4,-58,14,73,40,-56,25,-3},{84,21,0,-25,-62,-22,-69,18,32,-20,-99,84,-82,7,22,23,17,41,-36,66,-68,10,19,-42,-9,-63,-20,-73,15,38,7,-76},{114,58,-40,-63,-128,-53,27,-64,65,-93,-85,-60,-29,12,-15,-35,-8,40,-45,126,-58,40,13,37,36,7,-79,2,56,52,37,8},{-57,-7,13,48,-10,-128,-46,-100,52,16,-92,-66,20,5,-56,-37,36,39,28,23,33,-10,32,41,67,78,61,-27,-99,20,54,27},{-41,-9,-30,-109,-5,-69,64,18,-18,2,-42,-58,121,1,-44,44,26,12,-1,41,70,2,-5,-11,-48,25,81,21,59,35,13,118},{65,-97,-31,4,116,-50,18,-61,-50,65,-21,-113,127,-36,-85,-24,50,-59,-27,-107,-113,-17,-1,-3,-38,84,-11,5,41,-51,-73,99},{24,-18,9,21,-35,-65,6,-23,97,-62,83,-93,4,-1,79,34,14,-115,-11,-15,-48,62,9,50,-33,-38,44,-29,-54,56,-35,87}}};
static const elem_t QConv_BN_mc2_5[64][32]=
{{-71,24,-17,-1,5,32,52,60,75,-19,38,18,5,-57,25,46,67,74,34,-14,2,10,6,29,84,95,92,-128,-82,14,-117,-72},{20,95,-17,-26,-75,20,-14,-59,60,73,107,-51,-114,-50,-28,-44,-74,-32,-66,-54,5,94,-23,-82,-81,16,-10,-33,14,-42,-27,-112},{36,7,127,-15,-37,91,-50,-53,2,-3,4,-66,-19,17,-4,95,62,14,-20,67,95,-8,75,4,-42,36,-39,-61,-30,77,109,-100},{-8,-15,-125,-43,69,-13,36,0,34,53,-126,59,50,-12,47,-26,-50,43,17,-8,-35,-52,-63,-6,-57,-6,-8,-43,-54,-12,-3,-96},{24,-57,46,-6,-52,-43,-44,51,60,-49,-42,-1,-7,88,-70,35,58,13,19,11,-77,-64,-15,-92,-47,105,-67,-86,-19,23,-42,-79},{-40,127,-41,-23,-76,27,-52,-122,-97,-15,-6,-16,-74,-9,-89,89,13,28,-27,9,31,11,5,77,105,-22,70,-92,-79,-3,-14,-6},{-27,-15,50,-4,-27,127,-32,127,5,16,70,-26,20,-6,-29,56,57,60,33,-11,42,-88,9,-121,-63,24,-46,-65,58,33,-73,74},{34,-30,64,-25,-3,-31,18,58,-6,-29,43,-38,-28,-11,-56,-33,64,-6,29,-4,-9,-2,82,1,44,-85,-90,111,-85,30,-49,-12},{-37,-46,44,38,33,24,-40,-54,15,56,-22,-1,25,45,-51,-37,67,-11,30,0,20,-62,-49,69,-44,5,68,-94,-71,2,-47,-41},{51,-41,44,-17,13,19,-4,31,59,32,26,-37,-39,40,-78,-99,53,50,17,59,-24,-98,-23,12,-34,127,-33,-84,-56,-19,-22,-27},{44,-5,-56,48,-75,75,-24,125,-25,55,43,1,-46,50,-61,-62,-128,-29,-49,-44,-128,109,-27,54,-24,45,-6,-16,48,-14,16,109},{15,-20,-54,48,-85,-19,-40,0,-31,1,-73,-90,-56,31,8,15,44,41,9,23,37,10,-60,-64,-100,14,-83,-79,62,-18,30,-99},{-74,-41,5,22,-34,50,-36,-24,-50,-14,-111,-47,-58,-32,-59,80,22,76,31,-9,-55,-97,79,73,41,-128,-32,64,35,16,43,19},{74,98,-16,-93,120,17,86,-45,41,-6,5,-66,-84,-23,-30,9,-41,25,-34,87,-117,-38,-32,28,25,-84,-18,-90,-43,53,-76,-39},{26,-60,5,-36,-21,-20,-6,-45,50,-48,15,84,40,-39,13,-25,13,-58,21,42,-19,-4,50,39,54,102,36,-62,4,-46,-54,122},{-78,44,46,-51,-68,65,69,101,68,63,-52,116,12,-46,30,-8,40,65,-33,-44,-40,33,-13,-3,102,37,46,15,74,-66,-77,83},{-60,14,-15,127,83,68,12,13,10,59,-24,-78,92,18,-66,29,1,-21,13,27,13,9,44,4,58,78,-33,-30,30,112,-23,90},{-95,-25,51,24,24,76,67,52,-26,-1,36,9,-15,5,-76,63,-2,-13,69,58,11,-84,-30,-31,-57,58,-56,12,48,33,-8,-74},{80,-32,-44,7,-89,-26,45,71,-50,-40,19,-76,-22,87,-50,-15,-58,49,2,42,-17,94,-19,-9,-5,-19,-41,65,-28,30,-36,-1},{11,8,-1,-68,-8,23,-47,21,34,-17,-42,60,-26,-75,30,-3,-78,-60,-37,34,-35,22,18,-25,56,12,-36,2,-45,9,73,18},{-3,113,90,-23,-16,-22,20,-3,38,-82,55,101,-64,-7,-38,74,-3,13,-20,-62,12,32,31,-41,54,-39,48,19,-11,-22,-24,-42},{60,84,22,-9,102,-33,-37,-69,-41,7,-122,63,-128,-65,-64,-80,-23,60,55,-45,72,44,19,-45,37,-72,74,-30,-40,-37,-11,9},{-4,4,-61,-36,-78,-128,43,-17,53,35,-44,-20,-41,72,127,-73,-39,-43,16,127,70,-23,-45,87,-15,-11,55,-41,-104,18,-26,57},{-81,-16,-59,-39,37,38,-69,-14,13,4,-50,30,125,10,-36,42,19,21,77,-20,-36,62,6,9,94,6,54,-71,-65,54,53,-19},{9,-7,-33,-56,13,35,124,-67,18,74,-9,-26,-52,4,-64,-15,-64,24,0,14,-27,-27,27,-37,-56,6,45,-37,-46,-24,39,-19},{-89,-23,30,-47,-19,49,42,59,-36,7,-60,15,-39,75,-56,-1,-22,47,-7,-18,32,-64,-12,102,8,-25,51,18,22,40,7,-23},{35,-21,50,-6,40,-77,2,-50,-32,-52,-12,79,70,-9,18,-22,-22,-43,-20,-23,7,-21,68,11,-61,99,33,51,27,22,-42,46},{10,28,35,6,-89,3,-11,10,1,-85,-23,-30,-92,-41,17,48,-52,7,-42,72,-33,39,-24,-38,-29,61,25,-8,63,-31,-6,-46},{-90,37,-45,22,-2,-43,114,16,52,95,48,44,-73,-79,62,-18,61,29,41,16,72,-85,68,36,66,3,-21,51,-63,35,42,-29},{-35,114,-22,23,45,0,127,21,60,-25,-128,-62,86,19,5,-17,-50,-56,-71,55,-83,48,-58,104,-27,84,-40,-25,76,-6,83,127},{76,-2,10,70,127,-26,0,43,-22,11,-19,-39,-35,18,-65,-3,-22,-29,1,-47,-87,-43,-53,-64,64,-113,-77,-5,-128,-7,-128,-24},{78,-19,81,-44,-9,-41,39,-76,36,-65,-18,-42,75,-88,11,-25,36,-68,0,23,-46,21,-21,-14,52,-96,-45,-21,7,12,-20,46},{-82,-69,-59,-4,79,10,29,82,15,-23,-14,30,-68,14,85,14,-93,3,5,-33,71,54,39,-128,35,100,105,79,-21,-75,-128,-23},{-25,17,-86,-12,-73,113,-20,64,62,67,74,-30,-128,-5,22,-34,-122,14,21,30,127,-31,31,-128,-38,47,-73,-53,1,-21,69,-112},{60,99,25,73,-38,-25,1,5,0,34,93,28,-45,-18,37,119,-4,-119,16,72,109,5,-7,34,-51,-28,-13,14,28,56,3,4},{74,33,-78,-58,-59,0,-69,20,-74,69,-11,-78,-58,-31,-1,-26,23,43,67,60,7,71,7,46,35,95,14,-89,99,-40,-26,56},{11,89,-68,-25,-56,22,-51,74,35,-3,-12,44,38,21,-62,89,-8,13,-39,-10,26,-25,0,-21,1,63,49,-128,54,49,-89,56},{-21,-47,17,22,18,14,-65,26,-69,-50,108,96,-64,-1,1,60,-16,22,-14,-70,-16,94,-46,-48,127,-107,55,28,-25,-6,-31,-100},{10,3,44,-6,-40,0,-27,3,5,-28,38,102,-49,63,-72,78,-10,-21,-55,8,-25,-107,-14,-1,22,30,22,38,26,-2,-4,97},{54,-6,23,49,-35,16,36,8,-16,-69,48,33,-1,-23,-11,67,17,-83,-16,-39,56,49,-14,-71,80,-46,-58,31,-27,-70,-100,-22},{66,64,-43,-20,53,50,-29,-23,6,124,-52,-106,62,45,-118,-39,13,-63,86,-52,75,-24,12,-75,-21,62,-91,-88,13,13,-90,-82},{-18,-46,-30,6,75,-27,52,69,53,15,-122,4,78,115,-63,-10,12,53,-44,40,-72,-52,-8,-87,21,107,-60,-30,74,8,-68,-47},{56,-66,-58,-60,-17,74,40,127,-32,23,-32,-104,-22,64,-48,-11,0,7,3,-24,-89,125,14,32,31,33,52,87,-90,84,23,42},{51,44,-6,18,4,-71,40,-51,19,49,-120,64,-113,19,-16,-6,7,10,28,21,7,-42,-17,-18,33,-30,6,-66,90,-72,-40,-6},{-35,14,23,-11,-4,102,-26,69,-65,78,-28,23,58,-43,-28,4,-52,-48,61,-29,-74,50,68,-91,58,-92,-48,88,74,-69,32,56},{64,-6,-38,-44,2,-18,44,-103,58,-13,14,51,-3,-62,95,46,71,-77,-44,75,-66,-47,-55,4,46,-58,27,-2,37,8,-57,-111},{-30,17,77,4,40,17,-31,26,2,-52,19,90,-19,-47,-1,-43,70,-38,65,-25,15,-37,71,30,42,-6,51,-87,-69,-109,-78,6},{-11,-15,-71,-64,11,89,-39,-6,12,-3,-1,115,89,-4,-23,-4,15,72,-37,7,-3,-17,17,-5,20,57,54,117,48,8,25,8},{-16,-33,92,67,-27,-43,83,4,5,-9,61,3,114,50,-128,49,63,81,25,-17,55,-87,-15,7,-65,66,-7,-74,-66,60,44,-3},{116,-1,15,58,107,55,41,-113,31,33,114,4,-67,-45,-25,-99,6,-128,87,-24,27,61,-9,-76,-110,-63,-10,-97,-52,-10,22,79},{14,-35,-105,-95,-35,16,7,127,-31,39,-98,-53,-18,36,-3,-16,-46,77,-8,-14,-7,17,23,-33,-49,-2,-47,63,41,55,-5,17},{-87,-75,25,-50,48,95,74,2,-26,-18,52,-15,14,-104,75,-12,-96,44,-2,-47,-80,-25,-13,36,-10,-58,18,127,116,16,12,22},{-27,-4,127,56,-48,65,-35,27,-39,-77,30,23,-9,-13,-7,-15,58,-77,17,33,65,-43,28,-7,47,-86,-15,-84,-73,-78,64,-18},{-11,9,-86,-71,-62,-13,-81,13,-64,-51,-128,44,71,14,-46,-19,49,47,-7,-99,43,-34,-38,95,65,60,105,-83,1,3,79,-46},{9,-5,-1,-35,38,33,31,18,88,11,117,-19,-47,61,82,-66,-23,-85,40,44,70,31,31,-48,-48,-44,39,24,-46,73,-36,40},{-128,30,47,18,-3,-26,-55,-74,-21,44,21,-19,43,-66,13,96,-28,17,-40,-14,7,79,-17,-38,85,27,105,17,-54,68,-2,35},{-50,58,81,-19,-40,-58,127,-42,0,109,-34,58,-106,68,37,-87,39,-30,34,28,7,16,35,23,-2,90,-71,11,16,-36,127,-49},{20,51,-68,15,0,108,70,102,-78,65,87,-81,12,13,-67,-24,-42,64,-49,-36,-103,8,-32,58,-4,-58,14,73,40,-56,25,-3},{84,21,0,-25,-62,-22,-69,18,32,-20,-99,84,-82,7,22,23,17,41,-36,66,-68,10,19,-42,-9,-63,-20,-73,15,38,7,-76},{114,58,-40,-63,-128,-53,27,-64,65,-93,-85,-60,-29,12,-15,-35,-8,40,-45,126,-58,40,13,37,36,7,-79,2,56,52,37,8},{-57,-7,13,48,-10,-128,-46,-100,52,16,-92,-66,20,5,-56,-37,36,39,28,23,33,-10,32,41,67,78,61,-27,-99,20,54,27},{-41,-9,-30,-109,-5,-69,64,18,-18,2,-42,-58,121,1,-44,44,26,12,-1,41,70,2,-5,-11,-48,25,81,21,59,35,13,118},{65,-97,-31,4,116,-50,18,-61,-50,65,-21,-113,127,-36,-85,-24,50,-59,-27,-107,-113,-17,-1,-3,-38,84,-11,5,41,-51,-73,99},{24,-18,9,21,-35,-65,6,-23,97,-62,83,-93,4,-1,79,34,14,-115,-11,-15,-48,62,9,50,-33,-38,44,-29,-54,56,-35,87}};
static const acc_t QConv_BN_bias5[32] = 
{-3052,-8877,1834,7095,3900,-11883,-10004,-10944,-6622,-8689,9537,3900,10289,-1361,20436,-3240,2397,-609,-3240,-3616,5967,1082,-4179,8034,-7749,-9065,-3803,16302,2397,-4555,12920,-1924};
const struct Conv1d_Params QConv_BN5_params = {.input_width=6, .in_channels=32,.out_channels = 32,.kernel_size =2,.stride_size=2,.padding_front= 0,.padding_back= 0,.output_width=3,.out_scale=0.003363195473725783,.s1=0.022737272426600702,.z1=-2,.s2=0.007182981921177285,.z2=0,.sb=0.030688117330013774,.zb=-15,.s4=0.0485613810000245,.z4=-9};
static const elem_t QDense_params[32][12] = 
{{-3,-29,48,32,52,-48,-48,66,-45,-57,0,47},{-14,-9,85,-41,3,34,-26,5,-70,68,16,13},{24,-78,-26,34,-35,38,33,-60,49,76,-39,84},{18,-34,-33,77,48,-41,54,11,12,73,-14,-61},{-60,46,22,59,82,-63,1,6,70,-10,-40,-31},{-18,-28,-72,-52,78,-9,-12,-64,-25,45,69,-48},{23,-47,-48,-65,3,85,49,53,24,8,-42,-12},{-45,-14,-46,12,6,-33,-29,38,-28,8,95,-39},{-42,6,-35,-77,-24,-6,-8,72,-8,-22,-54,85},{-19,-61,-76,-38,51,-10,65,-57,-18,1,40,-71},{-29,42,-41,59,53,21,-45,42,-36,52,-31,-45},{-4,35,-74,-58,-47,23,-47,-63,67,34,32,83},{-9,-32,-42,86,-17,-55,12,25,82,-64,-6,32},{-42,-20,-24,-17,-61,-24,61,69,-20,-49,80,47},{2,67,3,-10,-40,65,-61,40,-23,-62,-80,42},{5,-38,32,84,-88,13,36,-54,-30,54,55,11},{-35,-47,-6,18,-59,-35,53,-34,66,45,-55,75},{2,5,-55,-11,-89,54,21,-13,39,-44,93,27},{-15,-47,-3,-77,84,-50,35,-58,30,41,-11,-56},{-11,-32,61,-37,-29,63,51,75,-41,-9,-38,51},{-39,77,-34,18,-38,1,63,13,-47,70,-41,-18},{-4,75,74,29,60,10,-64,0,-36,-55,49,-9},{7,-48,-34,-45,-5,16,17,15,43,75,-34,-35},{-40,-3,71,-19,-83,69,42,-8,48,22,-65,-36},{-57,56,47,-49,-40,-65,-56,-35,85,47,48,-42},{-21,-37,-53,-114,-24,-68,54,60,36,-70,32,46},{13,88,47,-31,-3,-49,-19,5,45,-37,-28,-27},{-43,52,-50,41,-18,73,-59,6,7,-23,28,-72},{-29,-38,-24,30,-43,76,-46,-38,-39,-57,75,74},{-40,-39,42,36,-60,5,72,17,-60,-33,-22,-34},{-13,-96,39,7,-47,84,73,-65,-20,29,18,-37},{-21,-48,62,-24,55,60,-54,52,57,-46,48,-62}};
static const acc_t QDense_bias[12] = 
{5543,6253,6106,6115,6155,5890,6045,5935,6094,6041,6135,6053};
const struct Dense_Params Dense1_params = {.K=32,.J = 12,.out_scale=0.0036392365288598254,.s1=0.0485613810000245,.z1=-9,.s2=0.009397261282976938,.z2=10,.sb=0.0018616983119179227,.zb=3,.s3=0.1253955278533091,.z3=22};
#endif
