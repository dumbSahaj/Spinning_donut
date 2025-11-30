#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int k;

int main (){
    float A = 0;
    float B = 0;
    float theta, phi, z[1760];

    char b[1760];
    
    system("cls");
    
    while(1){
        memset(b,32,sizeof(b));
        memset(z,0,sizeof(z));
        for( phi = 0; phi < 6.28; phi += 0.07)
            for( theta = 0; theta < 6.28; theta += 0.02){
                float sintheta = sin(theta);
                float cosphi = cos(phi);
                float sinA = sin(A);
                float sinphi = sin(phi);
                float cosA = cos(A);
                float costheta = cos(theta);
                float cosB = cos(B);
                float sinB = sin(B);
                float radius_offset = cosphi+2;

                float D = 1/( sintheta * radius_offset * sinA + sinphi * cosA + 5 );
                float t = sintheta * radius_offset * cosA - sinphi * sinA;

                int x = 40 + 30 * D * ( costheta * radius_offset * cosB - t * sinB  );
                int y = 12 + 15 * D * ( costheta * radius_offset * sinB + t * cosB );
                int o = x + 80 * y;

                int Luminance = 8* (( sinphi * sinA - sintheta * cosphi * cosA ) * cosB - sintheta * cosphi * sinA - sinphi * cosA - costheta * cosphi * sinB );

                if (y > 0 && y < 22 && x > 0 && x < 80 && D > z[o]){
                    z[o]=D;
                    int L = Luminance;
                    if (L < 0) L = 0;
                    if (L > 11) L = 11;
                    b[o] = ".,-~:;=!*#$@"[L];
                }
            }
        printf("\x1b[H");

        for(k = 0; k < 1760 ; k++)
            putchar(k % 80 ? b[k] : '\n');
        
        A+=0.04;
        B+=0.02;
        
    
    }
    return 0;
}
