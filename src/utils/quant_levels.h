// Copyright 2011 Google Inc. All Rights Reserved.
//
// This code is licensed under the same terms as WebM:
//  Software License Agreement:  http://www.webmproject.org/license/software/
//  Additional IP Rights Grant:  http://www.webmproject.org/license/additional/
// -----------------------------------------------------------------------------
//
// Alpha plane quantization utility
//
// Author: vikasa@google.com (Vikas Arora)

#ifndef WEBP_UTILS_QUANT_LEVELS_H_
#define WEBP_UTILS_QUANT_LEVELS_H_

#include <stdlib.h>

#include "../webp/types.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

// Replace the input 'data' of size 'width'x'height' with 'num-levels'
// quantized values. If not NULL, 'mse' will contain the mean-squared error.
// Valid range for 'num_levels' is [2, 256].
// Returns false in case of error (data is NULL, or parameters are invalid).
int QuantizeLevels(uint8_t* data, int width, int height, int num_levels,
                   float* mse);

#if defined(__cplusplus) || defined(c_plusplus)
}    // extern "C"
#endif

#endif  /* WEBP_UTILS_QUANT_LEVELS_H_ */