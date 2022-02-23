/**
 * @file Illumin_Correct.h
 * @author StanleyHsu (jkyou98@gmail.com)
 * @brief Function prototypes for illumination correction
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef ILLUMIN_CORRECT_H_
#define ILLUMIN_CORRECT_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include "param.h"
#include <stdint.h>

  /// @brief Error codes for image crop
  typedef enum Illumin_Correct_error_e
  {
    /// No error
    ILLUMIN_CORRECT_ERROR_OK = 0,
    /// Invalid arguments (ex.NuLL pointer, parameter overflow)
    ILLUMIN_CORRECT_ERROR_INVARG,
    /// Total # of errors in this list (NOT AN ACTUAL ERROR CODE);
    /// NOTE: that for this to work, it assumes your first error code is value
    /// 0 and you let it naturally increment from there, as is done above,
    /// without explicitly altering any error values above
    ILLUMIN_CORRECT_ERROR_COUNT
  } Illumin_Correct_error_t;

  /**
   * @brief      Function to get a printable string from an enum error type
   * @param[in]  err   a valid error code for Illumin_Correct module
   * @return     A printable C string corresponding to the error code input
   * above, or NULL if an invalid error code was passed in
   */
  const char *Illumin_Correct_error_str (Illumin_Correct_error_t err);

  /**
   * @brief Illumination correction with parameter PARAM.
   *
   * @param IMG image struct
   * @param PARAM paramter struct of outliers correction
   */
  Illumin_Correct_error_t Illumin_Correct (ImageInfo *IMG,
                                           Illumin_Correct_param *PARAM);
#ifdef __cplusplus
}
#endif
#endif