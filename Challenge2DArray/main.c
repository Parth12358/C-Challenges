#include <stdio.h>

int main(int argc, char **argv)
{
	float weatherRecord[5][12] = {
        {12.5,14.0,15.7,24.9,12.5,0.0,0.5,5.6,10.4,12.5,3.4,0.0},
        {14.5,2.0,35.7,26.2,1.5,0.1,0.5,5.6,9.4,12.5,3.0,10.0},
        {0.5,15.0,15.7,24.2,15.0,3.0,0.5,3.6,10.0,12.3,1.4,0.0},
        {12.5,14.0,15.7,24.9,12.5,0.0,0.5,5.6,10.4,12.5,3.4,0.0},
        {12.5,14.0,15.7,24.9,12.5,0.0,0.5,5.6,10.4,12.5,3.4,0.0}
    };
    float aveTotalRainfall;
    float monthlyAverageRain[12] = {0};
    float totalYearRain[5] = {0};
    int i;
    int j;
    
    for(i = 0; i<5;++i)
    {
        for (j=0; j<12;++j)
        {
            totalYearRain[i] += weatherRecord[i][j];
            monthlyAverageRain[j] += (weatherRecord[i][j]/5);
        }
    }
    
    int year = 2010;
    printf("YEAR    RAINFALL(inches)");
    for(year=2010,i=0;year<2015;++year,++i)
    {
        printf("%d    %f\n",year,totalYearRain[i]);
        aveTotalRainfall = totalYearRain[i]/5;
    }
    
    printf("\n\nThe yearly average is %f inches\n",aveTotalRainfall);
    
    printf("\nJan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    printf("\n");
    for(i=0;i<12;++i)
    {
        printf("%.2f  ",monthlyAverageRain[i]);
    }
    
	return 0;
}
