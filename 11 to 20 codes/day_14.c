 #include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    float e,f,g,h;
    
    scanf("%d %d", &a,&b);
    c = a + b;
    d = a - b;
    printf("%d %d\n", c,d);
    
    scanf("%f %f", &e,&f);
    g = e + f;
    h = e - f;
    printf("%.1f %.1f\n", g,h);
    
    return 0;
}
