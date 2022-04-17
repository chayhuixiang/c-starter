#include <stdio.h>

float getTotalYearRainfall(float yearRainfall[12]){
    float total = 0;
    for (int i = 0;i<12;i++){
        total += yearRainfall[i];
    }
    return total;
}

int main(){
    float rainfall[5][12] = {
        {7.3,7.3,4.9,3.0,2.3,0.6,1.2,0.3,0.5,1.7,3.6,6.7},
        {1.2,2.3,3.4,4.5,5.6,6.7,1.2,2.3,3.4,4.5,5.6,6.7},
        {2.4,2.7,4.5,3.4,7.4,2.1,6.5,4.8,9.5,6.4,3.4,5.3},
        {1.2,1.2,5.2,6.5,7.4,8.3,5.3,2.4,6.3,4.3,2.3,5.6},
        {1.2,3.1,2.5,3.6,5.5,3.5,7.4,3.7,2.2,4.3,2.3,6.2},
    };

    printf("YEAR    RAINFALL(inches)\n");
    float total = 0;
    for (int i=0; i<5; i++){
        float yearTotalRainfall = getTotalYearRainfall(rainfall[i]);
        printf("201%d\t%.1f\n",i,yearTotalRainfall);
        total += yearTotalRainfall;
    }

    float average = total/5;
    printf("\nThe yearly average is %.1f inches.\n\nMONTHLY AVERAGES:\n\nJan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n",average);
    for (int i = 0; i<12; i++){
        float monthTotalRainFall = 0;
        for (int j = 0; j<5; j++){
            monthTotalRainFall += rainfall[j][i];
        }
        float monthAvgRainfall = monthTotalRainFall/5;
        printf("%.1f ",monthAvgRainfall);
    }
    return 0;
}