bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
 int minx=x2<xCenter?x2:xCenter;
 int maxx=minx>x1?minx:x1;
 int dx=xCenter-maxx;

int miny=y2<yCenter?y2:yCenter;
int maxy=miny>y1?miny:y1;
int dy=yCenter-maxy;
 return dx*dx+dy*dy<=radius*radius;
}