#include <stdio.h>
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
long long grayScaleImageSizeBits(int w, int h) {
   // YOUR CODE HERE - BEGIN
   if (w > 0 && h > 0) {
        return w * h *8; 
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

    
    long long sizeInBits = grayScaleImageSizeBits(width, height);

   
    if (size > 0) {
        printf("The size of the grayscale image is: \n");
        long long sizeInBytes = sizeInBits / 8;

        
        if (sizeInBytes < 1024) {
           
            printf("  %lld bytes\n", sizeInBytes);
        } else if (sizeInBytes < 1024 * 1024) {
           
            double sizeInKB = sizeInBytes / 1024.0; 
            printf("  %.2f KB\n", sizeInKB);
        } else if (sizeInBytes < 1024 * 1024 * 1024) {
            
            double sizeInMB = sizeInBytes / (1024.0 * 1024); 
            printf("  %.2f MB\n", sizeInMB);
        } else {
           
            double sizeInGB = sizeInBytes / (1024.0 * 1024 * 1024); 
            printf("  %.2f GB\n", sizeInGB);
        }
    } else {
        printf("Invalid dimensions provided. Please enter positive values.\n");
    }

    return 0;
}