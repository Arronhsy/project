package Hannoi;
import java.awt.Component;
import java.awt.Container;

import Hannoi.Disc;
import Hannoi.TowerPoint;
public class TowerPoint{
    int x,y;   //塔上的点位置，即盘子的放置位置               
    boolean haveDisc; //判断点上是否有盘子          
    Disc disc=null;
    public TowerPoint(int x,int y){
 
       this.x=x;
       this.y=y;
    }
    public boolean isHaveDisc(){
        return haveDisc;
    }
    public void setHaveDisc(boolean boo){
        haveDisc=boo;
    }
    public int getX(){               //获得点位置坐标
        return x;
    }
    public int getY(){
        return y;
    }
    public boolean equals(TowerPoint p){
       if(p.getX()==this.getX()&&p.getY()==this.getY())
          return true;
       else
          return false; 
    }
    public void putDisc(Component com,Container con){
        disc=(Disc)com;
        con.setLayout(null);//设置布局
        con.add(disc);//加盘子到容器中
        int w=disc.getBounds().width;//获得盘子的长和宽 
        int h=disc.getBounds().height;
        disc.setBounds(x-w/2,y-h/2,w,h);//setBounds()移动组件并调整其大小，控件位置坐标，后面是宽度和高度
        haveDisc=true;
        disc.setPoint(this);
        con.validate(); 
    }
    public Disc getDiscOnPoint(){
        return disc;
    }
    public void removeDisc(Component com,Container con){
        if(com!=null) 
           con.remove(com);
        con.validate(); 
    }
}
