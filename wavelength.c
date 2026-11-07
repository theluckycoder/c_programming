#include<stdio.h>
#include<math.h>
int main(){
    float d,left,right;
    int n;
    double sum;
    int N=100000,cases;

    printf("Enter the number of cases: ");
    scanf("%d",&cases);
   for(int i=0;i<cases;i++){
        printf("Enter the distance: ");
        scanf("%f",&d);
        printf("Enter the order number: ");
        scanf("%d",&n);
        printf("Enter the distance btw central maxima and left image: ");
        scanf("%f",&left);
        printf("Enter the distance btw central maxima and right image: ");
        scanf("%f",&right);
        printf("d=%f n=%d left=%f right=%f \n",d,n,left,right);
        //mean computation:
        float x=(left+right)/2;
        //deviation angle(theta):
        double theta=atan(x/d);
        //sine of deviation angle:
        double sine=sin(theta);
        //wavelength computation:
        double w= sine/(n*N);

        //sum of wavelengths:
        sum+=w;
        //mean value of wavelengths:
        double mean=sum/(i+1);
        //lets print all computed values!
        printf("***********************************************************");
        printf("\nMean value: %f",x);
        printf("\nDeviation angle: %e",theta);
        printf("\n deviation angle in degrees: %e",theta*180/M_PI);
        printf("\nSine of deviation angle: %e",sine);
        printf("\nWavelength: %e",w);
        printf("\n***********************************************************");
        printf("\n Mean value of wavelengths: %e \n",mean);
    }

}