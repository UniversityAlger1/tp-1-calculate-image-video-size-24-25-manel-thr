#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
   const int colorBitsPerPixel = 24;
   const int bwBitsPerPixel = 8;


   int totalFramesColor = durationMovie * fps;
   int totalFramesCredits = durationCredits * fps;

   long colorSectionSizeBits = w * h * colorBitsPerPixel * totalFramesColor;
   long bwSectionSizeBits = w * h * bwBitsPerPixel * totalFramesCredits;
   long totalSizeBits = colorSectionSizeBits + bwSectionSizeBits;


   if (strcmp(unit, "bits") == 0) {
        return totalSizeBits;
    }
    else if (strcmp(unit, "bytes") == 0) {
        return totalSizeBits / 8.0;
    }
    else if (strcmp(unit, "KB") == 0) {
        return totalSizeBits / 8.0 / 1024.0;
    }
    else if (strcmp(unit, "MB") == 0) {
        return totalSizeBits / 8.0 / 1024.0 / 1024.0;
    }
    else if (strcmp(unit, "GB") == 0) {
        return totalSizeBits / 8.0 / 1024.0 / 1024.0 / 1024.0;
    }
    else {
        printf("Unsupported unit: %s\n", unit);
        return -1.0;
    }
}
int main() {
    int width, height, durationMovie, durationCredits, fps;
    char unit[10];

   
    printf("Enter the width of the image: ");
    scanf("%d", &width);
    printf("Enter the height of the image: ");
    scanf("%d", &height);
    printf("Enter the duration (in seconds) of the color section: ");
    scanf("%d", &durationMovie);
    printf("Enter the duration (in seconds) of the black-and-white section: ");
    scanf("%d", &durationCredits);
    printf("Enter the frames per second (fps): ");
    scanf("%d", &fps);
    printf("Enter the unit for size (bits, bytes, KB, MB, GB): ");
    scanf("%s", unit);

    
    float size = video(width, height, durationMovie, durationCredits, fps, unit);
    
    if (size != -1.0) {
        printf("Video size: %.2f %s\n", size, unit);
    }

   // YOUR CODE HERE - END
   return 0;
}