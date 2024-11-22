#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
   if (w > 0 || h > 0) {
        return w * h; 
    }

   // YOUR CODE HERE - END
   return 0;
}
int main() {
    int width, height;

    
    printf("Please enter the width (w) of the image: ");
    scanf("%d", &width);

    printf("Please enter the height (h) of the image: ");
    scanf("%d", &height);

    
    int size = grayScaleImageSize(width, height);

   
    if (size > 0) {
        printf("The size of the grayscale image is: %d bytes\n", size);
    } else {
        printf("Invalid dimensions provided. Please enter positive values.\n");
    }

    return 0;
}