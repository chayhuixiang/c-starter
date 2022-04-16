#include <stdio.h>

int main(){
    enum company {google,facebook,xerox,yahoo,ebay,microsoft};
    enum company company1 = google;
    enum company company2 = xerox;
    enum company company3 = ebay;
    printf("%i\n",company2); //2
    printf("%i\n",company1); //0
    printf("%i\n",company3); //4
    return 0;
}