// This file generated with wavecalc
// Authors: Hugo Paris, hugoplho@gmail.com, Dan Green danngreen1@gmail.com
//
// Wavetable name: 2018_08_05_HP_BetaTest_LFO_BANKS
// Wavetable by: Hugo Paris hugoplho@gmail.com

#include "arm_math.h"
#include "lfo_wavetable_bank.h"

const uint8_t lfo_sustain_pos[NUM_LFO_SHAPES] = {
	// ramps 1, 3/4, 1/2, 1/4, 1/8
	25,
	25,
	25,
	25,
	25,

	// rythmic waveshapes
	100,
	50,
	110,
	48,
	50,

	// sine, triangle, ramp, log_ramp, log_inv_ramp, offset
	128,
	128,
	254,
	254,
	128,
	128,

	// CPX SHAPES #1
	120,
	125,
	110,
	100,
	110,
	50,

	// CPX SHAPES #2
	105,
	115,
	135,
	120,
	128,
	100,
};

const uint8_t lfo_wavetable[NUM_LFO_SHAPES][LFO_TABLELEN] =
{
	// RAMP(s) descending - full, 3/4, 1/2, 1/8

		{253,252,251,250,249,248,247,246,245,244,243,242,241,240,239,238,237,236,235,234,233,232,231,230,229,228,227,226,225,224,223,222,221,220,219,218,217,216,215,214,213,212,211,210,209,208,207,206,205,204,203,202,201,200,199,198,197,196,195,194,193,192,191,190,189,188,187,186,185,184,183,182,181,180,179,178,177,176,175,174,173,172,171,170,169,168,167,166,165,164,163,162,161,160,159,158,157,156,155,154,153,152,151,150,149,148,147,146,145,144,143,142,141,140,139,138,137,136,135,134,133,132,131,130,129,128,127,126,125,124,123,122,121,120,119,118,117,116,115,114,113,112,111,110,109,108,107,106,105,104,103,102,101,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,0,0},

		{253,253,252,251,249,248,247,245,244,243,241,240,239,237,236,235,233,232,231,229,228,227,225,224,223,221,220,218,217,216,214,213,212,210,209,208,206,205,204,202,201,200,198,197,196,194,193,192,190,189,188,186,185,184,182,181,180,178,177,175,174,173,171,170,169,167,166,165,163,162,161,159,158,157,155,154,153,151,150,149,147,146,145,143,142,141,139,138,137,135,134,132,131,130,128,127,126,124,123,122,120,119,118,116,115,114,112,111,110,108,107,106,104,103,102,100,99,98,96,95,94,92,91,90,88,87,85,84,83,81,80,79,77,76,75,73,72,71,69,68,67,65,64,63,61,60,59,57,56,55,53,52,51,49,48,47,45,44,42,41,40,38,37,36,34,33,32,30,29,28,26,25,24,22,21,20,18,17,16,14,13,12,10,9,8,6,5,4,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

		{253,251,249,247,245,243,241,239,237,235,233,231,229,227,225,223,221,219,217,215,213,211,209,207,205,203,201,199,197,195,193,191,189,187,185,183,181,179,177,175,173,171,169,167,165,163,161,159,157,155,153,151,149,147,145,143,141,139,137,135,133,131,129,127,125,123,121,119,117,115,113,111,109,108,106,104,102,100,98,96,94,92,90,88,86,84,82,80,78,76,74,72,70,68,66,64,62,60,58,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

		{253,249,245,241,237,233,229,225,221,217,213,209,205,201,197,192,188,184,180,176,172,168,164,160,156,152,148,144,140,136,132,128,124,120,116,112,108,104,100,96,92,88,84,79,75,71,67,63,59,55,51,47,43,39,35,31,27,23,19,15,11,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

		{253,244,236,228,219,211,203,195,187,179,171,163,155,147,139,131,123,115,107,99,91,83,75,67,59,51,43,35,27,18,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

	// Time-based shapes (1/8 - 1/16th)

                {126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,183,183,183,183,183,183,183,183,183,183,183,183,183,183,183,183,43,46,50,53,57,60,64,67,71,74,78,81,85,88,92,95,218,214,209,204,200,195,191,186,182,177,173,168,163,159,154,150,9,14,20,25,31,36,41,47,52,58,63,69,74,80,85,90,210,210,210,210,210,210,209,209,209,209,209,209,208,208,208,208,67,72,76,80,84,88,93,97,101,105,110,114,118,122,127,131,135,139,144,148,152,156,161,165,169,173,178,182,186,190,195,199,13,12,11,10,9,8,6,5,4,3,2,1,0,0,0,0,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,242,234,226,218,211,203,195,187,179,171,164,156,148,140,132,124,117,109,101,93,85,77,70,62,54,46,38,30,23,15,7,0,42,53,63,73,83,93,103,113,123,133,143,153,163,174,184,194,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22},

                {141,139,163,186,207,224,238,248,252,252,248,238,224,207,186,163,138,113,89,66,45,27,13,4,0,0,3,13,27,44,65,88,113,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,124,124,124,124,124,124,118,104,92,81,71,64,59,56,56,59,64,72,81,92,104,117,130,143,155,166,175,183,188,190,190,187,182,175,165,155,143,130,131,146,160,172,183,191,197,200,200,197,191,183,172,159,145,130,115,100,86,73,62,54,48,45,45,48,53,62,73,85,100,115,111,90,70,52,36,24,16,12,12,16,24,37,52,70,90,111,132,154,173,191,206,218,226,230,230,226,218,206,190,173,153,132,121,121,120,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,121,120,120,120,120,120,120,120,120,120,120,125,134,142,149,156,161,164,165,165,163,160,155,148,141,133,124,115,107,99,92,85,81,78,76,76,78,81,86,92,99,107,127,111,95,80,66,54,45,39,35,35,39,45,54,66,79,94,110,127,143,158,172,183,192,199,202,202,199,192,183,171,158,143},

                {248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,248,249,249,249,249,249,249,249,249,249,249,249,249,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,59,59,59,59,59,60,60,60,60,60,60,60,60,60,60,60,60,61,61,61,61,61,61,61,61,61,61,61,61,62,62,62,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,201,201,201,201,201,201,201,201,201,201,201,201,201,201,201,201,201,18,18,18,18,18,18,18,19,19,19,19,19,19,19,19,19,19,19,19,20,20,20,20,20,20,20,20,20,20,20,20,21,124,123,123,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,171,170,170,170,170,170,170,170,170,169,169,169,169,169,169,169,169,168,168,168,168,168,168,168,168,167,167,167,167,167,167,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44},

                {48,77,97,109,119,126,133,138,144,148,153,157,162,166,170,174,178,182,186,191,195,200,205,211,217,224,232,241,252,253,253,253,253,181,149,129,115,104,95,88,81,75,69,64,59,54,50,45,41,37,33,29,25,20,16,12,7,2,0,0,0,0,0,0,0,0,14,32,42,50,55,59,63,66,68,70,72,74,75,76,77,78,79,79,79,80,80,80,79,79,78,77,75,73,70,65,56,70,103,115,122,128,133,137,141,144,147,151,154,156,159,162,165,168,171,174,177,180,184,188,192,197,202,208,215,224,237,253,253,166,144,131,121,113,107,101,96,92,88,84,80,76,73,69,65,62,58,54,50,46,42,37,32,26,19,11,1,0,0,0,0,67,96,114,127,137,145,152,159,165,170,175,180,184,188,193,197,201,204,208,212,217,221,225,230,235,240,246,253,253,253,253,253,223,209,202,193,189,186,183,181,179,177,176,175,174,174,173,173,173,172,172,172,172,173,173,174,174,175,177,178,181,184,191,212,159,152,147,143,140,138,135,133,131,130,128,126,124,123,121,119,118,116,114,112,110,108,105,102,99,95,90,85,77,67,52},

                {16,21,29,34,37,40,42,44,46,47,49,50,51,52,54,55,56,57,58,59,60,61,62,63,64,65,67,68,70,72,74,77,83,171,157,153,150,148,147,146,145,145,144,144,143,143,143,143,142,142,142,142,142,142,142,142,142,142,143,143,143,144,145,146,148,196,188,185,183,181,180,179,178,177,177,176,175,174,174,173,172,171,171,170,169,168,167,167,165,164,163,162,160,157,154,149,133,66,72,75,77,79,81,82,84,85,86,87,88,89,90,90,91,92,93,94,95,96,97,99,100,101,103,105,107,110,115,122,143,231,224,220,217,214,212,210,209,207,206,205,203,202,201,200,199,198,197,196,195,194,193,192,191,190,189,187,185,183,181,176,164,114,118,120,120,121,122,123,123,124,124,125,125,125,125,126,126,126,126,126,126,126,126,126,126,126,126,125,125,124,124,122,117,95,98,99,100,101,102,102,103,104,104,105,105,106,106,107,108,108,109,109,110,111,111,112,113,114,115,116,118,120,123,127,214,200,195,192,190,188,187,185,184,183,182,181,180,179,178,177,176,175,174,173,172,171,170,168,167,165,163,161,159,155,150,143},

	// STANDARD SHAPES
		// Sine
		{3,4,4,5,5,6,6,7,7,8,9,9,10,11,12,13,13,14,15,17,18,19,20,21,23,24,25,27,28,30,31,33,35,37,38,40,42,44,46,48,50,53,55,57,60,62,65,67,70,72,75,78,81,84,86,89,92,95,98,101,105,108,111,114,117,120,124,125,129,132,135,138,142,145,148,151,154,157,160,163,166,169,172,175,178,181,184,186,189,192,194,197,199,202,204,206,208,211,213,215,217,219,221,222,224,226,228,229,231,232,234,235,237,238,239,240,242,243,244,245,246,247,248,249,250,250,251,251,252,252,252,253,253,253,253,253,252,252,251,250,249,248,247,246,245,244,243,241,240,239,237,236,234,233,231,229,228,226,224,222,220,218,216,214,211,209,207,204,202,199,197,194,191,189,186,183,180,177,174,171,168,165,161,158,155,152,148,145,142,138,135,132,128,125,122,118,115,112,109,105,102,99,96,93,89,86,83,80,78,75,72,69,66,64,61,59,56,54,52,49,47,45,43,41,39,37,35,34,32,30,28,27,25,24,23,21,20,19,18,16,15,14,13,12,11,10,10,9,8,7,6,6,5,5,4,4},	

		// Triangle
		{0,1,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,101,103,105,107,109,111,113,115,117,119,121,123,125,127,129,131,133,135,137,139,141,143,145,147,149,151,153,155,157,159,161,163,165,167,169,171,173,175,177,179,181,183,185,187,189,191,193,195,197,199,201,203,205,207,209,211,213,215,217,219,221,223,225,227,229,231,233,235,237,239,241,243,245,247,249,251,253,253,251,249,247,245,243,241,239,237,235,233,231,229,227,225,223,221,219,217,215,213,211,209,207,205,203,201,199,197,195,193,191,189,187,185,183,181,179,177,175,173,171,169,167,164,162,160,158,156,154,152,150,148,146,144,142,140,138,136,134,132,130,128,126,124,122,120,118,116,114,112,110,108,106,104,102,100,98,96,94,92,90,88,86,84,82,80,78,76,74,72,70,68,66,64,62,60,58,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,1,0},

		// Ascending ramp
		{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,0,0,0},
                
                // Exponential Ascending ramp
                
                {1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,3,4,4,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7,8,8,8,8,8,9,9,9,10,10,10,10,11,11,11,11,12,12,12,13,13,13,13,14,14,14,15,15,15,16,16,16,17,17,17,18,18,18,19,19,20,20,20,21,21,22,22,22,23,23,24,24,25,25,25,26,26,27,27,28,28,29,29,30,30,31,31,32,32,33,33,34,34,35,35,36,37,37,38,38,39,40,40,41,42,42,43,43,44,45,45,46,47,48,48,49,50,50,51,52,53,54,54,55,56,57,58,58,59,60,61,62,63,64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,82,83,84,85,86,87,88,90,91,92,93,95,96,97,98,100,101,103,104,105,107,108,109,111,112,114,115,117,118,120,122,123,125,126,128,130,131,133,135,137,138,140,142,144,146,148,149,151,153,155,157,159,161,163,166,168,170,172,174,176,179,181,183,185,188,190,193,195,198,200,203,205,208,210,213,216,218,221,224,227,230,232,235,238,241,244,247,250,253},

		// Exponential descending ramp
                
                {253,250,247,244,241,238,235,232,229,226,223,221,218,215,213,210,207,205,202,200,197,195,192,190,187,185,183,180,178,176,174,172,169,167,165,163,161,159,157,155,153,151,149,147,145,144,142,140,138,136,135,133,131,129,128,126,125,123,121,120,118,117,115,114,112,111,109,108,106,105,104,102,101,100,98,97,96,94,93,92,91,89,88,87,86,85,84,83,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,63,62,61,60,59,58,57,57,56,55,54,53,53,52,51,50,50,49,48,47,47,46,45,45,44,43,43,42,41,41,40,40,39,38,38,37,37,36,35,35,34,34,33,33,32,32,31,31,30,30,29,29,28,28,27,27,26,26,25,25,24,24,24,23,23,22,22,22,21,21,20,20,20,19,19,18,18,18,17,17,17,16,16,16,15,15,15,14,14,14,13,13,13,13,12,12,12,11,11,11,11,10,10,10,9,9,9,9,8,8,8,8,7,7,7,7,7,6,6,6,6,5,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,1,1,1,0,0},

                // OFFSET

                {253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253},

        // Custom - 1

                {124,117,113,111,113,117,122,128,133,138,141,144,147,150,153,157,162,166,170,174,177,180,183,186,189,192,196,199,203,206,208,211,213,215,218,221,223,226,229,231,232,234,235,237,239,241,243,245,246,247,247,248,248,249,251,252,253,253,253,252,252,251,251,252,252,252,251,250,248,247,245,244,244,243,242,241,239,236,233,230,229,227,226,224,222,219,215,211,207,204,202,200,198,195,191,186,181,176,173,170,168,165,162,157,151,144,139,135,132,130,128,124,118,111,102,95,91,89,89,88,85,78,66,53,42,38,44,61,89,123,157,185,203,209,205,193,180,168,161,158,158,158,156,151,144,136,128,122,119,117,115,113,108,103,96,90,85,82,79,78,75,72,67,61,56,52,50,48,46,44,41,38,34,30,26,24,23,22,21,19,16,13,10,8,7,7,7,6,5,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,5,5,5,6,7,10,12,15,17,18,19,20,22,24,27,31,34,37,39,41,42,45,48,52,56,60,63,66,68,70,73,77,81,86,91,95,98,101,102,105,109,114,120,127,132,135,135,132,126},

                {0,0,1,5,9,14,18,22,26,30,34,38,42,46,50,54,58,62,66,70,74,78,82,86,90,94,98,102,107,111,115,119,123,127,131,135,139,143,147,151,155,159,163,167,171,175,179,183,187,191,195,199,204,208,212,216,220,224,228,232,236,240,244,248,252,253,249,245,241,237,233,229,224,220,216,212,208,204,200,196,192,188,184,180,176,172,168,164,160,156,152,148,144,140,136,132,128,124,120,116,112,108,104,100,96,92,88,84,80,76,72,68,64,60,56,52,48,44,40,36,32,28,24,20,16,12,8,4,0,3,11,19,27,35,43,51,59,67,75,82,90,98,106,114,122,130,138,146,153,161,169,177,185,193,201,209,217,224,232,240,248,247,239,231,223,215,207,199,191,183,175,167,159,151,143,135,127,119,111,103,95,87,79,71,63,55,47,39,31,23,15,7,0,10,26,42,58,74,89,105,121,137,153,169,185,201,216,232,248,241,225,210,194,178,162,147,131,115,99,84,68,52,36,21,0,27,58,88,119,150,180,211,244,222,191,160,128,97,65,34,0,50,110,171,234,201,142,82,22,58,176,166,0,0,123,139},

                {0,0,5,13,21,29,37,45,53,61,69,77,85,93,101,109,117,125,133,141,125,113,100,87,75,62,49,37,24,9,18,28,37,46,55,64,73,82,91,100,109,118,127,136,145,154,163,148,129,110,91,72,53,27,35,42,50,57,65,72,79,87,94,102,109,117,124,131,139,146,154,161,169,176,183,191,198,206,213,220,228,235,243,238,229,220,212,203,195,186,177,169,160,151,143,134,125,117,108,100,91,82,74,65,56,48,39,30,22,13,5,0,0,8,18,28,38,48,58,67,77,87,97,107,117,127,137,142,127,113,98,83,68,53,39,25,31,37,43,50,56,62,68,74,81,87,93,99,105,112,118,124,130,136,143,149,155,161,167,174,180,186,192,198,205,211,217,223,215,208,201,194,186,179,172,165,157,150,143,135,128,121,114,106,99,92,85,77,70,63,56,48,41,34,26,33,44,55,67,78,89,100,112,123,134,145,157,168,179,191,202,209,205,200,196,191,186,182,177,172,168,163,159,154,149,145,140,135,131,126,122,117,112,108,103,98,94,89,85,80,75,71,66,61,57,52,48,43,38,34,29,25,20,15,11,6},

                {129,129,129,128,128,128,128,129,129,128,128,128,129,129,128,128,128,129,129,129,128,128,128,112,112,113,113,113,113,113,113,113,113,113,113,113,112,112,107,107,107,107,107,107,107,107,107,107,107,107,107,106,120,146,155,155,155,155,155,155,155,155,155,155,155,155,155,181,180,181,181,181,181,181,181,181,181,181,181,181,181,168,142,116,90,87,87,87,87,87,87,87,87,87,86,86,60,34,20,20,20,20,20,20,20,20,20,20,20,21,21,47,72,98,124,146,146,146,146,146,146,146,146,146,145,158,185,211,238,253,253,252,252,252,253,253,253,252,252,252,226,200,174,148,139,139,139,139,139,139,139,139,140,140,127,100,74,48,27,27,27,27,27,27,27,27,27,28,28,54,80,96,96,96,96,96,96,96,96,96,96,97,97,97,123,148,173,173,173,173,174,173,173,173,173,174,174,174,160,147,147,147,147,147,147,147,147,147,147,147,147,147,147,120,111,111,111,111,111,111,111,111,111,111,111,111,111,116,116,117,117,117,117,117,117,117,117,117,117,117,118,118,129,129,128,128,128,128,128,128,128,128,128,128,128,128},

                {124,127,130,133,136,140,143,146,150,154,153,143,132,119,107,95,83,72,63,57,53,53,52,52,55,98,168,197,205,208,210,212,215,217,219,221,223,225,227,229,231,232,234,236,237,238,238,232,214,193,175,158,140,123,107,93,81,69,59,52,47,44,42,42,47,111,205,244,251,252,252,251,251,250,250,249,248,247,246,245,244,243,241,236,224,208,191,173,158,145,131,119,107,97,88,79,70,63,56,49,41,34,29,24,21,16,13,11,11,11,11,11,12,42,124,160,163,161,158,155,152,149,146,143,140,136,133,130,129,132,136,129,118,107,98,89,80,73,68,63,58,54,50,47,43,39,35,32,29,27,26,25,25,25,25,25,25,25,28,33,38,46,54,61,65,67,68,67,64,62,61,60,61,61,51,26,12,8,6,5,4,4,6,8,9,11,15,22,30,39,47,56,64,72,79,84,88,89,90,90,91,92,92,91,91,89,85,80,77,76,76,76,77,71,42,22,19,21,23,31,54,91,111,118,128,139,149,158,165,171,175,179,182,184,185,186,187,187,187,186,184,180,177,177,177,177,177,177,156,120,108,109,111,114,118,121},

                {126,126,126,126,126,126,126,98,75,75,75,75,75,75,75,75,75,75,75,102,158,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,149,93,38,24,24,24,24,24,24,24,24,24,24,75,75,75,75,75,75,75,75,75,75,75,75,130,186,227,227,227,227,227,227,227,227,227,227,172,126,126,126,126,126,126,126,126,126,126,126,70,24,24,24,24,24,24,24,24,24,24,24,52,107,163,176,176,176,176,176,176,176,176,176,149,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,70,24,24,24,24,24,24,24,24,24,24,24,79,135,176,176,176,176,176,176,176,176,176,176,227,227,227,227,227,227,227,227,227,227,227,227,172,116,61,24,24,24,24,24,24,24,24,24,52,75,75,75,75,75,75,75,75,75,75,75,102,158,213,227,227,227,227,227,227,227,227,227,199,144,126,126,126,126,126,126,126,126,126,126,98,75,75,75,75,75,75,75,75,75,75,75,75,126,126,126,126,126,126},

        // Custom - 2

                {102,99,98,98,97,96,95,94,94,93,92,91,90,90,89,88,87,87,91,98,106,113,121,128,136,143,151,158,166,173,181,188,196,203,211,218,226,217,207,198,189,180,171,162,153,144,135,126,117,108,98,98,105,113,120,128,135,143,150,158,165,173,180,188,187,178,169,160,151,141,132,123,114,105,96,87,94,102,109,117,124,132,139,147,154,154,145,135,126,117,108,99,90,81,72,63,62,69,77,84,75,66,57,48,39,30,21,15,18,18,25,33,40,48,55,63,70,78,85,93,100,108,115,123,130,138,145,153,160,168,175,183,190,198,205,213,220,228,235,243,244,243,242,241,241,240,239,238,238,237,236,235,234,234,233,232,231,230,230,229,228,227,226,226,225,224,223,222,222,221,220,219,218,218,217,216,215,214,214,205,196,186,177,168,159,150,141,132,123,114,105,96,87,77,68,59,50,41,32,23,14,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,10,18,25,33,40,48,55,63,70,78,85,93,100,108,115,123,130,138,145,136,127,118,109},

		{253,252,252,251,249,248,245,243,240,237,233,229,224,219,214,208,202,196,189,182,174,166,158,149,139,130,120,109,99,87,76,64,52,39,26,12,0,10,21,31,41,50,59,68,76,84,91,98,105,111,117,123,128,132,137,140,144,147,150,152,154,155,157,157,158,158,157,156,155,154,152,149,146,143,140,136,131,127,121,116,110,104,97,90,82,74,66,58,48,39,29,19,8,0,8,16,24,32,39,45,52,58,63,68,73,77,81,85,88,90,93,95,96,97,98,99,99,98,97,96,95,93,90,88,84,81,77,73,68,63,57,51,45,38,31,24,16,8,0,6,13,18,24,29,34,38,42,46,49,52,54,56,58,59,60,60,60,60,59,58,57,55,52,50,47,43,39,35,30,25,20,14,8,1,0,5,10,15,19,23,26,29,32,34,36,38,39,39,40,40,39,38,37,35,33,31,28,25,21,17,13,8,3,0,4,8,11,14,17,19,21,23,24,24,25,25,24,23,22,21,19,16,13,10,7,3,0,3,6,8,10,12,13,14,15,15,15,14,13,12,10,8,5,2,0,2,4,6,7,8,9,9,8,8,7,0},
                
                {0,1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,160,153,146,139,132,125,118,111,104,97,90,83,76,69,62,55,49,42,35,28,21,14,7,0,0,0,0,0,0,0,0,0,0,0,0,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,132,125,117,110,102,94,87,79,72,64,57,49,41,34,26,19,11,4,0,0,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,159,154,148,142,137,131,125,120,114,108,102,97,91,85,80,74,68,63,57,51,46,40,34,29,23,17,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,172,166,159,153,147,140,134,128,121,115,109,102,96,90,83,77,71,64,58,52,45,39,33,26,20,14,7,1,0,0,0,0,0,0,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,253},
		{254,252,251,250,249,248,247,246,245,244,243,242,241,240,91,97,103,108,114,120,125,131,136,142,148,153,159,165,170,176,182,187,193,199,21,24,26,29,32,35,37,40,43,46,48,51,54,57,59,62,65,68,70,73,76,79,81,84,87,90,92,95,98,101,103,106,109,186,185,184,183,182,181,180,179,178,177,176,175,174,173,172,171,170,169,168,167,166,165,164,163,162,161,160,159,41,44,48,51,55,58,62,65,68,72,75,79,82,86,89,93,96,100,103,106,110,113,117,120,0,0,0,5,10,16,21,27,32,37,43,48,54,59,65,70,75,81,86,92,97,103,108,113,119,124,130,135,141,146,151,157,162,168,173,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,64,71,77,84,91,97,104,111,117,124,131,137,144,151,158,164,171,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,28,35,42,48,55,62,69,76,83,90,97,104,110,117,124,131,138,145,152,159,166,172,179,24,23,22,21,20,19,18,17,16,15,17,29,41,53,65,77,88,100,112,124,4,3,2,1,0,0,0,0},

                {124,127,134,140,147,154,160,166,173,179,184,190,196,201,206,211,216,220,225,229,232,236,239,242,244,246,248,249,251,251,252,252,252,251,250,249,247,245,243,241,238,235,231,228,223,219,215,210,205,200,194,189,183,177,171,165,158,152,145,139,132,126,119,113,106,105,112,119,126,132,139,146,152,158,165,171,177,183,189,195,200,205,210,215,220,224,228,232,235,238,241,244,246,248,250,251,252,252,253,253,252,251,250,249,247,245,242,240,237,233,230,226,222,217,212,207,202,197,191,186,180,174,168,161,155,148,142,135,129,122,116,109,103,96,90,83,77,71,65,60,54,49,44,39,34,30,25,21,18,14,11,9,6,4,2,1,0,0,0,0,0,0,0,1,3,5,7,10,13,16,19,23,27,31,36,41,46,51,56,62,68,74,80,86,93,99,105,112,119,126,132,139,146,145,139,132,125,119,112,106,99,93,86,80,74,68,62,57,51,46,41,36,32,28,24,20,16,13,10,8,5,4,2,1,0,0,0,0,0,0,2,3,5,7,9,12,15,19,22,26,31,35,40,45,50,55,61,67,72,79,85,91,97,104,111,117},

                {38,34,34,34,34,27,27,27,27,14,1,14,18,14,20,33,41,41,41,54,55,55,55,42,42,55,68,76,83,83,96,97,97,97,110,123,125,112,99,99,98,98,85,80,93,98,111,112,112,112,112,112,112,112,112,99,112,125,138,140,153,154,154,167,168,168,181,182,195,208,203,196,196,196,196,209,216,223,210,210,223,210,197,189,182,182,182,182,176,168,168,168,168,162,149,161,168,168,181,182,182,182,182,195,196,196,196,197,209,210,210,210,223,224,231,244,244,245,245,232,225,218,211,211,211,211,211,211,211,211,211,211,211,211,224,225,225,238,251,246,233,220,211,205,197,198,198,198,198,198,211,205,192,184,177,170,170,164,156,156,156,156,143,142,142,136,136,123,115,128,129,142,143,143,143,156,163,163,150,143,143,143,143,143,156,143,130,117,109,101,101,95,88,81,68,55,60,73,67,67,54,54,67,74,74,74,74,74,74,87,82,82,88,82,88,82,88,88,88,95,95,82,69,61,54,41,33,46,47,47,47,47,47,47,47,47,41,33,33,33,27,14,6,6,19,6,6,19,32,34,34,34,34,34,47,41}

};
