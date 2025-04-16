//week09_4_happy_bubble_part2
void setup(){
  size(400,400);
}
void draw(){
  stroke(179,32,75);
  strokeWeight(10);
  fill(220,21,77);
  rect(0,0,400,400,50);
  for(int i=100;i<=300;i+=100){
    line(0,i,400,i);
  }
  for(int i=0;i<4;i++){
    int x=50,y=50+i*100;
    stroke(179,32,75);
    fill(220,21,77);
    line(0,100,400,100);
    line(0,200,400,200);
    line(0,300,400,300);
    strokeWeight(4);
    ellipse(50,50,60,60);
    noStroke();
    fill(228,71,41);
    ellipse(50,50,25,25);
}
