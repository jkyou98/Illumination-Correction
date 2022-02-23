#ifndef PARAM_H_
#define PARAM_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <stdint.h>
  /**
   * A structure to represent image basic info.
   */
  typedef struct ImageInfo_t
  {
    /**
     * @name Buffer
     */
    /*@{*/
    void *image;        /**< pointer which point to image buffer */
    void *output_image; /**< pointer which point to output buffer */
    /*@}*/
    /**
     * @name Info
     */
    /*@{*/
    uint16_t width;        /**<  image width */
    uint16_t height;       /**< image height*/
    uint8_t bit;           /**< image bit*/
    uint8_t update_status; /**< 0:original,
                            *1:*image updated,
                            *2:save to *output_image */
    /*@}*/
  } ImageInfo;
  /**
   * A structure to represent Illumination Correction parameter info.
   */
  typedef struct Illumin_Correct_param_t
  {
    void *image_padding; /**< pointer which point to image padding buffer */
    void *Gauss_filter;  /**< pointer which point to gaussian filter buffer */
    void *image_blur;    /**< pointer which point to image blur buffer */
    uint8_t Gaussian_radius; /**< radius of gaussain filter */
  } Illumin_Correct_param;

#ifdef __cplusplus
}
#endif
#endif