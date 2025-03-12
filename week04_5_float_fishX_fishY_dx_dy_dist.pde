//week04_5_float_fishX_fishY_dx_dy_dist
//File-Prefrenece 字型要大
void setup(){
  size(600, 400);
}
int x,y;//飼料座標
float fishX = 300,fishY = 200;//魚座標
void draw(){
  background(#C0ffee);//裡面是數字0不是字母O
  ellipse(fishX,fishY,30,10);
  if(x>0){//有飼料的話
    y +=2;//往下掉
    if(y>400)x = 0;//超出畫面，x 變成 0
    ellipse(x ,y ,8 ,8 );//畫出飼料
    float dx = x - fishX,dy = y - fishY;//向量
    float d = dist(x, y, fishX, fishY);//距離
    fishX += dx/d*4;//靠近飼料
    fishY += dy/d*4;
   }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
