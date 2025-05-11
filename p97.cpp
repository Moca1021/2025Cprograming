#include<stdio.h>
#include<math.h>
int n;
struct point{int x; int y; float dist;};
int main(){
    point p[10];
    int mi; float mdist;
    scanf("%d", &n);
    mi=0; mdist=999;
    for(int i= 0; i<n; i++){
        scanf("%d %d", &p[i].x, &p[i].y);
        p[i].dist=(float)sqrt(p[i].x*p[i].x+p[i].y*p[i].y);
        if(p[i].dist<mdist)
        {mi=i; mdist=p[i].dist;}
    }
    printf("%d %d %.3f\n", p[mi].x, p[mi].y, p[mi].dist);
}