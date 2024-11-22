#include <string.h>
#include <stdio.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
   long long sizeInBytes = (long long)w * h * 24;

if (strcmp(unit, "KB") == 0) {
        return sizeInBytes / 1024.0;
    } else if (strcmp(unit, "MB") == 0) {
        return sizeInBytes / (1024.0 * 1024.0);
    } else if (strcmp(unit, "GB") == 0) {
        return sizeInBytes / (1024.0 * 1024.0 * 1024.0);
    } else if (strcmp(unit, "bt") == 0) {
        return (float) sizeInBytes;
    }
    return sizeInBytes;
}
int main() {
    int width, height;
    char unit[4];
    printf("Enter width (pixels): ");
    scanf("%d", &width);

    printf("Enter height (pixels): ");
    scanf("%d", &height);

    printf("Enter unit (KB, MB, GB, bt): ");
    scanf("%s", unit);

    
    float size = coloredBitmap(width, height, unit);
    printf("Image size: %.2f %s\n", size, unit);

   // YOUR CODE HERE - END
   return 0;
}