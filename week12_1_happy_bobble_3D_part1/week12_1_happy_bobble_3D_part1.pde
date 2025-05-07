// week12_1_happy_bobble_3D_part1
void setup(){
  size(300,300,P3D);
}
void draw(){
  background(225);
  
  pushMatrix();//備份矩陣
  translate(mouseX,mouseY);
  sphere(60);//圓球
  popMatrix();//還原矩陣
}
